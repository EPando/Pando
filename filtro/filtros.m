function varargout = filtros(varargin)
% FILTROS M-file for filtros.fig
%      FILTROS, by itself, creates a new FILTROS or raises the existing
%      singleton*.
%
%      H = FILTROS returns the handle to a new FILTROS or the handle to
%      the existing singleton*.
%
%      FILTROS('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FILTROS.M with the given input arguments.
%
%      FILTROS('Property','Value',...) creates a new FILTROS or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before filtros_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to filtros_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help filtros

% Last Modified by GUIDE v2.5 23-Jul-2013 12:12:59

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @filtros_OpeningFcn, ...
                   'gui_OutputFcn',  @filtros_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before filtros is made visible.
function filtros_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to filtros (see VARARGIN)

% Choose default command line output for filtros
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes filtros wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = filtros_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)

% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
clc
v1=get(handles.VFiltro, 'Value');
v2=get(handles.VTipo, 'Value');
v3=get(handles.VOrden, 'Value');
if v3==1
    orden=20
    
elseif v3==2
        orden=40
    else
        orden=60
    end
    
F=str2double(get(handles.Signal, 'String'))
%rizo=str2double(get(handles.rizo, 'String'))
fci=str2double(get(handles.FC, 'String'))
fcs=str2double(get(handles.FC1, 'String'))
%Nyq=F/2
%fn=fci/Nyq
%T=1/F
a=str2num(get(handles.Amp,'String'));
%[y,x]=wavread('C:\Users\Laura\Downloads\Dani.wav') 
%sound(y,x)
x=-pi:0.01:pi;
%y=wavread('C:\Users\Laura\Downloads\Dani.wav')
y=a*sin(x*2*pi*F);
plot (handles.axes1, y,'g')
L=length(y);
Fs=100;
NFFT = 2^nextpow2(L); 
Y = fft(y,NFFT)/L;
f = Fs/2*linspace(0,1,NFFT/2+1);
plot(handles.axes2,f,2*abs(Y(1:NFFT/2+1)))
sound(y)
opc=1/0.01;
fe=opc/2;
if v1==1 && v2==1 
        vp=(fci+1)/fe;
        wn=(fci-1)/fe;
        rp=3;
        %rn=orden;        
        [n,wn]=buttord(vp, wn, rp, orden);
        [B,A]=butter(n,wn,'high');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==1 && v2==2
        vp=(fci+1)/fe;
        wn=(fci-1)/fe;
        rp=3;
        %rn=orden;        
        [n,wn]=buttord(vp, wn, rp, orden);
        [B,A]=butter(n,wn,'low');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==1 && v2==3
        vp=[fci fcs]/fe;
        ff=(fcs+1)-(fci);
        wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;
        %rn=orden;        
        [n,wn]=buttord(vp, wn, rp,orden);
        [B,A]=butter(n,wn);
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==1 && v2==4
        vp=[fci fcs]/fe;
        ff=(fcs+1)-(fci);
        wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;       
        [n,wn]=buttord(vp, wn, rp,orden);
        [B,A]=butter(n,wn,'stop');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==2 && v2==1
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;       
        [n,Wn]=cheb1ord(vp, Wn, rp,orden);
        [B,A]=cheby1(n,rp,Wn,'high');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==2 && v2==2
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;        
        [n,Wn]=cheb1ord(vp, Wn, rp,orden);
        [B,A]=cheby1(n,rp,Wn,'low');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
 %%%%%%%%%%%%%%%%%%%%%%%%       %%%%%%%%%%%%%%%%%%%%%%%%%%
elseif v1==2 && v2==3
        vp=[fci fcs]/fe;
        ff=(fci+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;     
        rp=3;  
        [n,Wn]=cheb1ord(vp, Wn, rp,orden);
        [B,A]=cheby1(n,rp,Wn);
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
   %%%%%%%%%%%%%%%%%%%%%%%%     %%%%%%%%%%%%%%%%%%%%%%%%%55
elseif v1==2 && v2==4
        vp=[fci fcs]/fe;
        ff=(fci+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;     
        rp=3;  
        [n,Wn]=cheb1ord(vp, Wn, rp,orden);
        [B,A]=cheby1(n,rp,Wn, 'stop');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
elseif v1==3 && v2==1
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;       
        [n,Wn]=cheb2ord(vp, Wn, rp,orden);
        [B,A]=cheby2(n,rp,Wn,'high');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
elseif v1==3 && v2==2
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;       
        [n,Wn]=cheb2ord(vp, Wn, rp,orden);
        [B,A]=cheby2(n,rp,Wn,'low');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
elseif v1==3 && v2==3
        vp=[fci fcs]/fe;
        ff=(fci+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;        
        [n,Wn]=cheb2ord(vp, Wn, rp,orden);
        [B,A]=cheby2(n,rp,Wn);
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%       
elseif v1==3 && v2==4
        vp=[fci fcs]/fe;
        ff=(fci+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;        
        [n,Wn]=cheb2ord(vp, Wn, rp,orden);
        [B,A]=cheby2(n,rp,Wn,'stop');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
%%%%%%%%%__________________--------------------------------------------------
elseif v1==4 && v2==1
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;        
        [n,Wn]=ellipord(vp, Wn, rp,orden);
        [B,A]=ellip(n,rp,orden,Wn,'high');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==4 && v2==2
        vp=(fci+1)/fe;
        Wn=(fci-1)/fe;
        rp=3;        
        [n,Wn]=ellipord(vp, Wn, rp,orden);
        [B,A]=ellip(n,rp,orden,Wn,'low');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
        plot(handles.axes4,y);
elseif v1==4 && v2==3
        vp=[fci fcs]/fe;
        ff=(fcs+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;        
        [n,Wn]=ellipord(vp, Wn, rp,orden);
        [B,A]=ellip(n,rp,orden,Wn,'bandpass');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
elseif v1==4 && v2==4
        vp=[fci fcs]/fe;
        ff=(fcs+1)-(fci);
        Wn=[(fci-ff) (fcs+ff)]/fe;
        rp=3;        
        [n,Wn]=ellipord(vp, Wn, rp,orden);
        [B,A]=ellip(n,rp,orden,Wn,'stop');
        [H,F]=freqz(B,A,[],opc);
        plot(handles.axes3,F,abs(H),'black')
        y=filter(B,A,y);
end

%3,1



% --- Executes on selection change in VOrden.
function VOrden_Callback(hObject, eventdata, handles)
% hObject    handle to VOrden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns VOrden contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VOrden


% --- Executes during object creation, after setting all properties.
function VOrden_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VOrden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in VTipo.
function VTipo_Callback(hObject, eventdata, handles)
% hObject    handle to VTipo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns VTipo contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VTipo


% --- Executes during object creation, after setting all properties.
function VTipo_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VTipo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in VFiltro.
function VFiltro_Callback(hObject, eventdata, handles)
% hObject    handle to VFiltro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns VFiltro contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VFiltro


% --- Executes during object creation, after setting all properties.
function VFiltro_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VFiltro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Signal_Callback(hObject, eventdata, handles)
% hObject    handle to Signal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Signal as text
%        str2double(get(hObject,'String')) returns contents of Signal as a double


% --- Executes during object creation, after setting all properties.
function Signal_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Signal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function rizo_Callback(hObject, eventdata, handles)
% hObject    handle to rizo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of rizo as text
%        str2double(get(hObject,'String')) returns contents of rizo as a double


% --- Executes during object creation, after setting all properties.
function rizo_CreateFcn(hObject, eventdata, handles)
% hObject    handle to rizo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function FC_Callback(hObject, eventdata, handles)
% hObject    handle to FC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of FC as text
%        str2double(get(hObject,'String')) returns contents of FC as a double


% --- Executes during object creation, after setting all properties.
function FC_CreateFcn(hObject, eventdata, handles)
% hObject    handle to FC (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in popupmenu6.
function popupmenu6_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns popupmenu6 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu6


% --- Executes during object creation, after setting all properties.
function popupmenu6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in VTipo.
function popupmenu5_Callback(hObject, eventdata, handles)
% hObject    handle to VTipo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns VTipo contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VTipo


% --- Executes during object creation, after setting all properties.
function popupmenu5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VTipo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in VFiltro.
function popupmenu4_Callback(hObject, eventdata, handles)
% hObject    handle to VFiltro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns VFiltro contents as cell array
%        contents{get(hObject,'Value')} returns selected item from VFiltro


% --- Executes during object creation, after setting all properties.
function popupmenu4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VFiltro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function orden_Callback(hObject, eventdata, handles)
% hObject    handle to orden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of orden as text
%        str2double(get(hObject,'String')) returns contents of orden as a double


% --- Executes during object creation, after setting all properties.
function orden_CreateFcn(hObject, eventdata, handles)
% hObject    handle to orden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function FC1_Callback(hObject, eventdata, handles)
% hObject    handle to FC1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of FC1 as text
%        str2double(get(hObject,'String')) returns contents of FC1 as a double


% --- Executes during object creation, after setting all properties.
function FC1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to FC1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Amp_Callback(hObject, eventdata, handles)
% hObject    handle to Amp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Amp as text
%        str2double(get(hObject,'String')) returns contents of Amp as a double


% --- Executes during object creation, after setting all properties.
function Amp_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Amp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function varargout = Filtro_ButterWorth(varargin)
% FILTRO_BUTTERWORTH MATLAB code for Filtro_ButterWorth.fig
%      FILTRO_BUTTERWORTH, by itself, creates a new FILTRO_BUTTERWORTH or raises the existing
%      singleton*.
%
%      H = FILTRO_BUTTERWORTH returns the handle to a new FILTRO_BUTTERWORTH or the handle to
%      the existing singleton*.
%
%      FILTRO_BUTTERWORTH('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FILTRO_BUTTERWORTH.M with the given input arguments.
%
%      FILTRO_BUTTERWORTH('Property','Value',...) creates a new FILTRO_BUTTERWORTH or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Filtro_ButterWorth_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Filtro_ButterWorth_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Filtro_ButterWorth

% Last Modified by GUIDE v2.5 08-Aug-2013 12:25:46

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Filtro_ButterWorth_OpeningFcn, ...
                   'gui_OutputFcn',  @Filtro_ButterWorth_OutputFcn, ...
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


% --- Executes just before Filtro_ButterWorth is made visible.
function Filtro_ButterWorth_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Filtro_ButterWorth (see VARARGIN)

% Choose default command line output for Filtro_ButterWorth
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Filtro_ButterWorth wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Filtro_ButterWorth_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
clc
orden=str2double(get(handles.Orden, 'String'));
rs=orden;
fa=str2double(get(handles.fc1, 'String'));
fb=str2double(get(handles.fc2, 'String'));
if(fb<50)
   fm=100;
   else
   fm=900;
end
    [y,Fe]=wavread('audio.wav');
    plot(handles.axes1,y)
    wavplay(y,Fe);
    fe=fm/2;
    wp=[fa fb]/fe
    faa=(fa/10)
    fbb=(fb/2)+fb
    ws=[faa fbb]/fe
    rp=3;
    [n,wn]=buttord(wp, ws, rp, rs);
    [b,a]=butter(n,wn);
    [h,f]=freqz(b,a,[],fm);
    plot(handles.axes2, abs(h))
    y=filter(b,a,y);
    wavplay(y,Fe);
    plot(handles.axes3,y)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
clc
   fci=str2double(get(handles.fc1,'string'));
   orden=str2double(get(handles.Orden,'String'));
   [y,Fe]=wavread('audio.wav');
   wavplay(y,Fe);   
   if(fci<50)
   opc=100;
   else
   opc=1000;
   end
   plot(handles.axes1,y)
   fe=opc/2;
   wp=(fci+(opc/100))/fe;
   ws=(fci-(opc/100))/fe;
   rp=3;
   [n,w]=buttord(wp, ws, rp, orden);
   [B,A]=butter(n,w,'low');
   [H,F]=freqz(B,A,[],opc);
   plot(handles.axes2,Fe,abs(H))
   y=filter(B,A,y);
   plot(handles.axes3,y)
   wavplay(y,Fe);
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
clc
    fci=str2double(get(handles.fc1,'string'));
    orden=str2double(get(handles.Orden,'String'));
    if(fci<50)
    opc=100;
    else
    opc=1000;
    end
    [y,Fe]=wavread('audio.wav');
    plot(handles.axes1,y)
    wavplay(y,Fe);
    fe=opc/2;
    wp=(fci+(opc/100))/fe
    ws=(fci-(opc/100))/fe
    rp=3;
   [n,w]=buttord(wp,ws, rp, orden, 's')
   [B,A]=butter(n,w,'high');
   [H,F]=freqz(B,A,[],opc);
   plot(handles.axes2,Fe,abs(H))
   y=filter(B,A,y);
   wavplay(y,Fe);
   plot(handles.axes3,y)
        
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
clc

fci=str2double(get(handles.fc1, 'String'));
fcs=str2double(get(handles.fc2, 'String'));
orden=str2double(get(handles.Orden, 'String'));
rs=orden;
if(fcs<50)
   fm=100;
   else
   fm=900;
end
    [y,Fe]=wavread('audio.wav');
    wavplay(y,Fe);
   
    plot(handles.axes1,y)
    fe=fm/2;
    wp=[fci fcs]/fe
    faa=(fci/10)
    fbb=(fcs/2)+fcs  
    ws=[faa fbb]/fe 
    rp=3;
    [n,wn]=buttord(wp, ws, rp, rs);
    [b,a]=butter(n,wn,'stop');
    [h,f]=freqz(b,a,[],fm);
    plot(handles.axes2, abs(h))
    y=filter(b,a,y);
    wavplay(y,Fe);
    plot(handles.axes3,y)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function Orden_Callback(hObject, eventdata, handles)
% hObject    handle to Orden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Orden as text
%        str2double(get(hObject,'String')) returns contents of Orden as a double


% --- Executes during object creation, after setting all properties.
function Orden_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Orden (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function fc1_Callback(hObject, eventdata, handles)
% hObject    handle to fc1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of fc1 as text
%        str2double(get(hObject,'String')) returns contents of fc1 as a double


% --- Executes during object creation, after setting all properties.
function fc1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fc1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function fc2_Callback(hObject, eventdata, handles)
% hObject    handle to fc2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of fc2 as text
%        str2double(get(hObject,'String')) returns contents of fc2 as a double


% --- Executes during object creation, after setting all properties.
function fc2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fc2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
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



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to Amp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Amp as text
%        str2double(get(hObject,'String')) returns contents of Amp as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Amp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
[s,fe]=wavread('tigre.wav');
wavplay(s,fe);
plot(handles.axes1,s,'black')
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

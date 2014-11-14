function varargout = filtroaudi(varargin)
% FILTROAUDI MATLAB code for filtroaudi.fig
%      FILTROAUDI, by itself, creates a new FILTROAUDI or raises the existing
%      singleton*.
%
%      H = FILTROAUDI returns the handle to a new FILTROAUDI or the handle to
%      the existing singleton*.
%
%      FILTROAUDI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FILTROAUDI.M with the given input arguments.
%
%      FILTROAUDI('Property','Value',...) creates a new FILTROAUDI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before filtroaudi_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to filtroaudi_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help filtroaudi

% Last Modified by GUIDE v2.5 14-Aug-2013 13:35:30

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @filtroaudi_OpeningFcn, ...
                   'gui_OutputFcn',  @filtroaudi_OutputFcn, ...
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


% --- Executes just before filtroaudi is made visible.
function filtroaudi_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to filtroaudi (see VARARGIN)

% Choose default command line output for filtroaudi
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes filtroaudi wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = filtroaudi_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function f1_Callback(hObject, eventdata, handles)
% hObject    handle to f1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of f1 as text
%        str2double(get(hObject,'String')) returns contents of f1 as a double


% --- Executes during object creation, after setting all properties.
function f1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to f1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function f2_Callback(hObject, eventdata, handles)
% hObject    handle to f2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of f2 as text
%        str2double(get(hObject,'String')) returns contents of f2 as a double


% --- Executes during object creation, after setting all properties.
function f2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to f2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
freo= str2double(get(handles.f1,'string'));
freo2= str2double(get(handles.f2,'string'));
order = get(handles.listord, 'Value');
if order==1;
orden=20;
elseif order==2;
    orden=40;
else
    orden=60;
end
[sign ef]=wavread('tonoacdc.wav');
if freo<50
opc=100;
elseif freo>=50
    opc=1000;
end
wavplay(sign,ef);

f=opc/2;
%-------------------------------------------------------%
if get(handles.paltas,'value')==1
plot(handles.axes1,sign,'b')

ws = (freo+(opc/100))/f;
pn = (freo-(opc/100))/f;

rep=3;


[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'high');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
%plot(handles.axes4,sign,'r');


wavplay(sign,ef);
plot(handles.axes2,sign,'b');
end

%-------------------------------------------------------%
if get(handles.pbajas,'value')==1
plot(handles.axes1,sign,'b')

ws = (freo+(opc/100))/f;
pn = (freo-(opc/100))/f;

rep=3;


[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'low');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
%plot(handles.axes4,sign,'r');


wavplay(sign,ef);
plot(handles.axes2,sign,'b');
end
%-------------------------------------------------------%
if get(handles.rbanda,'value')==1
plot(handles.axes1,sign,'b')


if(freo2<50)
   opc=100;
   else
   opc=900;
end
f=opc/2;
ws= [freo freo2]/f;
freorep1=freo/10;
freorep2=(freo2/2)+freo2;

pn=[freorep1 freorep2]/f;
rep=3;
[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'stop');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
wavplay(sign,ef);
plot(handles.axes2,sign,'b');
end
%-------------------------------------------------------%
if get(handles.pbanda,'value')==1
plot(handles.axes1,sign,'b')


if(freo2<50)
   opc=100;
   else
   opc=900;
end
f=opc/2;
ws= [freo freo2]/f;
freorep1=freo/10;
freorep2=(freo2/2)+freo2;

pn=[freorep1 freorep2]/f;
rep=3;
[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G);
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
wavplay(sign,ef);
plot(handles.axes2,sign,'b');

end
%-------------------------------------------------------%

% --- Executes on selection change in listord.
function listord_Callback(hObject, eventdata, handles)
% hObject    handle to listord (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns listord contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listord


% --- Executes during object creation, after setting all properties.
function listord_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listord (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

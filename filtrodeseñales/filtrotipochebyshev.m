function varargout = filtrotipochebyshev(varargin)
% FILTROTIPOCHEBYSHEV MATLAB code for filtrotipochebyshev.fig
%      FILTROTIPOCHEBYSHEV, by itself, creates a new FILTROTIPOCHEBYSHEV or raises the existing
%      singleton*.
%
%      H = FILTROTIPOCHEBYSHEV returns the handle to a new FILTROTIPOCHEBYSHEV or the handle to
%      the existing singleton*.
%
%      FILTROTIPOCHEBYSHEV('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FILTROTIPOCHEBYSHEV.M with the given input arguments.
%
%      FILTROTIPOCHEBYSHEV('Property','Value',...) creates a new FILTROTIPOCHEBYSHEV or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before filtrotipochebyshev_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to filtrotipochebyshev_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help filtrotipochebyshev

% Last Modified by GUIDE v2.5 14-Aug-2013 14:32:06

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @filtrotipochebyshev_OpeningFcn, ...
                   'gui_OutputFcn',  @filtrotipochebyshev_OutputFcn, ...
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


% --- Executes just before filtrotipochebyshev is made visible.
function filtrotipochebyshev_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to filtrotipochebyshev (see VARARGIN)

% Choose default command line output for filtrotipochebyshev
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes filtrotipochebyshev wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = filtrotipochebyshev_OutputFcn(hObject, eventdata, handles) 
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
a = str2double(get(handles.amp,'string'));
fre1 = str2double(get(handles.f1,'string'));
fre2 = str2double(get(handles.f2,'string'));
fn= str2double(get(handles.frecn,'string'));
orden = 20;

t= -pi:0.01:pi;
sign = a*sin(t*2*pi*fn);
plot (handles.axes1, sign,'b')
sound(sign);
if fre1<50
opc=100;
elseif fre1>=50
   opc=1000;
end
f=opc/2;
%--------------------------------------------------
if get(handles.paltas,'value')==1
plot(handles.axes1,sign,'b')

ws = (fre1+(opc/100))/f;
pn = (fre1-(opc/100))/f;

rep=3;


[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'high');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
plot(handles.axes2,sign,'b');
end
%---------------------------------------------------
if get(handles.pbajas,'value')==1
plot(handles.axes1,sign,'b')

ws = (fre1+(opc/100))/f;
pn = (fre1-(opc/100))/f;

rep=3;

[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'low');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
plot(handles.axes2,sign,'b');
end
%---------------------------------------------------
if get(handles.rbanda,'value')==1
plot(handles.axes1,sign,'b')

if(fre2<50)
   opc=100;
   else
   opc=900;
end
f=opc/2;
ws= [fre1 fre2]/f;
frerep1=fre1/10;
frerep2=(fre2/2)+fre2;

pn=[frerep1 frerep2]/f;
rep=3;
[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G,'stop');
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
plot(handles.axes2,sign,'b');

end
%---------------------------------------------------
if get(handles.pbanda,'value')==1
plot(handles.axes1,sign,'b')

if(fre2<50)
   opc=100;
   else
   opc=900;
end
f=opc/2;
ws= [fre1 fre2]/f;
frerep1=fre1/10;
frerep2=(fre2/2)+fre2;

pn=[frerep1 frerep2]/f;
rep=3;
[N,G]=cheb1ord(ws,pn,rep,orden);
[B,A]=cheby1(N,rep,G);
[H,F]=freqz(B,A,[],opc);
plot(handles.axes3,F,abs(H),'b')
sign=filter(B,A,sign);
plot(handles.axes2,sign,'b');

end





function frecn_Callback(hObject, eventdata, handles)
% hObject    handle to frecn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of frecn as text
%        str2double(get(hObject,'String')) returns contents of frecn as a double


% --- Executes during object creation, after setting all properties.
function frecn_CreateFcn(hObject, eventdata, handles)
% hObject    handle to frecn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function amp_Callback(hObject, eventdata, handles)
% hObject    handle to amp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of amp as text
%        str2double(get(hObject,'String')) returns contents of amp as a double


% --- Executes during object creation, after setting all properties.
function amp_CreateFcn(hObject, eventdata, handles)
% hObject    handle to amp (see GCBO)
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



function f1_Callback(hObject, eventdata, handles)
% hObject    handle to f2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of f2 as text
%        str2double(get(hObject,'String')) returns contents of f2 as a double


% --- Executes during object creation, after setting all properties.
function f1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to f2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

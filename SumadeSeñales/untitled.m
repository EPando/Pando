function varargout = untitled(varargin)

% UNTITLED MATLAB code for untitled.fig
%      UNTITLED, by itself, creates a new UNTITLED or raises the existing
%      singleton*.
%
%      H = UNTITLED returns the handle to a new UNTITLED or the handle to
%      the existing singleton*.
%
%      UNTITLED('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in UNTITLED.M with the given input arguments.
%
%      UNTITLED('Property','Value',...) creates a new UNTITLED or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before untitled_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to untitled_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help untitled

% Last Modified by GUIDE v2.5 29-Jun-2013 13:57:36

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @untitled_OpeningFcn, ...
                   'gui_OutputFcn',  @untitled_OutputFcn, ...
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



% --- Executes just before untitled is made visible.
function untitled_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to untitled (see VARARGIN)

% Choose default command line output for untitled
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes untitled wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = untitled_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function frec_Callback(hObject, eventdata, handles)
% hObject    handle to frec (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of frec as text
%        str2double(get(hObject,'String')) returns contents of frec as a double


% --- Executes during object creation, after setting all properties.
function frec_CreateFcn(hObject, eventdata, handles)
% hObject    handle to frec (see GCBO)
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
ampli = str2double(get(handles.amp,'string'));
frec = str2double(get(handles.frec,'string'));
global xt t 
fs = 8000;
ts= 1/fs;
t= 0:ts:2;
if get(handles.cuad,'value')==1
xt= ampli*square(2*pi*frec*t + .05);
end

if get(handles.tri,'value')==1
xt= ampli*sawtooth(2*pi*frec*t);
end

if get(handles.Sen,'value')==1
xt= ampli*sin(2*pi*frec*t);
end

if get(handles.cos,'value')==1
xt= ampli*cos(2*pi*frec*t);
end

if get(handles.tg,'value')==1
xt= ampli*tan(2*pi*frec*t);
end


if get(handles.tria,'value')==1
xt= ampli*sawtooth(2*pi*frec*t,.5);
end

axes(handles.axes1);
plot(t,xt,'b');
soundsc(xt,fs)








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


% --- Executes on button press in pushbutton2.


% --- Executes on button press in pushbutton3.


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ampli2 = str2double(get(handles.amp2,'string'));
frec22 = str2double(get(handles.frec2,'string'));
%
ampli = str2double(get(handles.amp,'string'));
frec = str2double(get(handles.frec,'string'));
global xt gu yu t teo
fs = 8000;
ts= 1/fs;
t= 0:ts:2;

if get(handles.cuad2,'value')==1

xt= ampli2*square(2*pi*frec22*t + .05);
end

if get(handles.si2,'value')==1
xt= ampli2*sawtooth(2*pi*frec22*t + .05);
end

if get(handles.sen2,'value')==1
xt= ampli2*sin(2*pi*frec22*t);
end

if get(handles.cos2,'value')==1
xt= ampli2*cos(2*pi*frec22*t);
end

if get(handles.tg2,'value')==1
xt= ampli2*tan(2*pi*frec22*t);
end

if get(handles.tri2,'value')==1
xt= ampli2*sawtooth(2*pi*frec22*t);
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

if get(handles.cuad,'value')==1
gu= ampli*square(2*pi*frec*t + .05);
end

if get(handles.tri,'value')==1
gu= ampli*sawtooth(2*pi*frec*t + .05);
end

if get(handles.Sen,'value')==1
gu= ampli*sin(2*pi*frec*t);
end

if get(handles.cos,'value')==1
gu= ampli*cos(2*pi*frec*t);

end

if get(handles.tg,'value')==1
gu= ampli*tan(2*pi*frec*t);
end


if get(handles.tria,'value')==1
gu= ampli*sawtooth(2*pi*frec*t,.5);
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




if get(handles.ruido,'value')==1
yu =.2*rand(size(t));
else
yu=0;
end
teo= yu + xt + gu;
axes(handles.axes2);
soundsc(teo,fs);
plot(t,teo,'r');



% --- Executes on button press in cuad.
function cuad_Callback(hObject, eventdata, handles)
% hObject    handle to cuad (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of cuad


% --- Executes on button press in tri.
function tri_Callback(hObject, eventdata, handles)
% hObject    handle to tri (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of tri


% --- Executes on button press in Sen.
function Sen_Callback(hObject, eventdata, handles)
% hObject    handle to Sen (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of Sen



function frec2_Callback(hObject, eventdata, handles)
% hObject    handle to frec2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of frec2 as text
%        str2double(get(hObject,'String')) returns contents of frec2 as a double


% --- Executes during object creation, after setting all properties.
function frec2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to frec2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function amp2_Callback(hObject, eventdata, handles)
% hObject    handle to amp2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of amp2 as text
%        str2double(get(hObject,'String')) returns contents of amp2 as a double


% --- Executes during object creation, after setting all properties.
function amp2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to amp2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in ruido.
function ruido_Callback(hObject, eventdata, handles)
% hObject    handle to ruido (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of ruido


% --- Executes on button press in tdf.
function tdf_Callback(hObject, eventdata, handles)
% hObject    handle to tdf (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of tdf


% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
ampli2 = str2double(get(handles.amp2,'string'));
frec22 = str2double(get(handles.frec2,'string'));

ampli = str2double(get(handles.amp,'string'));
frec = str2double(get(handles.frec,'string'));
global xt gu yu t teo
if (frec22>frec)
fs = frec22*2.5;
else
    fs=frec*2.5;
end
n=256;
k=0:255;
t= 1/fs;




if get(handles.cuad2,'value')==1
xt= ampli2*square(2*pi*frec22*t*k);
end

if get(handles.si2,'value')==1
xt= ampli2*sawtooth(2*pi*frec22*t*k);
end

if get(handles.sen2,'value')==1
xt= ampli2*sin(2*pi*frec22*t*k);
end

if get(handles.cos2,'value')==1
xt= ampli2*cos(2*pi*frec22*t*k);
end

if get(handles.tg2,'value')==1
xt= ampli2*tan(2*pi*frec22*t*k);
end


if get(handles.tri2,'value')==1
xt= ampli2*sawtooth(2*pi*frec22*t*k,.5);
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

if get(handles.cuad,'value')==1
gu= ampli*square(2*pi*frec*t*k);
end

if get(handles.tri,'value')==1
gu= ampli*sawtooth(2*pi*frec*t*k);
end

if get(handles.Sen,'value')==1
gu= ampli*sin(2*pi*frec*t*k);
end

if get(handles.cos,'value')==1
gu= ampli*cos(2*pi*frec*t*k);

end

if get(handles.tg,'value')==1

gu= ampli*tan(2*pi*frec*t*k);
end


if get(handles.tria,'value')==1
gu= ampli*sawtooth(2*pi*frec*t*k,.5);
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



if get(handles.ruido,'value')==1
yu =.2*rand(size(t));
else
yu=0;
end
teo= yu + xt + gu;
stem(teo);
fu= fft(teo);
asb= abs(fu);
stem(k(1:n/2),asb(1:n/2));
oto= k/(n*t);
axes(handles.axes2)
plot(oto(1:n/2),asb(1:n/2),'r');
%plot(k*t,teo);

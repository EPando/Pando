function varargout = secuencia(varargin)
% SECUENCIA MATLAB code for secuencia.fig
%      SECUENCIA, by itself, creates a new SECUENCIA or raises the existing
%      singleton*.
%
%      H = SECUENCIA returns the handle to a new SECUENCIA or the handle to
%      the existing singleton*.
%
%      SECUENCIA('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SECUENCIA.M with the given input arguments.
%
%      SECUENCIA('Property','Value',...) creates a new SECUENCIA or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before secuencia_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to secuencia_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help secuencia

% Last Modified by GUIDE v2.5 15-Oct-2013 20:06:24

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @secuencia_OpeningFcn, ...
                   'gui_OutputFcn',  @secuencia_OutputFcn, ...
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
global secuencia

% --- Executes just before secuencia is made visible.
function secuencia_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to secuencia (see VARARGIN)

% Choose default command line output for secuencia
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes secuencia wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = secuencia_OutputFcn(hObject, eventdata, handles) 
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
kilo=str2num(get(handles.frams,'string'))
sed=str2num(get(handles.fram,'string'))
video=videoinput('winvideo',1);
%set(handles.cal,'String',kilo);
%preview(video)
start(video);
secuencia=getdata(video,kilo);
%imaqmontage(secuencia);
implay(secuencia,sed);
%delete(secuencia);

% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
%%%%%

%global secuencia
%gmi=secuencia;
%[nomb,ruta] = uiputfile('*.jpg','GUARDAR IMAGEN');
%fName = fullfile(ruta,nomb);
%imwrite(gmi,fName);




function frams_Callback(hObject, eventdata, handles)
% hObject    handle to frams (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of frams as text
%        str2double(get(hObject,'String')) returns contents of frams as a double


% --- Executes during object creation, after setting all properties.
function frams_CreateFcn(hObject, eventdata, handles)
% hObject    handle to frams (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in fram.
function fram_Callback(hObject, eventdata, handles)
% hObject    handle to fram (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns fram contents as cell array
%        contents{get(hObject,'Value')} returns selected item from fram


% --- Executes during object creation, after setting all properties.
function fram_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fram (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function cal_Callback(hObject, eventdata, handles)
% hObject    handle to cal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of cal as text
%        str2double(get(hObject,'String')) returns contents of cal as a double


% --- Executes during object creation, after setting all properties.
function cal_CreateFcn(hObject, eventdata, handles)
% hObject    handle to cal (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit5_Callback(hObject, eventdata, handles)
% hObject    handle to frams (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of frams as text
%        str2double(get(hObject,'String')) returns contents of frams as a double


% --- Executes during object creation, after setting all properties.
function edit5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to frams (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes during object creation, after setting all properties.
function pushbutton1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

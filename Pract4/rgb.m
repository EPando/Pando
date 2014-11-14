function varargout = rgb(varargin)
% RGB MATLAB code for rgb.fig
%      RGB, by itself, creates a new RGB or raises the existing
%      singleton*.
%
%      H = RGB returns the handle to a new RGB or the handle to
%      the existing singleton*.
%
%      RGB('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in RGB.M with the given input arguments.
%
%      RGB('Property','Value',...) creates a new RGB or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before rgb_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to rgb_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help rgb

% Last Modified by GUIDE v2.5 17-Sep-2013 14:06:19

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @rgb_OpeningFcn, ...
                   'gui_OutputFcn',  @rgb_OutputFcn, ...
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


% --- Executes just before rgb is made visible.
function rgb_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to rgb (see VARARGIN)

% Choose default command line output for rgb
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes rgb wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = rgb_OutputFcn(hObject, eventdata, handles) 
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



% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
axes(handles.axes1);
    [filename,pathname,index] = uigetfile('*.jpg');
    r=strcat(pathname,filename);
    rut=imread(r);
    imshow(rut);
    axis off;
    [e t]= size(rut);
    set(handles.lar1,'String',e);
    set(handles.an1,'String',t);


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
rgb=getimage(handles.axes1);

r=rgb;
g=rgb;
b=rgb;
r(:,:,2)=0;
r(:,:,3)=0;
axes(handles.axes2)
axis off;
imshow(r)

b(:,:,1)=0;
b(:,:,2)=0;
axes(handles.axes3)
axis off;
imshow(b)

g(:,:,1)=0;
g(:,:,3)=0;
axes(handles.axes4)
axis off;
imshow(g)

gris=rgb2gray(rgb);
axes(handles.axes5)
axis off;
imshow(gris)



function lar2_Callback(hObject, eventdata, handles)
% hObject    handle to lar2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of lar2 as text
%        str2double(get(hObject,'String')) returns contents of lar2 as a double


% --- Executes during object creation, after setting all properties.
function lar2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to lar2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function an2_Callback(hObject, eventdata, handles)
% hObject    handle to an2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of an2 as text
%        str2double(get(hObject,'String')) returns contents of an2 as a double


% --- Executes during object creation, after setting all properties.
function an2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to an2 (see GCBO)
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
axes(handles.axes6)
an=str2double(get(handles.lar2,'String'));
al=str2double(get(handles.an2,'String'));
gmi = getimage(handles.axes1);
B=imresize(gmi,[an,al]);

axis off;
if isempty(B), return, end
% Guardar archivo
formatos = {'*.jpg','JPEG (*.jpg)';'*.tif','TIFF (*.tif)'};
[nomb,ruta] = uiputfile(formatos,'GUARDAR IMAGEN');
if nomb==0, return, end
fName = fullfile(ruta,nomb);
imwrite(B,fName);



function an1_Callback(hObject, eventdata, handles)
% hObject    handle to an1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of an1 as text
%        str2double(get(hObject,'String')) returns contents of an1 as a double


% --- Executes during object creation, after setting all properties.
function an1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to an1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function lar1_Callback(hObject, eventdata, handles)
% hObject    handle to lar1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of lar1 as text
%        str2double(get(hObject,'String')) returns contents of lar1 as a double


% --- Executes during object creation, after setting all properties.
function lar1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to lar1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

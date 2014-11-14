function varargout = binario(varargin)
% BINARIO MATLAB code for binario.fig
%      BINARIO, by itself, creates a new BINARIO or raises the existing
%      singleton*.
%
%      H = BINARIO returns the handle to a new BINARIO or the handle to
%      the existing singleton*.
%
%      BINARIO('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in BINARIO.M with the given input arguments.
%
%      BINARIO('Property','Value',...) creates a new BINARIO or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before binario_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to binario_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help binario

% Last Modified by GUIDE v2.5 24-Sep-2013 17:39:54

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @binario_OpeningFcn, ...
                   'gui_OutputFcn',  @binario_OutputFcn, ...
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



% --- Executes just before binario is made visible.
function binario_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to binario (see VARARGIN)

% Choose default command line output for binario
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes binario wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = binario_OutputFcn(hObject, eventdata, handles) 
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
axes(handles.axes1);
global rut
    [filename,pathname,index] = uigetfile('*.jpg');
    r=strcat(pathname,filename);
    rut=imread(r);
    ru= rgb2gray(rut);
    axis off;
   
    
    imshow(ru);


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
img=getimage(handles.axes1);
global dilata SE
   rf=str2num(get(handles.refer,'string'));
   rfd= str2num(get(handles.otro,'string'));
   rfdd=str2num(get(handles.otrod,'string'));
if get(handles.cuad, 'Value')==1
SE=strel('square',rf);
filo=edge(img,'sobel');
axes(handles.axes2);
axis off
dilata= imdilate(filo,SE);
imshow(dilata);
end
if get(handles.diam, 'Value')==1
 
SE=strel('diamond',rf);
filo=edge(img,'sobel');
axes(handles.axes2);
axis off
dilata= imdilate(filo,SE);
imshow(dilata);
end
if get(handles.oct, 'Value')==1

SE=strel('octagon',rf);
filo=edge(img,'sobel');
axes(handles.axes2);
axis off
dilata= imdilate(filo,SE);
imshow(dilata);
end
if get(handles.rect, 'Value')==1

SE=strel('rectangle',[rf rfd]);
filo=edge(img,'sobel');
axes(handles.axes2);
axis off
dilata= imdilate(filo,SE);
imshow(dilata);
end
if get(handles.disc, 'Value')==1
SE=strel('disk',rf,rfdd);
filo=edge(img,'sobel');
axes(handles.axes2);
axis off
dilata= imdilate(filo,SE);
imshow(dilata);
end





% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global dilata SE
erosion=imerode(dilata, SE);
axes(handles.axes3);
axis off
imshow(erosion);


% --- Executes on slider movement.
function popupmenu2_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'Value') returns position of slider
%        get(hObject,'Min') and get(hObject,'Max') to determine range of slider


% --- Executes during object creation, after setting all properties.
function popupmenu2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: slider controls usually have a light gray background.
if isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor',[.9 .9 .9]);
end


% --- Executes on key press with focus on popupmenu2 and none of its controls.
function popupmenu2_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)



function val_Callback(hObject, eventdata, handles)
% hObject    handle to val (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of val as text
%        str2double(get(hObject,'String')) returns contents of val as a double


% --- Executes during object creation, after setting all properties.
function val_CreateFcn(hObject, eventdata, handles)
% hObject    handle to val (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton6.
function pushbutton6_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global rut
tr = rgb2gray(rut);
v=str2num(get(handles.val,'string'));
axes(handles.axes1);
if get(handles.checa,'value')==1
ru=  tr >=v;
else
ru=  tr <=v;
end
imshow(ru)



function refer_Callback(hObject, eventdata, handles)
% hObject    handle to refer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of refer as text
%        str2double(get(hObject,'String')) returns contents of refer as a double


% --- Executes during object creation, after setting all properties.
function refer_CreateFcn(hObject, eventdata, handles)
% hObject    handle to refer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on key press with focus on rect and none of its controls.
function rect_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to rect (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)




% --- Executes on key press with focus on disc and none of its controls.
function disc_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to disc (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on key press with focus on cuad and none of its controls.
function cuad_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to cuad (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)



% --- Executes on key press with focus on oct and none of its controls.
function oct_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to oct (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)



% --- Executes on key press with focus on diam and none of its controls.
function diam_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to diam (see GCBO)
% eventdata  structure with the following fields (see UICONTROL)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)



% --- Executes when selected object is changed in uipanel1.
function uipanel1_SelectionChangeFcn(hObject, eventdata, handles)
% hObject    handle to the selected object in uipanel1 
% eventdata  structure with the following fields (see UIBUTTONGROUP)
%	EventName: string 'SelectionChanged' (read only)
%	OldValue: handle of the previously selected object or empty if none was selected
%	NewValue: handle of the currently selected object
% handles    structure with handles and user data (see GUIDATA)
if get(handles.oct, 'Value')==1
set(handles.saca,'string','Valores multiplos de 3 positivos');
end
if get(handles.diam, 'Value')==1
set(handles.saca,'string','Valores positivos menores a 12 ');
end
if get(handles.cuad, 'Value')==1
set(handles.saca,'string','Valores positivos');
end
if get(handles.rect, 'Value')==1
set(handles.saca,'string','Renglones');
set(handles.expon,'string','Columnas');
set(handles.otro,'visible','on');
else
    set(handles.expon,'string','');
set(handles.otro,'visible','off');
end
if get(handles.disc, 'Value')==1
set(handles.saca,'string','Numero Positivo');
    set(handles.expond,'visible','on');
set(handles.expond,'string','Solo 0, 4, 6 u 8');
set(handles.otrod,'visible','on');
else
    set(handles.expond,'visible','off');
set(handles.otrod,'visible','off');
end

function otro_Callback(hObject, eventdata, handles)
% hObject    handle to otro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of otro as text
%        str2double(get(hObject,'String')) returns contents of otro as a double


% --- Executes during object creation, after setting all properties.
function otro_CreateFcn(hObject, eventdata, handles)
% hObject    handle to otro (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function otrod_Callback(hObject, eventdata, handles)
% hObject    handle to otrod (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of otrod as text
%        str2double(get(hObject,'String')) returns contents of otrod as a double


% --- Executes during object creation, after setting all properties.
function otrod_CreateFcn(hObject, eventdata, handles)
% hObject    handle to otrod (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in radiobutton6.
function radiobutton6_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton6


% --- Executes on button press in checa.
function checa_Callback(hObject, eventdata, handles)
% hObject    handle to checa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of checa

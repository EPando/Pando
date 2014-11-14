function varargout = coloressII(varargin)
% COLORESSII MATLAB code for coloressII.fig
%      COLORESSII, by itself, creates a new COLORESSII or raises the existing
%      singleton*.
%
%      H = COLORESSII returns the handle to a new COLORESSII or the handle to
%      the existing singleton*.
%
%      COLORESSII('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in COLORESSII.M with the given input arguments.
%
%      COLORESSII('Property','Value',...) creates a new COLORESSII or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before coloressII_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to coloressII_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help coloressII

% Last Modified by GUIDE v2.5 22-Oct-2013 08:07:07

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @coloressII_OpeningFcn, ...
                   'gui_OutputFcn',  @coloressII_OutputFcn, ...
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


% --- Executes just before coloressII is made visible.
function coloressII_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to coloressII (see VARARGIN)

% Choose default command line output for coloressII
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes coloressII wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = coloressII_OutputFcn(hObject, eventdata, handles) 
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
    [filename,pathname,index] = uigetfile('*.jpg');
    r=strcat(pathname,filename);
    rut=imread(r);
    imshow(rut);
    axis off;



function color_Callback(hObject, eventdata, handles)
% hObject    handle to color (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of color as text
%        str2double(get(hObject,'String')) returns contents of color as a double


% --- Executes during object creation, after setting all properties.
function color_CreateFcn(hObject, eventdata, handles)
% hObject    handle to color (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
colorr= getimage(handles.axes1);
r=colorr;
r(:,:,2)=0;
r(:,:,3)=0;
rojo=mean2(r);

g=colorr;
g(:,:,1)=0;
g(:,:,3)=0;
verde=mean2(g);

b=colorr;
b(:,:,1)=0;
b(:,:,2)=0;
azul=mean2(b);


if(rojo>verde)
    if(rojo>azul)
    set(handles.color,'String','En esta imagen predomina el Rojo')
    end
end
if(verde>rojo)
    if(verde>azul)
    set(handles.color,'String','En esta imagen predomina el Verde')
    end
end
if(azul>verde)
    if(azul>rojo)
    set(handles.color,'String','En esta imagen predomina el AZUL')
    end
end


% --- Executes on button press in pushbutton4.
 
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
video=videoinput('winvideo',1, 'RGB24_640x480');
video.FramesPerTrigger = 1;
triggerconfig(video,'manual');
vidRes= get(video,'VideoResolution');
imWidth = vidRes(1);
imHeight = vidRes(2);
nBands = get(video,'NumberOfBands');
hImage = image(zeros(imHeight,imWidth,nBands),'parent',handles.axes1);
preview(video,hImage);

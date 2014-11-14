function varargout = letras(varargin)
% LETRAS MATLAB code for letras.fig
%      LETRAS, by itself, creates a new LETRAS or raises the existing
%      singleton*.
%
%      H = LETRAS returns the handle to a new LETRAS or the handle to
%      the existing singleton*.
%
%      LETRAS('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in LETRAS.M with the given input arguments.
%
%      LETRAS('Property','Value',...) creates a new LETRAS or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before letras_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to letras_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help letras

% Last Modified by GUIDE v2.5 29-Oct-2013 10:04:14

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @letras_OpeningFcn, ...
                   'gui_OutputFcn',  @letras_OutputFcn, ...
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


% --- Executes just before letras is made visible.
function letras_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to letras (see VARARGIN)

% Choose default command line output for letras
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes letras wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = letras_OutputFcn(hObject, eventdata, handles) 
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
global video
cam=getsnapshot(video);

imshow(cam)
letra= getimage(handles.axes1);
a=imread('C:\Matlab\bin\A.jpg');
e=imread('C:\Matlab\bin\E.jpg');
i=imread('C:\Matlab\bin\I.jpg');
o=imread('C:\Matlab\bin\O.jpg');
u=imread('C:\Matlab\bin\U.jpg');
agris= rgb2gray(letra);
bina=agris>60;
agrisa= rgb2gray(a);
agrise= rgb2gray(e);
agrisi= rgb2gray(i);
agriso= rgb2gray(o);
agrisu= rgb2gray(u);
binaA=agrisa>60;
binaE=agrise>60;
binaI=agrisi>60;
binaO=agriso>60;
binaU=agrisu>60;
correlacionA= corr2(bina,binaA)
correlacionE= corr2(bina,binaE)
correlacionI= corr2(bina,binaI)
correlacionO= corr2(bina,binaO)
correlacionU= corr2(bina,binaU)

if(correlacionA > correlacionE)
    if(correlacionA > correlacionI)
       if(correlacionA > correlacionO)
           if(correlacionA > correlacionU)
           set(handles.muestra,'String','A');
           end
       end
    end

end


if(correlacionE > correlacionA)
    if(correlacionE > correlacionI)
       if(correlacionE > correlacionO)
           if(correlacionE > correlacionU)
           set(handles.muestra,'String','E');
           end
       end
    end

end


if(correlacionI > correlacionA)
    if(correlacionI > correlacionE)
       if(correlacionI > correlacionO)
           if(correlacionI > correlacionU)
           set(handles.muestra,'String','I');
           end
       end
    end

end


if(correlacionO > correlacionE)
    if(correlacionO > correlacionI)
       if(correlacionO > correlacionA)
           if(correlacionO > correlacionU)
           set(handles.muestra,'String','O');
           end
       end
    end
    
end

if(correlacionU > correlacionE)
    if(correlacionU > correlacionI)
       if(correlacionU > correlacionO)
           if(correlacionU > correlacionA)
           set(handles.muestra,'String','U');
           end
       end
    end

end
 




% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global video
video=videoinput('winvideo',1, 'RGB24_640x480');
video.FramesPerTrigger = 1;
triggerconfig(video,'manual');
vidRes= get(video,'VideoResolution');
imWidth = vidRes(1);
imHeight = vidRes(2);
nBands = get(video,'NumberOfBands');
hImage = image(zeros(imHeight,imWidth,nBands),'parent',handles.axes1);
preview(video,hImage);



function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to muestra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of muestra as text
%        str2double(get(hObject,'String')) returns contents of muestra as a double


% --- Executes during object creation, after setting all properties.
function muestra_CreateFcn(hObject, eventdata, handles)
% hObject    handle to muestra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes during object creation, after setting all properties.
function pushbutton2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

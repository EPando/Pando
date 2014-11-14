function varargout = movimientoII(varargin)
% MOVIMIENTOII MATLAB code for movimientoII.fig
%      MOVIMIENTOII, by itself, creates a new MOVIMIENTOII or raises the existing
%      singleton*.
%
%      H = MOVIMIENTOII returns the handle to a new MOVIMIENTOII or the handle to
%      the existing singleton*.
%
%      MOVIMIENTOII('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in MOVIMIENTOII.M with the given input arguments.
%
%      MOVIMIENTOII('Property','Value',...) creates a new MOVIMIENTOII or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before movimientoII_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to movimientoII_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help movimientoII

% Last Modified by GUIDE v2.5 02-Nov-2013 13:54:09

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @movimientoII_OpeningFcn, ...
                   'gui_OutputFcn',  @movimientoII_OutputFcn, ...
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


% --- Executes just before movimientoII is made visible.
function movimientoII_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to movimientoII (see VARARGIN)

% Choose default command line output for movimientoII
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes movimientoII wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = movimientoII_OutputFcn(hObject, eventdata, handles) 
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
video=videoinput('winvideo',1, 'RGB24_800x600');
video.FramesPerTrigger = 1;
triggerconfig(video,'manual');
vidRes= get(video,'VideoResolution');
imWidth = vidRes(1);
imHeight = vidRes(2);
nBands = get(video,'NumberOfBands');
hImage = image(zeros(imHeight,imWidth,nBands),'parent',handles.axes1);
preview(video,hImage);



% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
%global video
%'RGB24_800x600'


video = videoinput('winvideo', 1);
set(video,'TriggerRepeat',Inf);
video.FrameGrabInterval = 5;
start(video);

try
    while(video.FramesAcquired<=110)
        %I = 0;
        %c = [222 272 300 270 221 194];
        %r = [21 21 75 121 121 75];
        %BW = roipoly(I,c,r);
        
        imag = getdata(video,2);
        ej= getsnapshot(video);
        %agris = rgb2gray(imag(:,:,1:3));
        
        
        ima1=imag(:,:,:,1);
        ima2=imag(:,:,:,2);
        ima1=rgb2gray(ima1(:,:,1:3));
        ima2=rgb2gray(ima2(:,:,1:3));
        m=abs(double(ima1)-double(ima2))/256;

        axes(handles.axes1)
        
        imshow(ej)
         if sum(sum(m))>850
            %[s fes]=wavread('alarma.wav');
            %wavplay(s,fes);
            disp('Movement');beep
            set(handles.indica,'String','Cambio!');
        else
            set(handles.indica,'String','Nada');
        end
    end
    stop(video);
catch
    stop(video);
end
        



function indica_Callback(hObject, eventdata, handles)
% hObject    handle to indica (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of indica as text
%        str2double(get(hObject,'String')) returns contents of indica as a double


% --- Executes during object creation, after setting all properties.
function indica_CreateFcn(hObject, eventdata, handles)
% hObject    handle to indica (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

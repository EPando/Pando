function varargout = colores(varargin)
% COLORES MATLAB code for colores.fig
%      COLORES, by itself, creates a new COLORES or raises the existing
%      singleton*.
%
%      H = COLORES returns the handle to a new COLORES or the handle to
%      the existing singleton*.
%
%      COLORES('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in COLORES.M with the given input arguments.
%
%      COLORES('Property','Value',...) creates a new COLORES or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before colores_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to colores_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Copyright 2002-2006 The MathWorks, Inc.

% Edit the above text to modify the response to help colores

% Last Modified by GUIDE v2.5 21-Oct-2013 18:18:39

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @colores_OpeningFcn, ...
                   'gui_OutputFcn',  @colores_OutputFcn, ...
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


% --- Executes just before colores is made visible.
function colores_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to colores (see VARARGIN)

% Choose default command line output for colores
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes colores wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = colores_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;

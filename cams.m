
cam=imaqhwinfo('winvideo',1);
cam.SupportedFormats
video=videoinput('winvideo',1, 'RGB24_640x480');
preview(video)
img=getsnapshot(video);
imshow(img)
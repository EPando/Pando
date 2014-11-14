t = 0:0.001:0.6;
x = sin(2*pi*50*t)+sin(2*pi*120*t);
y = x + 2*randn(size(t));
plot(1000*t(1:50),y(1:50))
title('Signal Corrupted with Zero-Mean Random Noise')
xlabel('time (milliseconds)')


% It is difficult to identify the frequency components by looking at the
% original signal. Converting to the frequency domain, the discrete 
% Fourier transform of the noisy signal y is found by taking the 
% 512-point fast Fourier transform (FFT): 

Y = fft(y,512);

% The power spectrum, a measurement of the power at various 
% frequencies, is:

Pyy = Y.* conj(Y) / 512;

% Graph the first 257 points (the other 255 points are redundant) on 
% a meaningful frequency axis: 

f = 1000*(0:256)/512;
plot(f,Pyy(1:257))
title('Frequency content of y')
xlabel('frequency (Hz)')
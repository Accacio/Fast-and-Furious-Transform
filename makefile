##
# FFT
#

fft: fft.c
	@gcc fft.c -lm -o fft

all: fft


run:
	@./fft

clean:
	@rm -f fft

# end

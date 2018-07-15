#define BUFSIZE 1024

struct audio_data {
	int *audio_out_r;
	int *audio_out_l;
	int format;
	unsigned int rate;
	char *source;				// alsa device, fifo path or pulse source
	int im;						// input mode alsa, fifo or pulse
	int channels;
	int terminate;				// shared variable used to terminate audio thread
	char error_message[1024];
	int fftsize;
};

// header files for fifo, part of cava
void* input_fifo(void* data);

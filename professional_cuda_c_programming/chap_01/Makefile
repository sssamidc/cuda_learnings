CC = nvcc
CFLAGS = -O2 -gencode arch=compute_87,code=sm_87

APP = hello

all:	${APP}

%:	%.cu
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f	${APP}

CC = nvcc
CFLAGS = -gencode arch=compute_87,code=sm_87

all:	hello

hello:	hello.cu
	$(CC) $(CFLAGS) hello.cu -o hello

clean:
	rm -f	hello

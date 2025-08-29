## C compilation options
CC = gcc
CFLAGS = -O2 -std=c99

## nvcc compilation options
NCC = nvcc
NCFLAGS = -O2 -gencode arch=compute_87,code=sm_87

## Application binding
C_APP = sumArrayOnHost

## Generic rule
all:	${C_APP}

## For C code
%:	%.c
	$(CC) $(CFLAGS) -o $@ $<

## For CUDA code (nvcc)


## Clean-up rules
clean:
	rm -f	${C_APP}

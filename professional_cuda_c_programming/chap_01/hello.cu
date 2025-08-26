/**
 * @brief	A simple hello world program utilizing GPU capabilities
 *
 * @build	nvcc -gencode arch=compute_87,code=sm_87 hello.cu -o hello
 */
#include <stdio.h>

/**
 * @brief	Function to get executed on the GPU
 */
__global__ void helloFromGPU (void)
{
	printf("Hello World from the GPU!\n");
}

/**
 * @brief	Driver function. To run on CPU
 */
int main(void)
{
	// hello from CPU
	printf("Hello World from CPU!\n");

	helloFromGPU <<<1, 10>>>();
	cudaDeviceReset();
	return 0;
}

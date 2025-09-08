#include <cuda_runtime.h>
#include <stdio.h>

/**
 * @brief		Driver function
 */
int main(int argc, char **argv)
{
	// Define total data elements
	int nElem = 1024;

	// Define grid and block structure
	dim3 block(1024);
	dim3 grid((nElem + block.x - 1) / block.x);
	printf("grid.x: %d, block.x: %d\n", grid.x, block.x);

	// Reset block
	block.x = 512;
	grid.x = (nElem + block.x - 1) / block.x;
	printf("grid.x: %d, block.x: %d\n", grid.x, block.x);

	// Reset block
	block.x = 256;
	grid.x = (nElem + block.x - 1) / block.x;
	printf("grid.x: %d, block.x: %d\n", grid.x, block.x);

	// Reset block
	block.x = 128;
	grid.x = (nElem + block.x - 1) / block.x;
	printf("grid.x: %d, block.x: %d\n", grid.x, block.x);

	// Finally, reset the device before you leave
	cudaDeviceReset();
	
	return 0;
}

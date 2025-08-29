/**
 * @brief		A simple program to fill up two arrays of same size with random
 * 			floating point values and perform sum by indices and return the
 * 			resulting array
 *
 * @date		29-Aug-2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define NUM_ELEMENTS	1024

/**
 * @brief		Utility function to populate the arrays
 */
void initialData(float *ptr)
{
	// Generate different seed for random numbers
	time_t t;
	srand((unsigned int) time(&t));

	for (int i = 0; i < NUM_ELEMENTS; i++)
		ptr[i] = (float)(rand() & 0xFF) / 10.0f;
}

/**
 * @brief		Utility function to perform sum of the two arrays
 * 			index by index
 */
void sumArrayOnHost(float *pA, float *pB, float *pC)
{
	for (int i = 0; i < NUM_ELEMENTS; i++)
		pC[i] = pA[i] + pB[i];
}

/**
 * @brief		Utility function to print the array elements index
 * 			by index and their corresponding sum
 */
void printArraysAndSum(float *pA, float *pB, float *pC)
{
	for (int i = 0; i < NUM_ELEMENTS; i++)
		printf("%f + %f = %f\n", pA[i], pB[i], pC[i]);
}

/**
 * @brief		Driver function
 */
int main(int argc, char **argv)
{
	float *h_A, *h_B, *h_C;
	h_A = (float *)calloc(NUM_ELEMENTS, sizeof(float));
	h_B = (float *)calloc(NUM_ELEMENTS, sizeof(float));
	h_C = (float *)calloc(NUM_ELEMENTS, sizeof(float));

	// Populate the arraysa
	// Added sleep to ensure the numbers populated in the arrays
	// are different
	initialData(h_A);
	sleep(1);
	initialData(h_B);

	// Calculate the sum
	sumArrayOnHost(h_A, h_B, h_C);

	// Print data
	printArraysAndSum(h_A, h_B, h_C);

	// Finally, free up the RAM
	free(h_A);
	free(h_B);
	free(h_C);

	return 0;
}

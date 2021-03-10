#include <stdio.h>
#include "greeting.h"
#include "seq_search.h"
int main(int argc, char **argv) {
	hi();
	int arr[] = {1,2,3,4,5,6,7};
	printf("\nseq_result is %d\n", seq_search(arr, 3, 7));
}


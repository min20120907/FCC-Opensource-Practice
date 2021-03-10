#include "seq_search.h"
#include <stdio.h>

int seq_search(int *arr, int key,int n) {
	int i=0;
	while(i<n && arr[i] != key)
		i++;
	if(i==n) return -1;
	else return i;
}

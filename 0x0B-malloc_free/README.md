This is memory alocation in C, using malloc, calloc, realloc and free. Where malloc = int *A = (int*) malloc(n * sizeof(int));
calloc points to a already assigned variable in memory int *B = (int*) calloc(A, n * sizeof(int));
same goes for realloc which reallocates the memory.
Free deallocates an already given allocated memory.

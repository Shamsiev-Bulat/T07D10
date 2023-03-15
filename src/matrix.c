#include <stdio.h>
#include <stdlib.h>
#define NMAX 100

int input(int **buffer, int length_n, int length_m);
int input_type_size(*type, int *length_n, int *length_m);
void output(int **buffer, int length_n, int length_m);
void free_matrix(int type, int **buffer, int length_n);

int main(){
    int type, n, m;
    int **array = NULL;
    int *a;

if(input_type_size(&type, &n, &m)) {
    if (type == 1) {
        int arr[NMAX][NMAX];
        int *[NMAX];
        for (int i = 0; i < n; i++) {
            a[i] = &arr[i][0];
        }
        array =a;
    }
}


if (type == 2) {
    array = (int**) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        array[i] = (int*) calloc(m, sizeof(int));
    }
}

if (type == 3) {
    array = (int**) calloc(n, sizeof(int*));
    a = (int*) calloc(n*m, sizeof(int));
    for(int i =0; i < n; i++) {
        array[i] = 
    }
     }

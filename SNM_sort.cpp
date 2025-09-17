#include <iostream>
#include <time.h>

using namespace std;

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1)
        merged[k++] = arr1[i++];

    while (j < size2)
        merged[k++] = arr2[j++];
}

void sas(int *arr, int size, int *sorted){
    if(size<=1) return;

    int *half1 = new int [size/2];
    int *disorder = new int [size];
    half1[0] = arr[0];
    int j=0, k=0;
    for(int i=1; i<size; i++){
        if(half1[j]>arr[i]){
            disorder[k++] = arr[i];
        }
        else{
            half1[++j] = arr[i];
        }
    }
    //while(i>0){cout << disorder[--i] << " ";}
    //cout << endl;
    // int *half2 = new int [k];
    // for (int i = 0; i < k; i++) {
    //     half2[i] = disorder[i];
    // }
    // int i = k;
    //while(i>0){cout << half2[--i] << " ";}
    //cout << endl;
    
    // delete[] disorder;

    //sas(half1, sizeof(half1) / sizeof(half1[0]));
    sas(disorder, k, disorder);
    mergeSortedArrays(half1, j+1, disorder, k, sorted);
    delete[] half1;
    // delete[] half2;
    return;
}

int main(){
    int arr[10000] = {
        
    };
    clock_t start = clock();
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int *sorted = new int [size];
    sas(arr, size, sorted);

    // for(int i=0; i<size; i++)
    //     cout << sorted[i] << " ";

    delete[] sorted;

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %.6f seconds\n", time_spent);

    
    return 0;
}
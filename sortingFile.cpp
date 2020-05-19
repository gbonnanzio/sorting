/*
 * sortingFile.cpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */

//pull

#include "sortingFile.hpp"

void quick_sort(int first, int last, int arr[]) {
  if (last - first > 1) {  // There is data to be sorted.
    // Partition the table.
    int pivot = partition(first, last, arr);

    // Sort the left half.
    quick_sort(first, pivot-1, arr);

    // Sort the right half.
    quick_sort(pivot + 1, last,arr);
  }
}

int partition(int first, int last, int arr[])   {
     int  p = first;
     int pivot = arr[first];
      int i = first+1, j = last;
      int tmp;
      while (i <= j) {
             while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }
      return p;
}

void selectionSort(char arr[], int len, int loops) {
	for(int i = 0; i < loops; i++) {
		int m = i;
		for (int j = i+1; j < len; j++) {
			if (arr[j] < arr[m]) {
				m = j;
			}
		}
		char tmp = arr[m];
		arr[m] = arr[i];
		arr[i] = tmp;
	}
}

void insertionSort (char arr[], int length){
	int j= 0;
	char temp = arr[0];
	for (int i = 1; i < length; i++) {
		j = i;
		temp = arr[j];
		j--;
		while (j >= 0 && temp < arr[j]){
			  arr[j+1] = arr[j];
			  j--;
		 }
		  arr[j+1] = temp;
	}
	return ;
}



void mergeSort(int arr[], int l1, int l2){
	int k;
	if(l1<l2){
		k = (l1+l2)/2;
		mergeSort(arr,l1,k);
		mergeSort(arr,k+1,l2);
		merge(arr,l1,k,l2);
	}
}

void merge(int arr[], int le, int m, int r){
	int i, j, k;
	int lenL = m - le + 1;
	int lenR = r - m;
	int leftArr[lenL];
	int rightArr[lenR];

	for(i = 0; i<lenL;i++){
		leftArr[i] = arr[le+i];
	}
	for(j = 0; j<lenR; j++){
		rightArr[j] = arr[m+1+j];
	}
	i = 0;
	j = 0;
	k = le;

	while(i < lenL && j < lenR){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}
		else{
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}
	while(i < lenL){
		arr[k] = leftArr[i];
		i++;
		k++;
	}
	while(j < lenR){
		arr[k] = rightArr[j];
		j++;
		k++;
	}

}



int *MakeArray(int arr[], int size){
	int * array = new int[size];
	for (int i=0;i<size;i++){
		array[i]=rand();
	}
	return array;
}


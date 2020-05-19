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



































































void insertionSort (char arr[], int length){
	int j= 0;
	string temp = arr[0];
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





/*
 * sortingFile.cpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */

//pull


#include "sortingFile.hpp"


void TimSort(int first, int last, int arr[],int n){
	if(first<last && (last-first)>n){
		int newIndx = partition(first, last, arr);
		quickSort(first, newIndx, arr);
		quickSort(newIndx + 1, last, arr);

		//then we switch to insertion sort for TimSort
	}
	else {
			insertionSortTim(arr,last,first+1);
	}
}

void insertionSortTim(int arr[], int length, int current){
	int j= 0;
	int temp = arr[0];
	for (int i = current + 1; i < length; i++) {
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





void quickSort(int first, int last, int arr[]) {
	if(first<last){
		int newIndx = partition(first, last, arr);
		quickSort(first, newIndx, arr);
		quickSort(newIndx + 1, last, arr);
	}
}



int partition (int first, int last, int arr[]){
	int x = first;
	int y = last;
	int tmp;
	int j = arr[x];
	x++;
	while (x<=y){
		while (arr[x]<j){
			x++;
		}
		while (arr[y]>j){
			y--;
		}
		if (x<=y){
			tmp=arr[x];
			arr[x]=arr[y];
			arr[y]=tmp;
			x++;
			y--;
		}
	}
	arr[first]=arr[y];
	arr[y]=j;
	return y;
}


void selectionSort(int arr[], int len, int loops) {
	for(int i = 0; i < loops; i++) {
		int m = i;
		for (int j = i+1; j < len; j++) {
			if (arr[j] < arr[m]) {
				m = j;
			}
		}
		int tmp = arr[m];
		arr[m] = arr[i];
		arr[i] = tmp;
	}
}

void insertionSort (int arr[], int length){
	int j= 0;
	int temp = arr[0];
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
	/* input: array of ints, first index, last index of list you want to sort
	 *
	 */
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



int *MakeArray(int size){
	int * array = new int[size];
	for (int i=0;i<size;i++){
		array[i]=rand();
	}
	return array;
}




void PrintArray(int arr[], int size){
	for(int i = 0; i < size-1; i++){
		cout << arr[i] << ", ";
	}
	cout<<arr[size-1]<<endl;
}




void MinMaxSort(int arr[], int len, int loops) {
	for(int i = 0; i < loops; i++) {
		int m = i;
		int high = i;
		for (int j = i; j < len; j++) {
			if (arr[j] < arr[m]) {
				m = j;
			}
			if (arr[j] > arr[high]){
				high = j;
			}
		}
		int tmp = arr[m];
		arr[m] = arr[i];
		arr[i] = tmp;
		int tmp2 = arr[high];
		arr[high] = arr[len-1];
		arr[len-1] = tmp2;
		len--;
	}
}//

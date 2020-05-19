/*
 * sortingFile.cpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */






























































































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





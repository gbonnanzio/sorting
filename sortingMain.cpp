/*
 * sortingMain.cpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */

#include "sortingFile.hpp"

int main(){

	//random seed
	srand(time(NULL));
	//Testing Part A
	int *testArr = MakeArray(100);
	//selectionSort(testArr, 100, 100);
	//mergeSort(testArr,0,99);
	quickSort(0, 100,testArr);
	PrintArray(testArr,100);
	delete testArr;





	return 0;
}



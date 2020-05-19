/*
 * sortingMain.cpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */

#include "sortingFile.hpp"
#include <chrono>
using namespace std;
using namespace std::chrono;


int main(){

	//random seed
	srand(time(NULL));
	//Testing Part A
	int *testArr = MakeArray(100);
	//selectionSort(testArr, 100, 100);
	//mergeSort(testArr,0,99);
	//quickSort(0, 99,testArr);
	//insertionSort(testArr, 100);
	MinMaxSort(testArr, 100, 100);
	PrintArray(testArr,100);
	delete testArr;

	/*//Testing Part B
	int *testArr2 = MakeArray(10000);
	auto start = high_resolution_clock::now();

	//selectionSort(testArr, 100, 100);

	mergeSort(testArr2, 0, 9999);
	//quickSort(0, 99,testArr);
	//insertionSort(testArr, 100);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	int ms = duration.count();
	//PrintArray(testArr, 100);
	cout << "Time for insertionSort is " << ms <<endl;
	delete testArr2;*/




	return 0;
}



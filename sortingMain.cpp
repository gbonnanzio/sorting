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
	mergeSort(testArr,0,99);
	//quickSort(0, 99,testArr);
	//insertionSort(testArr, 100);
	PrintArray(testArr,100);
	delete testArr;

	//Testing Part B
	double average;
	for (int i=0;i<5;i++){
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
		cout << "Time for mergeSort is " << ms <<endl;
		average=average+ms;
		delete testArr2;
	}
	average = average/5;
	cout << "Average for MergeSort is " << average << endl;

	double average2;
	for (int i=0;i<5;i++){
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		selectionSort(testArr2, 10000, 10000);
		//mergeSort(testArr2, 0, 9999);
		//quickSort(0, 99,testArr);
		//insertionSort(testArr, 100);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		cout << "Time for SelectionSort is " << ms <<endl;
		average2=average2+ms;
		delete testArr2;
	}
	average2 = average2/5;
	cout << "Average for SelectionSort is " << average2 << endl;

	double average3;
	for (int i=0;i<5;i++){
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		//selectionSort(testArr2, 10000, 10000);
		//mergeSort(testArr2, 0, 9999);
		//quickSort(0, 99,testArr);
		insertionSort(testArr2, 10000);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		cout << "Time for InsertionSort is " << ms <<endl;
		average3=average3+ms;
		delete testArr2;
	}
	average3 = average3/5;
	cout << "Average for InsertionSort is " << average3 << endl;

	double average4;
	for (int i=0;i<5;i++){
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		//selectionSort(testArr2, 10000, 10000);
		//mergeSort(testArr2, 0, 9999);
		quickSort(0, 9999,testArr2);
		//insertionSort(testArr2, 10000);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		cout << "Time for QuickSort is " << ms <<endl;
		//PrintArray(testArr2, 100);
		average4=average4+ms;
		delete testArr2;
	}
	average4 = average4/5;
	cout << "Average for InsertionSort is " << average4 << endl;


	return 0;
}



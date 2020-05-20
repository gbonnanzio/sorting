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

int main() {

	//random seed
	srand(time(NULL));
	//Testing Part A
	int *testArr = MakeArray(100);
	//selectionSort(testArr, 100, 100);
	//mergeSort(testArr,0,99);
	//quickSort(0, 99, testArr);
	//insertionSort(testArr, 100);
	MinMaxSort(testArr, 100, 50);
	//TimSort(0,99,testArr,10);
	PrintArray(testArr, 100);
	delete testArr;

	//Testing Part B

	//mergeSort
	double average = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		mergeSort(testArr2, 0, 9999);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for mergeSort is " << ms <<endl;
		average = average + ms;
		delete testArr2;
	}
	average = average / 5.0;
	cout << "Average for MergeSort is " << average << endl;

	//selectionSort
	double average2 = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		selectionSort(testArr2, 10000, 10000);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for SelectionSort is " << ms <<endl;
		average2 = average2 + ms;
		delete testArr2;
	}
	average2 = average2 / 5.0;
	cout << "Average for SelectionSort is " << average2 << endl;

	//insertionSort
	double average3 = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		insertionSort(testArr2, 10000);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for InsertionSort is " << ms <<endl;
		average3 = average3 + ms;
		delete testArr2;
	}
	average3 = average3 / 5.0;
	cout << "Average for InsertionSort is " << average3 << endl;

	//quickSort
	double average4 = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		quickSort(0, 9999, testArr2);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for QuickSort is " << ms <<endl;

		average4 = average4 + ms;
		delete testArr2;
	}
	average4 = average4 / 5.0;
	cout << "Average for quickSort is " << average4 << endl;

	//minmaxSort
	double average5 = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		MinMaxSort(testArr2, 10000, 10000);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for minmaxSort is " << ms <<endl;

		average5 = average5 + ms;
		delete testArr2;
	}
	average5 = average5 / 5;
	cout << "Average for minmaxSort is " << average5 << endl;

	//TimSort
	double average6 = 0.0;
	for (int i = 0; i < 5; i++) {
		int *testArr2 = MakeArray(10000);
		auto start = high_resolution_clock::now();
		TimSort(0, 10000,testArr2, 100);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		int ms = duration.count();
		//cout << "Time for minmaxSort is " << ms <<endl;

		average6 = average6 + ms;
		delete testArr2;
	}
	average6 = average6 / 5;
	cout << "Average for timSort is " << average6 << endl;



	return 0;
}



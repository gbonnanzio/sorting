/*
 * sortingFile.hpp
 *
 *  Created on: May 19, 2020
 *      Author: gbonn
 */

#ifndef SORTINGFILE_HPP_
#define SORTINGFILE_HPP_

#include <math.h>
#include <cstdbool>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

int *MakeArray(int arr[], int size);
void quick_sort(int first, int last, int arr[]);
int partition(int first, int last, int arr[]);
void insertionSort (char arr[], int length);
void selectionSort(char arr[], int len, int loops);
void mergeSort(int arr[], int l1, int l2);
void merge(int arr[], int le, int m, int r);



#endif /* SORTINGFILE_HPP_ */

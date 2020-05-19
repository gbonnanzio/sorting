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
using namespace std;

void quick_sort(int first, int last, int arr[]);
int partition(int first, int last, int arr[]);
void insertionSort (char arr[], int length);
void selectionSort(char arr[], int len, int loops);


#endif /* SORTINGFILE_HPP_ */

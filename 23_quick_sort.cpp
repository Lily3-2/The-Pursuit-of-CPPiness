#include <bits/stdc++.h>
using namespace std;

//swap function
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int partition(vector<int> &arr, int s, int e) {
  int pivot = arr[s]; //assign parition ele = first ele of sub array
  
  int count = 0;
  //finding the correct index of pivot ele
  for(int i=s+1; i<=e; i++) { //chck after the fisrt index as first is already where pivot is
    if(arr[i] <= pivot) {
      count++;
    }
  }
//swap the pivot at correct position
  int partitionIndex = s + count;
  swap(arr[s], arr[partitionIndex]);

//place element smaller than partiiton on left and greater at right of pivot ele
  int i = s, j = e;
  while(i < partitionIndex && j > partitionIndex) {
    //icreament i index utnil arr[i] > pivot ele
    while(arr[i] <= pivot) {
      i++;
    }
    //increament j index until arr[j] <= pivot
    while(arr[j] > pivot) {
      j--;
    }
    //swap that i and j elements such that arr[i] >pivot and arr[j] <= pivot
    //also only swap iff i and j have not crossed each other
    if(i < partitionIndex && j > partitionIndex) {
      swap(arr[i++], arr[j--]);
    }
  }

  return partitionIndex; 


}

void quickSort(vector <int> &arr, int s, int e) {
  //base case
  if(s>=e) { //if only element is there in subarray then it is sorted
    return;
  }

  int partIndex = partition(arr, s, e); //placing pivot element in correct position
  quickSort(arr, s, partIndex - 1); //sorting left sub-array till pivot index -1
  quickSort(arr, partIndex + 1, e); //sorting right pivot element after pivot index +1
}

int main() {
  int n;
  cin>> n;

  int a;
  vector <int> arr;
  for(int i = 0; i<n; i++) {
    cin>>a;
    arr.push_back(a);
  }

  quickSort(arr, 0, n-1);

  for(int i=0; i<n; i++) {
    cout<< arr[i] <<" ";
  }
  return 0;
}
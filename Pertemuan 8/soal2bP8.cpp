#include <iostream>
using namespace std;

void swapN(int &a,int &b){
  int temp = a;
  a = b;
  b = temp;
}

void printArray(int array[], int size){
  for (int i = 0; i < size; ++i){
    cout << "[" << array[i] << "]";
  }
  cout << "\n";
}
//Bubble sort Descending
void bubbleSortDesc(int array[], int size){
  for (int step = 0; step < size -1; step++){
    for (int i = 0; i < size -1; i++){
        if (array[i] < array[i + 1]){
            swapN(array[i],array[i + 1]);
        }
    }
    printArray(array,size);
  }
}
int main(){
  int data[] = {1,1,2,2,3,4,6};
  int size = sizeof(data) / sizeof(data[0]);

  cout << "Array awal:\n";
  printArray(data, size);
  cout << endl;

  //Jalankan Bubble sort Desc
  cout << "Proses Sortir:\n";
  bubbleSortDesc(data, size);
  cout << endl;

  cout << "Array tersortir:\n";
  printArray(data, size);
}

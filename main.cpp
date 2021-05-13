#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;
void stackArr(){
 int arrSize[500];
}

void staticArr() {
 static int arrSize[500];
}
void heapArr() {
 int *y;
 y = new int[500];
}
int main() {

 long numberTimes = 1000000;


 auto begin = high_resolution_clock::now();

 auto result = high_resolution_clock::now() - begin;
 auto timeComplexity = duration_cast<microseconds>(result).count();
 begin = high_resolution_clock::now();
 int i = 0;
 while(i < numberTimes) {
 stackArr();
 i++;
 }
 result = high_resolution_clock::now() - begin;
 timeComplexity = duration_cast<microseconds>(result).count();
 cout<<"Stack Array Time Complexity ms: "<<timeComplexity<<endl;
 begin = high_resolution_clock::now();
 int j = 0;
 while(j < numberTimes) {
 staticArr();
 j++;
 }
 result = high_resolution_clock::now() - begin;
 timeComplexity = duration_cast<microseconds>(result).count();
 cout<<"Static Array Time Complexity ms: "<<timeComplexity<<endl;
 begin = high_resolution_clock::now();
 int k = 0;
 while(k < numberTimes) {
 heapArr();
 k++;
 }
 result = high_resolution_clock::now() - begin;
 timeComplexity = duration_cast<microseconds>(result).count();
 cout<<"heap Array Time Complexity ms: "<<timeComplexity<<endl;

}

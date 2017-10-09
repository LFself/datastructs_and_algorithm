//堆排序的另一种方法
#include<iostream>
using namespace std;
using std::cout;
using std::endl;
//keep parent is biger than kids.
void heapify(int A[],int i,int n)
{//i begin with 0 for A is begin with it,n is the A.length
int l=2*i+1;  //left chid
int r=2*i+2;  //right child
int largest=i;
if(l<=n-1&&A[l]>A[i])
 largest=l;
if(r<=n-1&&A[r]>A[largest])
largest=r;
if(i!=largest)
{swap(A[i],A[largest]);  //exchange A[i] and A[largest]
heapify(A,largest,n);//if largest=i.it means nothing.we recursively heapify the affected sub-tree
}
}
//build array A[0...n-1] to max heap
void heap(int A[],int n)
{int i=0;
for(i=n/2-1;i>=0;i--)
heapify(A,i,n);}
//build complete heap soet algs
void heapsort(int A[],int n)
{heap(A,n);
int i=0;
for(i=n-1;i>=1;i--)
{swap(A[i] ,A[0]);
n=n-1;
heapify(A,0,n);}
}
//To print array of size n
void printArray(int A[],int n)
{
for (int i=0;i<n;++i)
cout<<A[i]<<endl;}
//an example
int main()
{
int A[]={2,8,5,11,6,23,7,9,12,1};
int n=sizeof(A) / sizeof(A[0]);//n is the length of array A
heapsort(A,n);
cout<<"Sorted array is \n";
printArray(A,n);}

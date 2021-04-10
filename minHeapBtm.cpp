#include<iostream>
using namespace std;

void heapifyDown(int heap[], int n, int i){
    int l=2*i+1;
    int r=2*i+2;
    int s=i;
    if(l<n && heap[l]<heap[s])
        s=l;
    if(r<n && heap[r]<heap[s])
        s=r;
    if(s!=i){
        swap(heap[s],heap[i]);
        heapifyDown(heap,n,s);
    }
    
}
void buildHeap(int heap[], int n){
    for(int i=n/2-1;i>=0;i--)
        heapifyDown(heap,n,i);
}

void heapSort(int heap[],int n){
    for(int i=n-1;i>0;i--){
        swap(heap[i],heap[0]);
        heapifyDown(heap,i,0);
    }
}
int main(){
    int n;
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++)
        cin>>heap[i];
    buildHeap(heap,n);
    heapSort(heap,n);
    for(int i=0;i<n;i++)
        cout<<heap[i]<<" ";
    return 0;
}
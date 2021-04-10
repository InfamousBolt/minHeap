#include<iostream>
using namespace std;

int parent(int i){
    return (i-1)/2;
}

void insert(int heap[], int i, int ele){
    heap[i]=ele;
    while(i!=0 && heap[parent(i)]>heap[i]){
        swap(heap[parent(i)],heap[i]);
        i=parent(i);
    }
}

int main(){
    int n;
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insert(heap,i,ele);
    }
    for(int i=0;i<n;i++)
        cout<<heap[i]<<" ";
    return 0;
}
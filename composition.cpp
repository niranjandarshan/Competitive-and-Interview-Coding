#include<bits/stdc++.h>
using namespace std;
void composition(int n,int i){
	static int arr[100];
	if(n==0){
		printarr(arr,i);
	}
	else if(n>0){
		for(int k=1;k<=3;k++){
			arr[i]=k;
			composition(n-k,i+1);
		}
	}
}
void printarr(int arr[],int arrsize){
	for(int i=0;i<arrsize;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	composition(n,0);
}


//////////Output////////////
4
1 1 1 1 
1 1 2 
1 2 1 
1 3 
2 1 1 
2 2 
3 1 
////////////////////

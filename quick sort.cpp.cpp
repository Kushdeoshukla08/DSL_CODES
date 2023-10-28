#include<stdio.h>
void qs(int a[5],int low,int high){
	int i,j,pivot,temp;
	if(low<high){
		pivot=low;
		i=low;
		j=high;
		while(a[i]<=a[pivot] && i<=high){
			i++;
			while(a[j]>=a[pivot] && j>=low){
				j--;
			}
			if (i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		qs(a,low,j-1);
		qs(a,j+1,high);
	}
}
int main(){
	int i;
	int a[5]={55,8,2,13,47};
	qs(a,0,4);
	for (i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
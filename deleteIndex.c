#include<stdio.h>
int main(){
	int size,i,indexof;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int alpha[size];
	
	for(i=0;i<size;i++){
		printf("Enter the %d value\n",i);
		scanf("%d",&alpha[i]);
	}
	
	printf("Enter the index at which you want to delete the value\n");
	scanf("%d",&indexof);
	
	if(indexof<0 || indexof>size){
		printf("Invalid index\n");
		
	}else{
	   for(i=i-1;i<size;i++){
	   	alpha[i]=alpha[i+1];
	   }
	   size--;
	   printf("VALUES AFTER DELETING NUMBER\n");
	   for(i=0;i<size;i++){
	   	printf("%d\n",alpha[i]);
	   }
	}
	
	system("pause");
	return 0;
}

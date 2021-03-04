#include<stdio.h>
void sizeGetter();
void valueGetter();
void valuePrinter();
void deleteIndex();
int size,i,indexof;
int main(){
	
		sizeGetter();
        valueGetter();
        valuePrinter();
        deleteIndex();
	

	system("pause");
	return 0;
}
void sizeGetter(){
	printf("Enter the size of array\n");
	scanf("%d",&size);
}

void valueGetter(){
	int alpha[size];
	for(i=0;i<size;i++){
		printf("Enter %d value\n",i+1);
		scanf("%d",&alpha[i]);
	}
}

void valuePrinter(){
	int alpha[size];
    printf("Values are \n");
	for(i=0;i<size;i++){
		printf("%d\n",alpha[i]);
	}
	
}

void deleteIndex(){
	int alpha[size];
	printf("Enter the index at which you want to delete the value\n");
	scanf("%d",&indexof);
	if(indexof<0||indexof>size){
		printf("Invalid input\n");
	}else{
	 for(i=i-1;i<size;i++){
		alpha[i]=alpha[i+1];
	}
	size--;	
	}
	
	printf("Values are \n");
	for(i=0;i<size;i++){
		printf("%d\n",alpha[i]);
	}
	
}


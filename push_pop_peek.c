#include<stdio.h>

int MAX,top,base;
int arr[], top=-1, MAX;

push(int arr[],int val);


int main(){
	int option, val;
	printf("Size of the stack");
	scanf("%d",MAX);
	printf("Enter elements");
	for(int i=0;i<MAX;i++){
		scanf("%d",val);
		arr[i]=val;
		top++;
	}
	do{
		printf("1.push");
		printf("2.pop");
		printf("3.peek");
		printf("4.exit");
		printf("Enter your option");
		scanf(%d, option);
		
		switch(option){
			case 1 : printf("Enter number that push to stack");
					scanf("%d",val);
					push(arr[],val);
					
			case 2 :  	printf("Enter number that pop to stack");
						scanf("%d",val);
						pop(arr[],val);
					
			case 3 : peek(arr[]);
			
		}
		
		
		push(int x, int ar[]){
			if(top==MAX-1){
				printf("stack overflow");
			}
			else{
				top++;
				arr[top]=x;
			}
		}
		
		pop(int x, int ar[]){
			if(top==-1){
				printf("stack underflow");
			}
			else{
				val=ar[top];
				top--;
				printf("Pop value is %d", x);
			}
		}
		
		void peek(){
			if(top==-1){
				printf("no element");
			}
			else{
				int x=ar[top];
				top--;
				printf("top value is %d", x);
			}
		}
	}
}



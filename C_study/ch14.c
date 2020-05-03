/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH_STACK 10
int top = -1;
int stack[LENGTH_STACK];

void showArr(int *param, int num){
	int i;
	for(i=0; i<num; i++){
		printf("%d ", param[i]);
	}
	printf("\n");
}
//���޹��� �迭�� �� ����� ���� 2�����Ͽ� ����
void squareArr(const int *src, int *dest, int num ){
	int i;
	
	for(i=0; i<num; i++){
		dest[i] = src[i];
	}

	for(i=0; i<num; i++){
		dest[i] *= dest[i];
	}

}
//���޹��� �迭�� �� ����� ���� 3�� ���Ͽ� ����
void plus3Arr(const int *src, int *dest, int num ){
	int i;
	
	for(i=0; i<num; i++){
		dest[i] = src[i];
	}

	for(i=0; i<num; i++){
		dest[i] += 3;
	}

}
void p299_2(){
	int arr_src[5] = {1,2,3,4,5};
	int arr_dest[5];
	int *ptr = arr_src;
	int i;
	int len = sizeof(arr_src)/sizeof(int);

	squareArr(arr_src,arr_dest,len);//������
	showArr(arr_dest,5);

	plus3Arr(arr_src,arr_dest,len);//3���Ѱ�
	showArr(arr_dest,5);
}

void Swap(int *ptr1, int *ptr2){
	int temp =*ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("n1 n2 : %d %d \n" , *ptr1, *ptr2);
}
void func1(){
	int num1 =10;
	int num2 = 20;

	printf("num1 num2 : %d %d \n" , num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n" , num1, num2);

}
//������ȯ 320_1
void SquareByValue(int num){
	num *= num;
	printf("V�Լ� ���� num : %d \n",num);
}
//�ּҸ� ���� ���� 320_1
void SquareByReference(int *ptr){
	*ptr *= *ptr;
	printf("R�Լ� ���� num : %d \n", *ptr);
}
void p320_1(){
	int num = 12;
	int *ptr = &num;
	SquareByValue(num);
	printf("���� �Լ��� num : %d \n",num);

	SquareByReference(ptr);
	printf("���� �Լ��� num : %d \n",num);
}

void Swap3(int *num1, int *num2,int *num3){
	int temp1, temp2;


	temp1 = *num2;
	temp2 = *num3;
	*num2 = *num1;//num2���� 10
	*num3 = temp1;//num3���� 20
	*num1 = temp2;//num1���� 30

}
void p320_2(){
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	printf("[���� �Լ�] num1 = %d, num2 = %d, num3 = %d \n", num1,num2,num3);
	Swap3(&num1, &num2, &num3);
	printf("[Swap �� ���� �Լ�] num1 = %d, num2 = %d, num3 = %d \n",num1,num2,num3);
}

//�ζ�
void lotto(){
	
	int lottoNum[6]={0};
	int nan[45];
	int i,j;
	int numLen = 0;//sizeof(lottoNum)/sizeof(int);
	int nanLen = sizeof(nan)/sizeof(int);
	char choice;
	int ranNum=0;

	srand(time(NULL));


	for(i=0; i<nanLen; i++){
		nan[i] = (i+1);
	}
	
	printf("�ζ� ��ȣ�� �����Ͻðڽ��ϱ�?(Y/N) : \n");
	while(1){
		scanf("%c", &choice);
		
		if(choice == 'y'){

			if(numLen == 6){
				printf("�迭�� �� á���ϴ�\n");
				break;
			}
			

			
			ranNum = rand()%45;//��� �� ����
			lottoNum[numLen]=nan[ranNum];
			//numLen++;

			//�ߺ��˻�
			

			for(i=0; i<6;i++){
				for(j=0; j<numLen; j++){
					if(lottoNum[i] == lottoNum[j]){
					ranNum = rand()%45;//��� �� ����
					lottoNum[numLen]=nan[ranNum];
					}
				}
			}
			numLen++;


			printf("���� ��ȣ : ");

			for(i=0; i<numLen; i++){
				printf("%d ", lottoNum[i]);
			}
			



		}else if(choice == 'n'){
			printf("�����մϴ�.\n");
			break;

		}else{
			printf("y�Ǵ� n�� �Է��ϼ���.\n");

		}
	}
	


}


//����
int isFull(){//�� ����Ǹ� 1���� �ƴϸ� 0����
	if(top == 9){
		return 1;
	}else{
		return 0;
	}
}
int isEmpty(){//�� ��� 1, �ƴϸ� 0
	if(top == -1){
		return 1;
	}else{
		return 0;
	}
}
void push(int data){
	if(isFull() == 1){
		printf("������ �� á���ϴ�.");
	}else{
		top++;
		stack[top] = data;
	}
}
void pop(){
	if(isEmpty() == 1){
		printf("������ ����ֽ��ϴ�.");
	}else{
		stack[top] = 0;
		top--;
	}

	//stack[top] = 0;
	//top--;
}
void Stack(){//LIFO
	
	char choice;
	int input;
	int i;
	
	
	//printf("a:���ÿ� ������ �߰�  b:������ ������ ����  c:���� ������ ��� \n");
	while(1){
		printf("\n");
		printf("a:���ÿ� ������ �߰� / b:������ ������ ���� / c:���� ������ ��� \n");
		printf("���� : ");
		fflush(stdin);
		scanf("%c", &choice);
		if(choice == 'a'){
			printf("���ÿ� �߰��� ���ڸ� �Է��ϼ��� : ");
			scanf("%d",&input);
			push(input);
			
		}else if(choice == 'b'){
			pop();


		}else if(choice == 'c'){
			for(i=0; i<LENGTH_STACK; i++){
				printf("%d ", stack[i]);
			}
			printf("\n");
		}else{
			printf("a,b,c �� �ϳ��� �Է��ϼ���");
		}
	}
}

//�迭 ���ڷ� �޾� 7�� ���
void dan_7(int *num){
	int i;
	int temp[9];
	
	for(i=0;i<9;i++){
		num[i] *= 7;
	}
	for(i=0;i<9;i++){
		printf("%d * %d = %d\n", 7, i+1, num[i]);
		printf("\n");
	}
	

}
void func_1(){
	int num[9];
	int i;

	for(i=0; i<9; i++){
		num[i] = i+1;
	}

	dan_7(num);
	
}

//���� ���� ����, �ּҿ� ���� ����
void swapByValue(int num1, int num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swapByReference(int *num1, int *num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void func_2(){
	int num1 = 10;
	int num2 = 20;

	swapByValue(num1, num2);
	printf("%d %d\n",num1, num2);
	swapByReference(&num1, &num2);
	printf("%d %d\n",num1, num2);
}

int main (){
	
	func_1();
	return 0;
}*/
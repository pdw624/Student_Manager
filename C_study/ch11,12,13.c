#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//�迭
void p259(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[]={1,2,3,4,5,6,7};
	int arr3[5] = {1,2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for(i=0; i<ar1Len; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for(i=0; i<ar2Len; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for(i=0; i<ar3Len; i++){
		printf("%d ", arr3[i]);
	}
	printf("\n");
}
void func1(){
	int arr_score[5]={86,30,40};
	int len = sizeof(arr_score);
	int len2 = sizeof(int);
	int i;
	for(i=0; i<len/len2; i++){
		printf("%d ", arr_score[i]);
	}
}
void p260_1(){
	int arr_input[5];
	int i;
	int btemp ,stemp;
	int sum=0;

	for(i=0; i<5; i++){
		printf("%d ��° ������ �Է��ϼ��� : ", (i+1));
		scanf("%d",&arr_input[i]);
	}
	btemp = arr_input[0];//�ִ� �ʱ�ȭ
	stemp = arr_input[0];//�ּڰ� �ʱ�ȭ

	for(i=0; i<5; i++){//�迭 ����
		printf("%d ", arr_input[i]);
	}
	printf("\n");

	for(i=0; i<5; i++){//�ִ�, �ּڰ�, ����
		if(arr_input[i]>btemp){
			btemp = arr_input[i];
		}
		if(arr_input[i]<stemp){
			stemp = arr_input[i];
		}
		sum += arr_input[i];
	}
	
	printf("�ִ� :  %d ", btemp);
	printf("�ּڰ� :  %d ", stemp);
	printf("���� :  %d \n", sum);
}
//10�� ���� �Է� �� 3�� ��� ���
void func2(){
	int arr[10];
	int i;
	int len = sizeof(arr)/sizeof(int);
	int tf=0;

	for(i=0; i<len; i++){
		printf("%d ��° ���ڸ� �Է��ϼ��� : ", (i+1));
		scanf("%d", &arr[i]);
	}

	printf("3�� ��� : ");
	for(i=0; i<len; i++){
		if(arr[i]%3 == 0){
			printf("%d ", arr[i]);
			tf = 1;
		}
	}

	if(tf == 0){
		printf("����\n");
	}
	
}
//4 +8 +16 +20 + ... > 400�� �ѱ�� ���� ���°���� �� ��Ҹ� ���
void func3(){
	int arr[100];
	int i;
	int arr_len = sizeof(arr) / sizeof(int);
	int sum=0;

	
	for(i=0; i<arr_len; i++){//�迭 �ʱ�ȭ 4�� ��� 100�� ����

		if(i==0){
			arr[0] = 4;
		}
		else{
			arr[i] = arr[0]*(i+1);
		}
	}

	
	for(i=0; i<arr_len; i++){//4��� ���ϱ�
		if(sum > 400){
			printf("%d��° ��� %d\n", (i+1), arr[i]);
			break;
		}
		sum += arr[i];
		
	}

}
//���� 10�� �Է� �� Ȧ ¦ ������ ���
void func4(){
	int i;
	int input[10];
	int len = sizeof(input)/sizeof(int);
	int h[10];
	int h_size = 0;
	int z[10];
	int z_size = 0;

	for(i=0; i<len ; i++){
		printf("%d ��° ������ �Է��ϼ��� : ", (i+1));
		scanf("%d", &input[i]);
		if(input[i]%2 == 0){//¦�� ����
			z[z_size] = input[i];
			z_size++;
		}
		else{//Ȧ������
			h[h_size] = input[i];
			h_size++;
		}
	}
	
	//����� �迭 �ܼ� ����
	for(i=0; i<len ; i++){
		printf("%d ",input[i]);
		
	}
	printf("\n");

	for(i=0; i<h_size ; i++){
		printf("%d ",h[i]);
		
	}
	printf("\n");
	for(i=0; i<z_size ; i++){
		printf("%d ",z[i]);
		
	}
	
	printf("\n");
}
void p263(){
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");
}
//char�� �ι��� ������ �б� ���� 
void func5(){
	char arr_src[50] = "hello world";
	char arr_dest[50];
	int i=0;

	while(arr_src[i] != '\0'){
		
		arr_dest[i] = arr_src[i]; 
		printf("%c", arr_dest[i]);
		i++;
	}

	//printf("%s", arr_dest);

}
//�ܾ����
int getLen(){
	char str[100];
	int i=0;
	int count = 0;

	printf("���ܾ� �Է� : ");
	scanf("%s", str);

	while(str[i] != '\0'){
		count++;
		i++;
	}
	return count;
}
void p266(){
	
	char str[50] = "I like C programming";
	printf("string : %s \n", str);

	str[8] = '\0';
	printf("string : %s \n", str);

}
void p268_2(){

	char input[100];
	int i=0;//(�Է��� ������)�迭�� ������ h
	int count = 0;//(�Է��� ������)�迭�� ���� o
	int temp=0;

	printf("���ܾ �Է��ϼ��� : ");
	scanf("%s", input);

	while(input[i] != '\0'){
		
		count++;
		i++;
	}

	//����
	for(i=0; i<count/2; i++){
		
		temp = input[i];
		input[i] = input[count-1-i];
		input[count-1-i] = temp;
		
	}

	for(i=0; i<count; i++){
		printf("%c ", input[i]);
	}
}
//������ ����
void func6(){
	int num1 =100, num2=100;
	int *pnum = &num1;
	*pnum -= 30;
	pnum = &num2;
	*pnum += 30;

	printf("num1 : %d num2 : %d \n" ,num1,num2 );

}
void p284_2(){
	int num1=10, num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *temp;

	*ptr1 += 10;
	*ptr2 -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d", *ptr1, *ptr2);

}
void p290(){
	int arr[3] = {0,1,2};
	printf("�迭�� �̸� : %p \n", arr);
	printf("ù ��° ��� : %p \n", &arr[0]);
	printf("�� ��° ��� : %p \n", &arr[1]);
	printf("�� ��° ��� : %p \n", &arr[2]);
}
void p292(){
	int arr1[3]={1,2,3};
	double arr2[3] = {1.1, 2.2, 3.3};

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);
}
void p294(){
	int arr[3] = {15, 25, 35};
	int *ptr=&arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
}
void p295(){
	int *ptr1=0x0010;
	double *ptr2=0x0010;

	printf("%p %p \n", ptr1+1, ptr1+2);
	printf("%p %p \n", ptr2+1, ptr2+2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);

}
void p299_1(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	int i;
	int len = sizeof(arr)/sizeof(int);

	for(i=0; i<len; i++){
		*ptr += 2;
		ptr++;
	}
	for(i=0; i<len; i++){
		printf("%d " , arr[i]);
	}
}
void p299_2(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	int i;
	int len = sizeof(arr)/sizeof(int);

	for(i=0; i<len; i++){
		*(ptr + i) += 2;
	}
	for(i=0; i<len; i++){
		printf("%d " , arr[i]);
	}
}
void p299_3(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[4];
	int i;
	int len = sizeof(arr)/sizeof(int);
	int sum=0;

	for(i=0; i<len; i++){
		sum += *ptr;
		ptr--;
	}

	printf("%d \n", sum);
}
void p299_4(){
	int arr[6] = {1,2,3,4,5,6};
	int *front = &arr[0];
	int *end = &arr[5];
	int temp;
	int i;


	for(i=0; i<3; i++){
		

		temp = *front;
		*front = *end;
		*end = temp;
		
		front++;
		end--;
	}

	for(i=0; i<6; i++){
		printf("%d ", arr[i]);
		
	}


}
//20200117_��
//���� 10�� �Է� �� �����ͷ� �ִ� �ּ� ã��
void func7(){
	int arr[10];
	int i;
	int *max = &arr[0];
	int *min = &arr[9];

	for(i=0; i<10; i++){
		printf("%d ��° ������ �Է��ϼ��� : ", (i+1));
		scanf("%d", &arr[i]);
	}

	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	for(i=0; i<10; i++){
		if(*max < arr[i]){//  *max (arr[0]�� '������')�� arr[0 1 2 ...]���� ���� �� >> �� arr[0 1 2 ...]�� Ŭ ��
			max = &arr[i];//  max (����Ű�� '�ּҰ�')�� arr[0 1 2 ...]�� �ּҰ����� �ٲ��ش�. 

			// *max = arr[i]; >> ó���� �� �Ǽ� : �̷��� �Ǹ� [1 2 3 4 ... 10]���� �Ǿ��ִ� �迭�� [2 2 3 4 ... 10]���� ����ȴ�.
		}
	}
	//printf("�ִ� : %d \n", *max);
	for(i=0; i<10; i++){
		if(*min > arr[i]){
			min = &arr[i];
		}
	}
	printf("�ִ� : %d , �ּڰ� : %d \n", *max, *min);

}
void func7_t(){
	int arr[10];
	int i;
	int max, min;
	int *ptr = &arr[0];
	
	for(i=0; i<10; i++){
		printf("%d ��° ������ �Է��ϼ��� : ", (i+1));
		scanf("%d", &arr[i]);
	}
	
	max =arr[0];
	min = arr[0];

	for(i=0; i<10; i++){
		if(max < *(ptr + i)){
			max = *(ptr + i);
		}
	}
	for(i=0; i<10; i++){
		if(min > *(ptr + i)){
			min = *(ptr + i);
		}
	}
	
		printf("�ִ� : %d, �ּ� : %d" ,max, min);
	
}
//������ ������ ���� �� ���� �ٲ��ֱ�
void func8(){
	int num1 = 30;
	int num2 = 50;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	printf("num1 : %d, num2 : %d", num1, num2);

}

void re299_1(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[0];
	int i;
	for(i=0; i<5; i++){
		*ptr += 2;
		ptr++;
	}
	for(i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	
}
void re299_2(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[0];
	int i;
	for(i=0; i<5; i++){
		arr[i] = *(ptr+i)+2;
	}
	for(i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
}
void re299_3(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[4];
	int i;
	int sum = 0;
	for(i=0; i<5; i++){
		sum += *ptr;
		ptr--;
	}
	printf("%d\n", sum);
}
void re299_4(){
	int arr[6] = {1,2,3,4,5,6};
	int *front = &arr[0];
	int *end = &arr[5];
	int i;
	int temp;

	for(i=0; i<3; i++){
		temp = *front;
		*front = *end;
		*end = temp;

		front++;
		end--;
	}
	for(i=0; i<6; i++){
		printf("%d ", arr[i]);
	}
	
}
//�����Լ�
void func9(){
	int num;
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num = rand();
		printf("%d, ", num);
	}
}
//0~9 ���� ���
void func10(){
	int num;
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num = rand() % 10;
		
		printf("%d ", num);
		
	}

}
//0~9 �迭 ����
void func11(){
	int num[10];
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num[i] = rand() % 10;
		
		printf("%d ", num[i]);
		
	}

}
//0~9 �迭 ���� �ߺ�����
void func12(){
	int arr[10];
	int num;
	int i;
	int temp=0;
	
	srand(time(NULL));

	//0~10 ���� ����
	for(i=0; i<10; i++){
		arr[i] = i;
	}
	
	//�̸� 100�� ������
	for(i=0; i<100; i++){
		num = rand() %10;

		temp = arr[0];
		arr[0] = arr[num];
		arr[num] = temp;
	}

	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}

}
//0~9 �迭 ���� �ߺ����� ������
void func13(){
	int arr[10];
	int num;
	int i;
	int temp=0;
	int *ptr = arr;
	
	srand(time(NULL));

	//0~10 ���� ����
	for(i=0; i<10; i++){
		arr[i] = i;
	}
	
	//�̸� 100�� ������
	for(i=0; i<100; i++){
		num = rand() %10;

		temp = *ptr;
		*ptr = ptr[num];
		ptr[num] = temp;
	}

	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}

}

void ShowArayElem(int *param, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d ", param[i]);
	}
	printf("\n");
}
void p312(){
	int arr1[3] = {1,2,3};
	int arr2[5] = {4,5,6,7,8};
	ShowArayElem(arr1, sizeof(arr1)/sizeof(int));
	ShowArayElem(arr2, sizeof(arr2)/sizeof(int));
}

int main(void){
	
	p312();

	return 0;
}
*/
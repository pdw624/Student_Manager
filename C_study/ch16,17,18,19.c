//#include <stdio.h>
//#include <string.h>
//
////2���� �迭 ����
//void func1(){
//
//	int arr1[2][3] = { {1,2,3} , {4, 5, 6} };
//	int arr2[2][3] = {{1,}, {4,5,}};
//	int arr3[2][3] = {1,2,3,4,5,6};
//	int arr4[][2] = {1,2,3,4,5,6};
//	int i, j;
//
//	int row = sizeof(arr2)/sizeof(arr2[0]);
//	int col = sizeof(arr2)/row/sizeof(arr2[0][0]);
//
//	for(i=0; i<2; i++){
//		for(j=0; j<3; j++){
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//void p339(){
//	int arr1[3][4];
//	int arr2[7][9];
//	printf("����3, ����4 : %d \n", sizeof(arr1));
//	printf("����7, ����9 : %d \n", sizeof(arr2));
//}
//void p342(){
//	int villa[4][2];
//	int popu, i,j;
//
//	//������ �����ο� �Է� �ޱ�
//	for(i=0; i<4; i++){
//		for(j=0;j<2;j++){
//			printf("%d�� %dȣ �α��� : ", i+1, j+1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//
//	//������ ���� �α��� ����ϱ�
//	for(i=0; i<4; i++){
//		popu=0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d�� �α��� : %d \n", i+1, popu);
//	}
//}
//void p344(){
//	int arr[3][2];
//	int i,j;
//	for(i=0; i<3; i++){
//		for(j=0; j<3; j++){
//			printf("%p \n", &arr[i][j]);
//		}
//	}
//}
//void p348_1(){
//	int arr[3][9];
//	int i,j;
//	for(i=0;i<3;i++){
//		for(j=0; j<9; j++){
//			arr[i][j] = (i+2) * (j+1);
//		}
//	}
//
//	for(i=0;i<3;i++){
//		for(j=0; j<9; j++){
//			printf("%d " , arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void p348_2(){
//	int a[2][4] = {{1,2,3,4}, {5,6,7,8}};
//	int b[4][2];
//	int i,j;
//
//	for(i=0; i<4; i++){
//		for(j=0; j<2; j++){
//			b[i][j] = a[j][i];
//		}
//	}
//	for(i=0; i<4; i++){
//		for(j=0; j<2; j++){
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//}
//void p348_3(){
//	int arr[5][5];
//	int i,j;
//	int input;
//	int temp1, temp2;
//
//	//�Է¹ޱ�
//	for(i=0; i<4; i++){
//		for(j=0; j<4; j++){
//			scanf("%d",&input);
//			arr[i][j] = input;
//		}
//	}
//	//�������
//	for(i=0; i<5; i++){
//		temp1 = 0;
//		temp2 = 0;
//		for(j=0; j<5; j++){
//			if(j==4){
//				arr[i][j] = temp1; 
//				arr[j][i] = temp2;
//			}
//			temp1 += arr[i][j];//���� ��
//			temp2 += arr[j][i];//���� ��
//		}
//	}
//
//	//���
//	for(i=0; i<5; i++){
//		for(j=0; j<5; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
////3���� �迭 ����
//void func2(){
//	int i,j,k;
//	int mean = 0;
//	int record[3][3][2] = {
//		{
//			{70,80},
//			{94,90},
//			{70,85}
//		},
//
//		{
//			{83,90},
//			{95,60},
//			{90,82}
//		},
//
//		{
//			{98,89},
//			{99,94},
//			{91,87}
//		}
//	};
//
//	for(i=0; i<3; i++){
//		printf("%d�� �л� ����", i+1);
//		printf("\n");
//		for(j=0; j<3; j++){
//			for(k=0; k<2; k++){
//				printf("%d ",record[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//
//
//	for(i=0; i<3; i++){
//		for(j=0; j<2; j++){
//			mean += record[0][i][j];
//		}
//	}
//	printf("A �б� ��ü ��� : %g \n", (double)mean/6);
//	mean = 0;
//
//	for(i=0; i<3; i++){
//		for(j=0; j<2; j++){
//			mean += record[1][i][j];
//		}
//	}
//	printf("B �б� ��ü ��� : %g \n", (double)mean/6);
//	mean = 0;
//
//	for(i=0; i<3; i++){
//		for(j=0; j<2; j++){
//			mean += record[2][i][j];
//		}
//	}
//	printf("C �б� ��ü ��� : %g \n", (double)mean/6);
//
//}
////�������� ������
//void p359(){
//	double num = 3.14;
//	double *ptr = &num;
//	double **dptr = &ptr;
//	double *ptr2;
//
//	printf("%9p %9p \n", ptr, *dptr);
//	printf("%9g %9g \n", num, **dptr);
//	ptr2 = *dptr; //ptr2 = ptr �� ���� ����
//	*ptr2 = 10.99;
//	printf("%9g %9g \n", num, **dptr);
//
//}
//
//void swapValue(int num1, int num2){
//	int temp;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void swapReference(int *num1, int *num2){
//	int temp;
//	temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//void func3(){
//	int num1 = 10;
//	int num2 = 20;
//
//	swapValue(num1 , num2);
//	printf("%d %d \n", num1 , num2);
//	swapReference(&num1 , &num2);
//	printf("%d %d \n", num1 , num2);
//}
//
//void SwapIntPtr(int **dp1, int **dp2){
//	int *temp = *dp1;
//	*dp1 = *dp2;
//	*dp2= temp;
//	printf("<<*ptr1, *ptr2 : %p %p>> \n", *dp1, *dp2);
//}
//void p361(){
//	int num1 =10, num2=20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2 : %p %p \n", *ptr1, *ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//	printf("*ptr1, *ptr2 : %p %p \n", *ptr1, *ptr2);
//}
//
//void p365(){
//	int num1 = 10, num2 = 20, num3 = 30;
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	int *ptr3 = &num3;
//
//	int *ptrArr[] = {ptr1, ptr2, ptr3};
//	int **dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]),*(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]),*(dptr[2]));
//
//}
////�ּ� �ִ뱸�ؼ� �ּҰ��� ���� �ּҿ� �ִ밪�� ���� �ּҸ� ��ȯ
//void minAndMax(int *arr, int len, int **dpMin, int **dpMax ){
//	int i;
//
//	int maxIndex=0;//�ִ�
//	int minIndex=0;
//
//
//	//�ε��� ã��
//	for(i=0; i<len; i++){
//		if(arr[maxIndex] < arr[i]){
//			maxIndex = i;
//		}
//		if(arr[minIndex] > arr[i]){
//			minIndex = i;
//		}
//	}
//
//	*dpMax = arr+maxIndex;
//	*dpMin = arr+minIndex;
//
//
//}
//void p368_1(){
//	int *pMin;
//	int *pMax;
//	int arr[5];
//	int len = 5;
//	int i;
//
//	for(i=0; i<len; i++){
//		scanf("%d", &arr[i]);
//	}
//
//
//	minAndMax(arr, 5, &pMin, &pMax);
//	printf("%d, %d", *pMin, *pMax);
//}
////���� ���ڿ� �ϳ� �Է¹��� >> (�Լ�����) ���ڿ��� ���� ���� �� �ƽ�Ű�ڵ尡 ���� ���� ������ �ּҸ� ���� �޴� �Լ� ����
//void ASCII(char *arr, char **ptr){
//	int i=0;
//	int temp = 0;
//	
//
//	while(arr[i] != '\0'){
//
//		if(arr[temp]>arr[i]){
//			temp = i;
//		}
//		i++;
//	}
//
//	*ptr = arr + temp;
//}
//void func4(){
//	char input[100];
//	char *pInput = input;
//	
//	scanf("%s", input);
//	ASCII(input , &pInput);
//	printf("%c\n" , *pInput);
//	
//}
////������ �迭 arr[1] �� 1����ü�� ��Ÿ��
//void p374(){
//	int arr2p[3][3];
//	printf("%d \n", arr2p);
//	printf("%d \n", arr2p[0]);
//	printf("%d \n\n", &arr2p[0][0]);
//
//	printf("%d \n", arr2p[1]);
//	printf("%d \n\n", &arr2p[1][0]);
//
//	printf("%d \n", arr2p[2]);
//	printf("%d \n\n", &arr2p[2][0]);
//
//	printf("sizeof(arr2p) : %d \n", sizeof(arr2p));
//	printf("sizeof(arr2p[0]) : %d \n", sizeof(arr2p[0]));
//	printf("sizeof(arr2p[1]) : %d \n", sizeof(arr2p[1]));
//	printf("sizeof(arr2p[2]) : %d \n", sizeof(arr2p[2]));
//}
//void p376(){
//	int arr1[3][2];
//	int arr2[2][3];
//
//	printf("arr1 : %p \n", arr1);
//	printf("arr1+1 : %p \n", arr1+1);
//	printf("arr1+2 : %p \n\n", arr1+2);
//
//	printf("arr2 : %p \n", arr2);
//	printf("arr2+1 : %p \n", arr2+1);
//}
//
//void func5(){
//	int arr[2][3] = {1,2,3,4,5,6};
//	int (*ptr)[3];
//	int i,j;
//	ptr = arr;
//
//	for(i=0; i<2; i++){
//		for(j=0; j<3; j++){
//			printf("%d,  ", ptr[i][j]);
//		}
//		printf("\n");
//	}
//}
////�迭������, 2�����迭������ ����
//void p382(){
//	int num1=10, num2=20, num3=30, num4=40;
//	int arr2p[2][4] = {1,2,3,4,5,6,7,8};
//	int i,j;
//
//	int *whoA[4] = {&num1, &num2, &num3, &num4};
//	int (*whoB)[4] = arr2p;
//
//	printf("%d %d %d %d \n", *whoA[0],*whoA[1],*whoA[2],*whoA[3]);
//	for(i=0; i<2; i++){
//		for(j=0; j<4; j++){
//			printf("%d ", whoB[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////�Լ� ������ ����
//void simple(int n1, int n2){
//	printf("%d %d ", n1,n2);
//}
//void func6(){
//
//	void (*ptr)(int, int) = simple;
//	ptr(2,3);
//
//}
//
////p394
//void simpleAdder(int n1, int n2){
//	printf("%d + %d = %d \n", n1,n2,n1+n2);
//}
//void showString(char *str){
//	printf("%s \n", str);
//}
//void p394(){
//	char *str = "Function Pointer";
//	int num1 =10, num2 =20;
//
//	void (*fptr1)(int,int) = simpleAdder;
//	void (*fptr2)(char *) = showString;
//
//	//�Լ� ������ ������ ���� ȣ��
//	fptr1(num1,num2);
//	fptr2(str);
//}
////p395
//int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)){
//	return cmp(age1, age2);
//}
//int OlderFirst(int age1, int age2){
//	if(age1>age2){
//		return age1;
//	}else if(age1<age2){
//		return age2;
//	}else{
//		return 0;
//	}
//}
//int YoungerFirst(int age1, int age2){
//	if(age1<age2){
//		return age1;
//	}else if(age1>age2){
//		return age2;
//	}else{
//		return 0;
//	}
//}
//void p395(){
//	int age1 = 20;
//	int age2 = 30;
//	int first;
//
//	printf("������� 1 \n");
//	first = WhoIsFirst(age1, age2, OlderFirst);
//	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);
//
//	printf("������� 2 \n");
//	first = WhoIsFirst(age1, age2, YoungerFirst);
//	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);
//}
//
//
//int main(){
//	
//	p395();
//	return 0;
//}

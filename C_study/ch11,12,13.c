#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//배열
void p259(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[]={1,2,3,4,5,6,7};
	int arr3[5] = {1,2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

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
		printf("%d 번째 정수를 입력하세요 : ", (i+1));
		scanf("%d",&arr_input[i]);
	}
	btemp = arr_input[0];//최댓값 초기화
	stemp = arr_input[0];//최솟값 초기화

	for(i=0; i<5; i++){//배열 나열
		printf("%d ", arr_input[i]);
	}
	printf("\n");

	for(i=0; i<5; i++){//최댓값, 최솟값, 총합
		if(arr_input[i]>btemp){
			btemp = arr_input[i];
		}
		if(arr_input[i]<stemp){
			stemp = arr_input[i];
		}
		sum += arr_input[i];
	}
	
	printf("최댓값 :  %d ", btemp);
	printf("최솟값 :  %d ", stemp);
	printf("총합 :  %d \n", sum);
}
//10개 정수 입력 후 3의 배수 출력
void func2(){
	int arr[10];
	int i;
	int len = sizeof(arr)/sizeof(int);
	int tf=0;

	for(i=0; i<len; i++){
		printf("%d 번째 숫자를 입력하세요 : ", (i+1));
		scanf("%d", &arr[i]);
	}

	printf("3의 배수 : ");
	for(i=0; i<len; i++){
		if(arr[i]%3 == 0){
			printf("%d ", arr[i]);
			tf = 1;
		}
	}

	if(tf == 0){
		printf("없음\n");
	}
	
}
//4 +8 +16 +20 + ... > 400을 넘기는 수는 몇번째인지 그 요소를 출력
void func3(){
	int arr[100];
	int i;
	int arr_len = sizeof(arr) / sizeof(int);
	int sum=0;

	
	for(i=0; i<arr_len; i++){//배열 초기화 4의 배수 100개 저장

		if(i==0){
			arr[0] = 4;
		}
		else{
			arr[i] = arr[0]*(i+1);
		}
	}

	
	for(i=0; i<arr_len; i++){//4배수 구하기
		if(sum > 400){
			printf("%d번째 요소 %d\n", (i+1), arr[i]);
			break;
		}
		sum += arr[i];
		
	}

}
//정수 10개 입력 후 홀 짝 나눠서 출력
void func4(){
	int i;
	int input[10];
	int len = sizeof(input)/sizeof(int);
	int h[10];
	int h_size = 0;
	int z[10];
	int z_size = 0;

	for(i=0; i<len ; i++){
		printf("%d 번째 정수를 입력하세요 : ", (i+1));
		scanf("%d", &input[i]);
		if(input[i]%2 == 0){//짝수 저장
			z[z_size] = input[i];
			z_size++;
		}
		else{//홀수저장
			h[h_size] = input[i];
			h_size++;
		}
	}
	
	//저장된 배열 단순 나열
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

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");
}
//char형 널문자 만나면 읽기 종료 
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
//단어길이
int getLen(){
	char str[100];
	int i=0;
	int count = 0;

	printf("영단어 입력 : ");
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
	int i=0;//(입력한 문자의)배열의 시작점 h
	int count = 0;//(입력한 문자의)배열의 끝점 o
	int temp=0;

	printf("영단어를 입력하세요 : ");
	scanf("%s", input);

	while(input[i] != '\0'){
		
		count++;
		i++;
	}

	//반전
	for(i=0; i<count/2; i++){
		
		temp = input[i];
		input[i] = input[count-1-i];
		input[count-1-i] = temp;
		
	}

	for(i=0; i<count; i++){
		printf("%c ", input[i]);
	}
}
//포인터 기초
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
	printf("배열의 이름 : %p \n", arr);
	printf("첫 번째 요소 : %p \n", &arr[0]);
	printf("두 번째 요소 : %p \n", &arr[1]);
	printf("세 번째 요소 : %p \n", &arr[2]);
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
//20200117_금
//정수 10개 입력 후 포인터로 최대 최소 찾기
void func7(){
	int arr[10];
	int i;
	int *max = &arr[0];
	int *min = &arr[9];

	for(i=0; i<10; i++){
		printf("%d 번째 정수를 입력하세요 : ", (i+1));
		scanf("%d", &arr[i]);
	}

	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	for(i=0; i<10; i++){
		if(*max < arr[i]){//  *max (arr[0]의 '실제값')이 arr[0 1 2 ...]보다 작을 때 >> 즉 arr[0 1 2 ...]가 클 때
			max = &arr[i];//  max (가리키는 '주소값')을 arr[0 1 2 ...]의 주소값으로 바꿔준다. 

			// *max = arr[i]; >> 처음에 한 실수 : 이렇게 되면 [1 2 3 4 ... 10]으로 되어있던 배열이 [2 2 3 4 ... 10]으로 변경된다.
		}
	}
	//printf("최댓값 : %d \n", *max);
	for(i=0; i<10; i++){
		if(*min > arr[i]){
			min = &arr[i];
		}
	}
	printf("최댓값 : %d , 최솟값 : %d \n", *max, *min);

}
void func7_t(){
	int arr[10];
	int i;
	int max, min;
	int *ptr = &arr[0];
	
	for(i=0; i<10; i++){
		printf("%d 번째 정수를 입력하세요 : ", (i+1));
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
	
		printf("최대 : %d, 최소 : %d" ,max, min);
	
}
//포인터 변수를 통해 두 값을 바꿔주기
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
//랜덤함수
void func9(){
	int num;
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num = rand();
		printf("%d, ", num);
	}
}
//0~9 난수 출력
void func10(){
	int num;
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num = rand() % 10;
		
		printf("%d ", num);
		
	}

}
//0~9 배열 난수
void func11(){
	int num[10];
	int i;
	srand(time(NULL));

	for(i=0; i<10; i++){
		num[i] = rand() % 10;
		
		printf("%d ", num[i]);
		
	}

}
//0~9 배열 난수 중복없이
void func12(){
	int arr[10];
	int num;
	int i;
	int temp=0;
	
	srand(time(NULL));

	//0~10 까지 선언
	for(i=0; i<10; i++){
		arr[i] = i;
	}
	
	//이를 100번 섞어줌
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
//0~9 배열 난수 중복없이 포인터
void func13(){
	int arr[10];
	int num;
	int i;
	int temp=0;
	int *ptr = arr;
	
	srand(time(NULL));

	//0~10 까지 선언
	for(i=0; i<10; i++){
		arr[i] = i;
	}
	
	//이를 100번 섞어줌
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
#include <stdio.h>
/*
//while문 기본
void func_1(){
	int i = 0;
	int count = 1;

	while(i<10){
		printf("%d. hello world\n", count);
		i++;
		count++;
	}
}
//while 구구단
void func_2(){
	int i;
	int dan = 2;

	//printf("단수를 입력하세요 : ");
	//scanf("%d", &dan);
	while(dan<10){
		i = 0;
		printf("<<%d단>>\n",dan);
		while(i<10){
		
		printf("%d * %d = %d\n",dan, i, dan*i);

		i++;
		
	}
		dan++;
	}
	

}

//p155
void ex_1_155(){
	int count;
	int temp=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &count);

	while(temp<count){
		printf("Hello world!\n");
		temp++;
	}

}

void ex_2_155(){
	int count;
	int temp=1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &count);

	while(temp<=count){
		printf("%d ", temp*3);
		temp++;
	}
}

void ex_3_155(){
	int input=1;
	int temp=0;
	while(input!=0){
		
		scanf("%d", &input);
		temp += input;
		
	}
	printf("%d", temp);
}

void ex_4_155(){
	int dan;
	int count=9;
	scanf("%d",&dan);
	while(count>0){
		printf("%d * %d = %d\n",dan,count,dan*count);
		count--;
	}
}

void ex_5_155(){
	int count;
	int input;
	int temp=0;
	double inputTemp=0;

	printf("몇개의 정수를 입력하시겠습니까? : ");
	scanf("%d",&count);

	while(temp<count){
		scanf("%d",&input);

		inputTemp += input;

		temp++;
	}
	printf("%f", (double)inputTemp/count);
}

//p157
void ex_1_157(){
	int input=0;
	int count=0;
	int temp=0;


	while(count<5){
		//printf("정수를 입력하세요 : ");
		input=0;
		while(input<1){
			printf("1보다 큰 정수를 입력하세요 : ");
			scanf("%d",&input);
		}
		printf("입력된 정수 %d \n ", input);
		temp+=input;
		input=0;//넣는 값 초기화
		count++;
	}
	printf("합 %d\n", temp);
}

void ex_2_157(){

	int star = 0;
	int circle = 0;
	
	while(star<5){//행
		
		while(circle<star){//열
			printf("o");
			
			circle++;		
		}
		circle=0;//열 초기화
		printf("*");
		printf("\n");
		star++;
		
	}
}
//do while 기본
void func_3(){
	int total=0, num=0;
	do{
		printf("정수 입력(0 to quit): ");
		scanf("%d",&num);
		total += num;
	}while(num!=0);
	printf("합계: %d \n", total);
}

//for 구구단 2~9단
void func_4(){
	int i,j;
	for(i=2; i<=9; i++){
		printf("<<<%d 단>>>\n", i);
		for(j=1; j<=9; j++){
			
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}
}
//for 팩토리얼
void func_5(){
	int i;
	int input;
	int temp=1;

	printf("팩토리얼을 구할 숫자를 입력하세요 : ");
	scanf("%d", &input);

	for(i=1; i<=input; i++){
		temp *= i;
	}

	printf("%d ! = %d\n", input,temp);
}

int main(void){
	
	func_5();

	return 0;
}
*/
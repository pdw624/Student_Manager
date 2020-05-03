#include <stdio.h>
/*
//if 계산기
void func_1(){
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2);

	if(opt==1){
		result = num1 + num2;
	}
		
	if(opt==2){
		result = num1 - num2;
	}
		
	if(opt==3){
		result = num1 * num2;
	}
		
	if(opt==4){
		result = num1 / num2;
	}
		

	printf("결과 : %f \n", result);
	
}
//if 학점 계산기
void func_2(){
	int score;

	printf("성적을 입력하세요 : ");
	scanf("%d",&score);
	if(score<=100 && score >=0){

		if(score >= 90){
			printf("A 학점입니다.\n");
		}else if(score>=80){
			printf("B 학점입니다.\n");
		}else if(score>=70){
			printf("C 학점입니다.\n");
		}else if(score>=60){
			printf("D 학점입니다.\n");
		}else{
			printf("F 학점입니다.\n");
		}

	}else{
		printf("0-100 사이의 성적을 입력하세요\n");
	}

	
}
//switch 기본
void func_3(){
	int num;
	printf("1이상 5 이하의 정수 입력:");
	scanf("%d",&num);

	switch(num){

	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2는 TWO \n");
		break;
	case 3:
		printf("3은 THREE \n");
		break;
	case 4:
		printf("4는 FOUR \n");
		break;
	case 5:
		printf("5는 FIVE \n");
		break;
	default:
		printf("I don't know! \n");

	}
}
//switch 학점 계산기
void func_4(){//알파벳 q를 입력하기 전엔 반복문
	int score;
	char grade;
	
	
	printf("성적을 입력하세요(q = 종료) : ");
	scanf("%d",&score);

	
	switch(score/10){
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default :
		grade = 'F';
		break;
	}
	
	printf("학생의 학점은 %c 입니다 \n\n", grade);
}
//switch 학점 계산기 반복문
void func_5(){
	int ch = NULL;

	do{
		func_4();
		scanf("%c", &ch);
	}while(ch != 'q');
}
//조건식 절댓값
void func_6(){
	int num, abs;
	printf("정수 입력 : ");
	scanf("%d", &num);

	abs = num>0 ? num : num*(-1);
	printf("절댓값 : %d \n", abs);
}

void ex_1_189(){
	int i;
	for(i=1; i<100; i++){
		if(i%7 == 0 || i%9==0){
			printf("%d \n", i);
		}
	}
}
void ex_2_189(){
	int input1, input2;
	int temp;

	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &input1, &input2);

	if(input1 > input2){
		temp = input1 - input2;
	}else{
		temp = input2 - input1;
	}
	printf("%d\n", temp);

}
void ex_3_189(){
	int kor, eng, math;
	int avg;

	printf("국어, 영어, 수학의 점수를 차례대로 입력하세요 : ");
	scanf("%d %d %d", &kor, &eng, &math);
	avg = (kor + eng + math)/3;

		if(avg >= 90){
			printf("A 학점입니다.\n");
		}else if(avg>=80){
			printf("B 학점입니다.\n");
		}else if(avg>=70){
			printf("C 학점입니다.\n");
		}else if(avg>=50){
			printf("D 학점입니다.\n");
		}else{
			printf("F 학점입니다.\n");
		}
}
void ex_4_189(){
	int input1, input2;
	int btemp;
	int stemp;
	int temp;

	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &input1, &input2);

	btemp = input1>input2 ? input1 : input2;
	stemp = input1>input2 ? input2 : input1;

	temp = btemp - stemp;
	printf("%d\n", temp);
	
}

void func_7(){
	int i=1;
	int temp=0;
	int lastnum=0;
	while(temp < 5000){
		temp += i;
		lastnum = i;
		i++;
	}
	printf("총합 : %d, 마지막으로 더해진 수 : %d\n",temp, lastnum);

}

void func_8(){
	int sum=0, num=0;
	while(1){
		sum+=num;
		if(sum>5000){
			break;
		}
		num++;
	}

	printf("sum : %d \n", sum);
	printf("num : %d \n", num);
}

void func_9(){
	int num;
	printf("start! ");

	for(num=1; num<20; num++){
		if(num%2==0 || num%3==0){
			continue;
		}
		printf("%d ", num);
	}
	printf("end! \n");
}
//p234
void SimpleFunc(void){
		static int num1=0;
		int num2=0;
		num1++, num2++;
		printf("static: %d, local: %d \n", num1, num2);
}
//p237
int AddToTotal(int num){
	static int total = 0;
	total += num;
	return total;
}
//p243
int factorial(int num){
	if(num == 1){
		return 1;
	}
	return num * factorial(num - 1);

}
//p221 연습문제 1번
int maxNum(int a, int b, int c){
	int max = 0;

	if(a > b){
		max = a;
		if(max > c){
			return max;
		}else{
			max = c;
			return max;
		}
	}else{
		max = b;
		if(max > c){
			return max;
		}else{
			max = c;
			return max;
		}
	}
	

}
int minNum(int a, int b, int c){
	int min = 0;

	if(a > b){
		min = b;
		if(min > c){
			min = c;
			return min;
		}else{
			return min;
		}
	}else{
		min = a;
		if(min > c){
			min = c;
			return min;
		}else{
			return min;
		}
	}

}
void ex_1_221(){
	int a = 10, b = 20, c = 30;
	printf("가장 큰 수 : %d\n", maxNum(a,b,c));
	printf("가장 작은 수 : %d\n", minNum(a,b,c));
}
//p221 연습문제 2번
float CelToFah(float cel){
	float fah = 1.8*cel+32;
	return fah;
}
float FahToCel(float fah){
	float cel = (fah-32)/1.8;
	return cel;
}
void ex_2_221(){
	float cel = 32.2;
	float fah = 89.9;

	printf("섭씨 %f 도를 변경한 화씨 온도 = %f\n",cel,CelToFah(cel));
	
	printf("화씨 %f 도를 변경한 섭씨 온도 = %f\n",fah,FahToCel(fah));

}
//p221 연습문제 3번
void pivot(int num){

	int i;
	int first = 0;
	int second = 1;
	int temp=0;

	for (i = 0; i < num; i++) {

		if(i==0){
			printf("%d ", first);
		}
		else if(i==1){
			printf("%d ", second);
		}else{
			temp = first + second;

			printf("%d ", temp);

			first = second;
			second = temp;
		}
	}

}
int main(void){
	
	pivot(2);
	return 0;
}
*/
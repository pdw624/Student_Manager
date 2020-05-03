#include <stdio.h>

/*


//전위, 후위 실습
void func_1(){

	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);

}

//scanf 실습
void func_2(){

	int val;
	
	scanf("%d", &val);
	printf("입력 값: %d \n", val);
	
}

//scanf 실습 - 두 정수를 입력받아 덧셈,뺄셈 결과 출력
void func_3(){

	int val1;
	int val2;
	scanf("%d %d", &val1, &val2);
	printf("두 수의 합 : %d \n", val1+val2);
	printf("두 수의 차 : %d \n", val1-val2);
}
//진수 변환 - 8진수, 16진수
void func_4(){
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	
	printf("0xA7의 10진수 정수 값 : %d \n", num1);
	printf("0x43의 10진수 정수 값 : %d \n", num2);
	printf("032의  10진수 정수 값 : %d \n", num3);
	printf("024의  10진수 정수 값 : %d \n", num4);

	printf("%d-%d=%d \n", num1,num2,num1-num2);
	printf("%d+%d=%d \n", num1,num2,num1+num2);
}

void func_5(){
	int i;
	float num = 0.0;

	for(i=0; i<100; i++){
		num+=0.1;
	}
	printf("0.1을 100번 더한 결과 : %f \n", num);
}

void func_6(){
	int a,b;
	printf("두개의 정수 a, b를 입력하세요 : ");
	scanf("%d %d", &a,&b);
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b = %d\n", a^b);
	printf("~a = %d  ~b = %d\n", ~a,~b);
	printf("a<<1 = %d b<<1 = %d\n", a<<1,b<<1);
}

void func_7(){
	int input;
	printf("숫자 입력: ");
	scanf("%d",&input);

	input = input<<3;
	input = input>>2;

	
	printf("8을 곱한 값을 4로 나눈 값 : %d\n", input);
}

void func_8(){
	char ch=9;
	int inum=1052;
	double dnum=3.1415;

	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 inum의 크기 : %d \n", sizeof(inum));
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

	printf("char의 크기 : %d \n", sizeof(char));
	printf("int의 크기 : %d \n", sizeof(int));
	printf("long의 크기 : %d \n", sizeof(long));
	printf("long long의 크기 : %d \n", sizeof(long long));
	printf("float의 크기 : %d \n", sizeof(float));
	printf("double의 크기 : %d \n", sizeof(double));

}

void func_9(){
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
}
void func_10(){
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f \n",num1);
	printf("실수 3.1415를 정수로 : %d \n", num2);
	printf("큰 정수 129를 작은 정수로 : %d \n", ch);

}
void func_11(){
	int num1 = 3, num2 = 4;
	double divResult;

	divResult = (double)num1/num2;
	printf("나눗셈 결과 : %f \n", divResult);
}

int main(void){
	func_11();

	
	return 0;

}


*/

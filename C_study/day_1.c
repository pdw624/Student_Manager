#include <stdio.h>

/*


//����, ���� �ǽ�
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

//scanf �ǽ�
void func_2(){

	int val;
	
	scanf("%d", &val);
	printf("�Է� ��: %d \n", val);
	
}

//scanf �ǽ� - �� ������ �Է¹޾� ����,���� ��� ���
void func_3(){

	int val1;
	int val2;
	scanf("%d %d", &val1, &val2);
	printf("�� ���� �� : %d \n", val1+val2);
	printf("�� ���� �� : %d \n", val1-val2);
}
//���� ��ȯ - 8����, 16����
void func_4(){
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	
	printf("0xA7�� 10���� ���� �� : %d \n", num1);
	printf("0x43�� 10���� ���� �� : %d \n", num2);
	printf("032��  10���� ���� �� : %d \n", num3);
	printf("024��  10���� ���� �� : %d \n", num4);

	printf("%d-%d=%d \n", num1,num2,num1-num2);
	printf("%d+%d=%d \n", num1,num2,num1+num2);
}

void func_5(){
	int i;
	float num = 0.0;

	for(i=0; i<100; i++){
		num+=0.1;
	}
	printf("0.1�� 100�� ���� ��� : %f \n", num);
}

void func_6(){
	int a,b;
	printf("�ΰ��� ���� a, b�� �Է��ϼ��� : ");
	scanf("%d %d", &a,&b);
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b = %d\n", a^b);
	printf("~a = %d  ~b = %d\n", ~a,~b);
	printf("a<<1 = %d b<<1 = %d\n", a<<1,b<<1);
}

void func_7(){
	int input;
	printf("���� �Է�: ");
	scanf("%d",&input);

	input = input<<3;
	input = input>>2;

	
	printf("8�� ���� ���� 4�� ���� �� : %d\n", input);
}

void func_8(){
	char ch=9;
	int inum=1052;
	double dnum=3.1415;

	printf("���� ch�� ũ�� : %d \n", sizeof(ch));
	printf("���� inum�� ũ�� : %d \n", sizeof(inum));
	printf("���� dnum�� ũ�� : %d \n", sizeof(dnum));

	printf("char�� ũ�� : %d \n", sizeof(char));
	printf("int�� ũ�� : %d \n", sizeof(int));
	printf("long�� ũ�� : %d \n", sizeof(long));
	printf("long long�� ũ�� : %d \n", sizeof(long long));
	printf("float�� ũ�� : %d \n", sizeof(float));
	printf("double�� ũ�� : %d \n", sizeof(double));

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

	printf("���� 245�� �Ǽ��� : %f \n",num1);
	printf("�Ǽ� 3.1415�� ������ : %d \n", num2);
	printf("ū ���� 129�� ���� ������ : %d \n", ch);

}
void func_11(){
	int num1 = 3, num2 = 4;
	double divResult;

	divResult = (double)num1/num2;
	printf("������ ��� : %f \n", divResult);
}

int main(void){
	func_11();

	
	return 0;

}


*/

#include <stdio.h>
/*
//while�� �⺻
void func_1(){
	int i = 0;
	int count = 1;

	while(i<10){
		printf("%d. hello world\n", count);
		i++;
		count++;
	}
}
//while ������
void func_2(){
	int i;
	int dan = 2;

	//printf("�ܼ��� �Է��ϼ��� : ");
	//scanf("%d", &dan);
	while(dan<10){
		i = 0;
		printf("<<%d��>>\n",dan);
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
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &count);

	while(temp<count){
		printf("Hello world!\n");
		temp++;
	}

}

void ex_2_155(){
	int count;
	int temp=1;
	printf("������ �Է��ϼ��� : ");
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

	printf("��� ������ �Է��Ͻðڽ��ϱ�? : ");
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
		//printf("������ �Է��ϼ��� : ");
		input=0;
		while(input<1){
			printf("1���� ū ������ �Է��ϼ��� : ");
			scanf("%d",&input);
		}
		printf("�Էµ� ���� %d \n ", input);
		temp+=input;
		input=0;//�ִ� �� �ʱ�ȭ
		count++;
	}
	printf("�� %d\n", temp);
}

void ex_2_157(){

	int star = 0;
	int circle = 0;
	
	while(star<5){//��
		
		while(circle<star){//��
			printf("o");
			
			circle++;		
		}
		circle=0;//�� �ʱ�ȭ
		printf("*");
		printf("\n");
		star++;
		
	}
}
//do while �⺻
void func_3(){
	int total=0, num=0;
	do{
		printf("���� �Է�(0 to quit): ");
		scanf("%d",&num);
		total += num;
	}while(num!=0);
	printf("�հ�: %d \n", total);
}

//for ������ 2~9��
void func_4(){
	int i,j;
	for(i=2; i<=9; i++){
		printf("<<<%d ��>>>\n", i);
		for(j=1; j<=9; j++){
			
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}
}
//for ���丮��
void func_5(){
	int i;
	int input;
	int temp=1;

	printf("���丮���� ���� ���ڸ� �Է��ϼ��� : ");
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
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//
//void p420(){
//	int ch1, ch2;
//
//	ch1 = getchar();
//	ch2 = fgetc(stdin);
//
//	putchar(ch1);
//	fputc(ch2, stdout);
//
//}
//void p424(){
//	char *str = "Simple String";
//
//	printf("1. puts test ------ \n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test ------ \n");
//	fputs(str, stdout);
//	printf("\n");
//	fputs("So Simple String", stdout);
//	printf("\n");
//
//	printf("3. end of main ----\n");
//
//}
//void p426(){
//	char str[7];
//	int i;
//
//	for(i=0; i<3; i++){
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d : %s \n", i+1, str);
//	}
//}
//
//void p423(){
//	//char input;
//	int input, enter;
//	while(1){
//		printf("������ �ϳ��� �Է��ϼ��� : ");
//		input = getchar();
//		enter = fgetc(stdin);
//
//		if(input > 64 && input < 123){
//			if(input >= 97){
//				input = input - 32;
//			}
//			else{
//				input = input + 32;
//			}
//			putchar(input);
//			fputc(enter, stdout);
//		}else{
//			printf("���ĺ��� �ƴ� ���� �ԷµǾ���\n");
//			break;
//		}
//
//	}
//	
//}
////p432
//void ClearLineFromReadBuffer(void){
//	while(getchar()!='\n');
//}
//void p432(){
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();
//
//	fputs("�̸� �Է� : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("�ֹι�ȣ : %s\n", perID);
//	printf("�̸� : %s\n", name);
//}
////strcpy
//void p437(){
//	char str1[20] = "1234567890";
//	char str2[20];
//	char str3[5];
//
//	//----case 1----
//	strcpy(str2, str1);
//	puts(str2);
//	//----case 2----
//	strncpy(str3, str1, sizeof(str3));
//	puts(str3);
//	//----case 3----
//	strncpy(str3, str1, sizeof(str3)-1);
//	str3[sizeof(str3)-1] = 0;
//	puts(str3);
//}
////strcat
//void p440(){
//	char str1[20] = "First~";
//	char str2[20] = "Second";
//
//	char str3[20] = "Simple num: ";
//	char str4[20] = "1234567890";
//
//	//----case 1----
//	strcat(str1, str2);
//	puts(str1);
//
//	//----case 2----
//	strncat(str3, str4, 7);
//	puts(str3);
//}
////strcmp
//void p443(){
//	char str1[20];
//	char str2[20];
//	printf("���ڿ� �Է� 1 : ");
//	scanf("%s", str1);
//
//	printf("���ڿ� �Է� 2 : ");
//	scanf("%s", str2);
//
//	if(!strcmp(str1, str2)){
//		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
//	}else{
//		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");
//
//		if(!strncmp(str1, str2, 3)){
//			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
//		}
//	}
//}
////atoi, atol, atof
//void p444(){
//	char str[20];
//	printf("���� �Է� : ");
//	scanf("%s", str);
//	printf("%d \n", atoi(str));
//
//	printf("�Ǽ� �Է� : ");
//	scanf("%s", str);
//	printf("%g \n", atof(str));
//}
//
//void p445_1(){
//	char input[100];
//	int i=0;
//	int temp=0;
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", input);
//
//	while(input[i] != '\0'){
//		
//		if(input[i] > 47 && input[i] < 58){
//			temp += input[i] - 48;
//		}
//		i++;
//	}
//
//	printf("%d \n", temp);
//}
////p445_2
//void RemoveBSN(char str[]){
//	int len = strlen(str);
//	str[len-1] = 0;
//}
//void p445_2(){
//	char str1[20];
//	char str2[20];
//	char str3[40];
//
//	fgets(str1, sizeof(str1), stdin);
//	RemoveBSN(str1);
//	fgets(str2, sizeof(str2), stdin);
//	RemoveBSN(str2);
//
//	strcpy(str3, str1);
//	strcat(str3, str2);
//
//	printf("%s", str3);
//}
////����ü �⺻
//void func1(){
//	struct point{
//		int x;
//		int y;
//	};
//
//	struct point pos;
//	pos.x = 10;
//	pos.y = 20;
//
//	printf("%d %d ", pos.x, pos.y);
//}
//void func2(){
//	struct student{
//		int id;
//		int score;
//	};
//	int i;
//	struct student st1, st2, st3;
//	
//	st1.id = 1;
//	st1.score = 90;
//
//	st2.id = 2;
//	st2.score = 50;
//
//	st3.id = 3;
//	st3.score = 80;
//
//	
//	printf("%d %d\n", st1.id, st1.score);
//	printf("%d %d\n", st2.id, st2.score);
//	printf("%d %d\n", st3.id, st3.score);
//	
//}
//void func3(){
//	struct point{
//		int x;
//		int y;
//	};
//	struct point p1,p2;
//	double dist;
//
//	printf("ù ��° ���� ��ġ�� �Է��ϼ��� : ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	printf("�� ��° ���� ��ġ�� �Է��ϼ��� : ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	dist =  sqrt((double)((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y)));
//
//	printf("%f \n", dist);
//}
//void func4(){
//	struct student{
//		char name[50];
//		int age;
//	};
//	struct student st1, st2;
//
//	st1.age = 10;
//	strcpy(st1.name, "hello");
//
//	st2.age = 30;
//	strcpy(st2.name, "world");
//
//	printf("%s %d \n", st1.name, st1.age);
//	printf("%s %d \n", st2.name, st2.age);
//}
//void func5(){
//	struct product{
//		int id;
//		char price[50];
//	};
//	struct product p1, p2;
//
//	printf("ù ��° ��ǰ�� ���̵�� ������ �Է��ϼ��� : ");
//	scanf("%d %s", &p1.id, p1.price);
//
//	printf("�� ��° ��ǰ�� ���̵�� ������ �Է��ϼ��� : ");
//	scanf("%d %s", &p2.id, p2.price);
//
//	printf("1�� ��ǰ ID : %d \n1�� ��ǰ ���� : %s \n", p1.id, p1.price);
//	printf("2�� ��ǰ ID : %d \n2�� ��ǰ ���� : %s \n", p2.id, p2.price);
//}
//void func6(){
//	struct person{
//		char name[50];
//		int num;
//	};
//	struct person p1,p2,p3,p4;
//
//	int i;
//	int index,temp;
//	int arr[4];
//	srand(time(NULL));
//
//	//1~4 �� �迭�� ����
//	for(i=0; i<4; i++){
//		arr[i] = i+1;
//	}
//	//�迭 ���� ����
//	for(i=0; i<100; i++){
//		index = rand()%4;
//		temp = arr[0];
//		arr[0] = arr[index];
//		arr[index] = temp;
//	}
//	printf("<<1�� �ɸ� ����� ��÷>>\n\n");
//
//	printf("ù ��° �л��� �̸��� �Է��ϼ��� : ");
//	scanf("%s", p1.name);
//	printf("�� ��° �л��� �̸��� �Է��ϼ��� : ");
//	scanf("%s", p2.name);
//	printf("�� ��° �л��� �̸��� �Է��ϼ��� : ");
//	scanf("%s", p3.name);
//	printf("�� ��° �л��� �̸��� �Է��ϼ��� : ");
//	scanf("%s", p4.name);
//
//	
//	p1.num = arr[0];
//	p2.num = arr[1];
//	p3.num = arr[2];
//	p4.num = arr[3];
//
//	
//	//printf("\n%s�� ��ȣ : %d\n", p1.name, p1.num);
//	//printf("%s�� ��ȣ : %d\n", p2.name, p2.num);
//	//printf("%s�� ��ȣ : %d\n", p3.name, p3.num);
//	//printf("%s�� ��ȣ : %d\n", p4.name, p4.num);
//	
//	if(p1.num == 1){
//		printf("��÷ : %s\n", p1.name);
//	}else if(p1.num == 2){
//		printf("��÷ : %s\n", p2.name);
//	}else if(p1.num == 3){
//		printf("��÷ : %s\n", p3.name);
//	}else if(p1.num == 4){
//		printf("��÷ : %s\n", p4.name);
//	}
//
//}
//void p458_1(){
//	struct employee{
//		char name[20];
//		char c_num[20];
//		int m_num;
//	};
//
//	struct employee e1;
//
//	printf("������ �̸��� �Է��ϼ��� : ");
//	scanf("%s", e1.name);
//	//fputs("������ �̸��� �Է��ϼ��� : ", stdout);
//	//fgets(e1.name, sizeof(e1.name), stdin);
//
//	printf("�ֹε�Ϲ�ȣ�� �Է��ϼ��� : ");
//	scanf("%s", e1.c_num);
//	//fputs("�ֹε�Ϲ�ȣ�� �Է��ϼ��� : ", stdout);
//	//fgets(e1.c_num, sizeof(e1.c_num), stdin);
//
//	printf("�޿��� �Է��ϼ��� : ");
//	scanf("%d", &e1.m_num);
//	
//	printf("�̸� : %s", e1.name);
//	printf("�ֹε�Ϲ�ȣ : %s", e1.c_num);
//	printf("�޿� : %d\n", e1.m_num);
//
//
//}
//void func7(){
//	struct employee{
//		char name[20];
//		char c_num[20];
//		int m_num;
//	};
//	int i;
//	struct employee empls[3];
//	
//	for(i=0; i<sizeof(empls)/sizeof(empls[0]); i++){
//		printf("������ �̸� : ");
//		scanf("%s", empls[i].name);
//		printf("�ֹε�Ϲ�ȣ : ");
//		scanf("%s", empls[i].c_num);
//		printf("�޿� : ");
//		scanf("%d", &empls[i].m_num);
//	}
//	printf("\n\n");
//	printf("****���� ���� ���****\n");
//	for(i=0; i<sizeof(empls)/sizeof(empls[0]); i++){
//		printf("%s, %s, %d\n", empls[i].name, empls[i].c_num, empls[i].m_num);
//	}
//}
//
//void ex1(){
//	int num[20];
//	int i;
//	int temp=0;
//	for(i=0; i<20; i++){
//		num[i] = i+1;
//	}
//
//	for(i=0; i<20; i++){
//		if(num[i]%2==0 || num[i]%3==0){
//			continue;
//		}else{
//			temp += num[i];
//		}
//	}
//	printf("%d", temp);
//}
//void ex2(){
//	int arr[10];
//	int temp=0;
//	int i,j;
//	int len = 10;
//
//	for(i=0;i<10;i++){
//		arr[i] = i+1;
//	}
//	
//	for(i=0;i<10;i++){
//		for(j=0; j<len; j++){
//			temp += arr[j];
//		}
//		len--;
//	}
//
//	
//	printf("%d", temp);
//}
//void ex3(){
//	
//	int temp=0;
//	int i=1;
//
//	while(temp<100){
//		if(i%2 == 0){
//			temp += (-i);
//		}else{
//			temp += i;
//		}
//		i++;
//	}
//	printf("%d\n", i-1);
//	printf("%d", temp);
//}
//void ex4(){
//	int i,j;
//	int ju1[6];
//	int ju2[6];
//	int temp;
//
//	for(i=0; i<6; i++){
//		ju1[i] = i+1;
//		ju2[i] = i+1;
//	}
//	
//	for(i=0; i<6; i++){
//		for(j=0; j<6; j++){
//			if(ju1[i] + ju2[j] == 6){
//				printf("%d + %d = %d\n", ju1[i],ju2[j],ju1[i]+ju2[j]);
//			}
//			
//		}
//	}
//}
//void ex5(){
//	char str[50];
//	int i=0;
//	int temp=0;//���ڿ��� ASCII�ڵ带 ���� int ������ �����ϱ� ���� ����
//
//	printf("���ڷ� �� ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", str);
//
//	while(str[i] != '\0'){
//		temp += str[i] - 48;
//		i++;
//	}
//	printf("%d\n",temp);
//}
//void ex6(){
//	int arr[5] = {10,20,30,40,50};
//	int temp=0;
//	int i;
//
//	for(i=0; i<5; i++){
//		temp += arr[i];
//	}
//
//	printf("���� : %d\n",temp);
//}
//void ex7(){
//	int arr[4][5] = {
//		{5,5,5,5,5},
//		{10,10,10,10,10},
//		{20,20,20,20,20},
//		{30,30,30,30,30},
//	}; 
//	int i,j;
//	int sum=0;
//	double avg;
//
//	for(i=0; i<4;i++){
//		for(j=0;j<5;j++){
//			sum += arr[i][j];
//		}
//	}
//	avg = ((double)sum)/20;
//
//	printf("���� : %d, ��� : %f\n", sum,avg);
//}
//void ex8(){
//	int arr[9];
//	int i;
//	int ranIndex;
//	int arrNum[3];
//	int sum = 0;
//	int temp;
//
//	for(i=0; i<9; i++){
//		arr[i] = i+1;
//	}
//	srand(time(NULL));
//	//���������� ������ �迭�� ��ġ
//	for(i=0; i<100; i++){
//		ranIndex = rand() %9+1;
//
//		temp = arr[0];
//		arr[0] = arr[ranIndex-1];
//		arr[ranIndex-1] = temp;
//	}
//	arr[0] *= 100;
//	arr[1] *= 10;
//	arr[2] *= 1;
//	/*
//	for(i=0; i<3; i++){
//		arrNum[i] = arr[i];
//	}
//	for(i=0; i<3; i++){
//		printf("%d ", arrNum[i]);
//		
//	}*/
//	sum = arr[0] + arr[1] + arr[2];
//	printf("%d", sum);
//}
//void ex9(){
//	int arr[11] = {1,4,4,3,1,4,4,2,1,3,2};
//	int i,j;
//	
//
//	for(i=0; i<4; i++){
//		printf("%d ",i+1);
//		for(j=0; j<11; j++){
//
//			if(i==0){
//				if(arr[j]==1){
//					printf("*");
//				}
//				
//			}else if(i==1){
//				if(arr[j]==2){
//					printf("*");
//				}
//			}else if(i==2){
//				if(arr[j]==3){
//					printf("*");
//				}
//			}else if(i==3){
//				if(arr[j]==4){
//					printf("*");
//				}
//			}
//		}
//		printf("\n");
//	}
//	
//
//}
//void ex10(){
//	int arr[10];
//	int i;
//	int *fptr = &arr[0];
//	int *eptr = &arr[9];
//	int temp;
//
//	for(i=0; i<10; i++){
//		arr[i] = i+1;
//	}
//	for(i=0; i<5; i++){
//		temp = *fptr;
//		*fptr = *eptr;
//		*eptr = temp;
//
//		eptr--;
//		fptr++;
//	}
//	for(i=0; i<10; i++){
//		printf("%d ", arr[i]);
//	}
//	
//}
//void p458(){
//	struct point{
//		int xpos;
//		int ypos;
//	};
//
//	struct person{
//		char name[20];
//		char phoneNum[20];
//		int age;
//	};
//
//	struct point pos = {10,20};
//	struct person man = {"�̽±�", "010-1212-0001", 21};
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//}
//void p462(){
//	struct person{
//		char name[20];
//		char phoneNum[20];
//		int age;
//	};
//
//	struct person arr[3]={
//		{"�̽±�","010-1212-0001", 21},
//		{"������","010-1313-0002", 22},
//		{"������","010-1717-0003", 19}
//	};
//
//	int i;
//	for(i=0;i<3;i++){
//		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//	}
//}
////����ü ������ ���� ����
//void p464(){
//	struct point{
//		int xpos;
//		int ypos;
//	};
//
//	struct point pos1 = {1,2};
//	struct point pos2 = {100, 200};
//	struct point * pptr = &pos1;
//
//	(*pptr).xpos += 4;
//	(*pptr).ypos += 5;
//	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
//
//	pptr = &pos2;
//	pptr->xpos += 1;
//	pptr->ypos += 2;
//	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//}
//
//void p465(){
//	struct point{
//		int xpos;
//		int ypos;
//	};
//
//	struct circle{
//		double radius;
//		struct point * center;
//	};
//	struct point cen = {2,7};
//	double rad=5.5;
//
//	struct circle ring = {rad, &cen};
//	printf("���� ������ : %g \n",ring.radius);
//	//printf("���� �߽� [%d, %d] \n", ring.radius);
//	printf("���� �߽� [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//}
////typedef ����ü
//void p475(){
//	typedef struct point{
//		int xpos;
//		int ypos;
//	}Point;
//
//	typedef struct person{
//		char name[20];
//		char phoneNum[20];
//		int age;
//	}Person;
//
//	Point pos = {10,20};
//	Person man = {"�̽±�", "010-1212-0001", 21};
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//}
////p478, 479
//typedef struct point{
//		int xpos;
//		int ypos;
//}Point;
//void ShowPosition(Point pos){
//		printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//Point GetCurrentPosition(){
//	Point cen;
//	printf("Input current pos : ");
//	scanf("%d %d", &cen.xpos, &cen.ypos);
//	return cen;
//}
//void p478(){
//	Point curPos = GetCurrentPosition();
//	ShowPosition(curPos);
//	
//}
////p484_1
//Point SwapPoint(Point *pos1, Point *pos2){
//	int temp;
//	temp = pos1->xpos;
//	pos1->xpos = pos2->xpos;
//	pos2->xpos = temp;
//
//	temp = pos1->ypos;
//	pos1->ypos = pos2->ypos;
//	pos2->ypos = temp;
//	
//}
//void p484_1(){
//	Point pos1 = {2,4};
//	Point pos2 = {5,7};
//
//	SwapPoint(&pos1, &pos2);
//
//	printf("%d %d\n",pos1.xpos, pos1.ypos );
//	printf("%d %d\n",pos2.xpos, pos2.ypos );
//}
//void p489(){
//	//����ü sbox ����
//	typedef struct sbox{
//		int mem1;
//		int mem2;
//		double mem3;
//	}Sbox;
//	typedef union ubox{
//		int mem1;
//		int mem2;
//		double mem3;
//	}Ubox;
//
//	Sbox sbx;
//	Ubox ubx;
//	printf("%p %p %p \n", &sbx.mem1,&sbx.mem2,&sbx.mem3);
//	printf("%p %p %p \n", &ubx.mem1,&ubx.mem2,&ubx.mem3);
//	printf("%d %d \n", sizeof(Sbox), sizeof(Ubox));
//
//}
////1,2��
//void sort(int *arr, int len){
//	int i,j;
//	int index = 0;
//	int temp;
//
//	for(i=0; i<len; i++){
//		for(j=0; j<len; j++){
//			if(arr[i]<arr[j]){
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//void show(int *arr, int len){
//	int i;
//	for(i=0; i<len; i++){
//		printf("%d ", arr[i]);
//	}
//}
//void func8(){
//	int arr[10];
//	int len = sizeof(arr)/sizeof(int);
//	int i;
//	printf("���� 10���� �Է��ϼ��� : ");
//	for(i=0; i<len; i++){
//		scanf("%d",&arr[i]);
//	}
//	sort(arr, len);
//	show(arr, len);
//
//}
////3,4��
//typedef struct student{
//	char name[20];
//	int num;
//}Student;
//
//int getNum(char *name, Student *st){
//	//char str[20];
//	int i;
//
//	for(i=0; i<20; i++){
//		if(strcmp(name, st[i].name) == 0){
//			printf("%d���Դϴ�.\n", st[i].num);
//		}
//	}
//}
//
//void func9(){
//	int i;
//	char str[20];
//	Student stArr[20] = {
//		{"������"},
//		{"������"},
//		{"������"},
//		{"�ڴ��"},
//		{"����ȣ"},
//		{"���"},
//		{"������"},
//		{"������"},
//		{"�̰���"},
//		{"�̹�ö"},
//		{"�����"},
//		{"������"},
//		{"������"},
//		{"������"},
//		{"������"},
//		{"���ƶ�"},
//		{"�ֽ���"},
//		{"�ѹΰ�"},
//		{"�Ѽ���"},
//		{"ȫ����"}
//	};
//
//	for(i=0; i<20; i++){
//		printf("%s�� ������ �Է��ϼ��� : ", stArr[i].name);
//		scanf("%d", &stArr[i].num);
//	}
//
//	printf("������ �˰� ���� �л��� �̸��� �Է��ϼ��� : ");
//	scanf("%s", str);
//
//	getNum(str, stArr);
//
//
//}
//int main(){
//
//	func9();
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int stNum=0;//�л����� ǥ���ϱ� ���� �ε���

int isRun = 1;
static int finLen=3;

typedef struct student{
	char name[20];
	int kor;
	int	eng;
	int	math;
	double avg;
}Student;

typedef struct {
	char dest_name[20];
	int dest_kor;
	int dest_eng;
	int dest_math;
	double dest_avg;
}DestStudent;

//1��
void stSave(Student *st){
	
	char check;
	int i;

	printf("�̸��� �Է��ϼ��� : ");
	scanf(" %s", st[stNum].name);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &st[stNum].kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &st[stNum].eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &st[stNum].math);
	st[stNum].avg = (st[stNum].kor+st[stNum].eng+st[stNum].math)/3.0;
	
	//�������� ó��
	for(i=0; i<stNum; i++){
		if(strcmp(st[i].name, st[stNum].name)==0){
			printf("�̹� ���� �̸��� �����մϴ�. ���������̽ø� y, �ƴ϶�� n�� �����ּ��� : ");
			scanf(" %c", &check);
			if(check == 'y'){
				continue;
			}else if(check == 'n'){
				printf("������ �̸��� �Է��ϼ��� : ");
				scanf("%s", st[stNum].name);
			}
		}
	}
	
	stNum++;
	//finLen+=3;
	//st = (Student*)realloc(st, sizeof(Student) * finLen);
	
	//len++;
	//finLen++;
	
	//plusMemory(st,len);
	
}
//2��
void name_subSelect(Student *st){
	int i;
	char nameTmp[20];
	char classTmp[20];

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", nameTmp);
	printf("������ �Է��ϼ��� : ");
	scanf("%s", classTmp);

	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].kor);
		}
		else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].eng);
		}else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].math);
		}
	}
}
//3��
void stNumFind(Student *st){
	int input;
	printf("�� ��° �л��� ������ ����Ͻðڽ��ϱ�? : ");
	scanf("%d", &input);
	printf("%s\n����: %d\n����: %d\n����: %d\n���: %.3f\n", st[input-1].name, st[input-1].kor, st[input-1].eng, st[input-1].math, st[input-1].avg);
}
//4��
void nameSelect(Student *st){
	int i;
	char nameTmp[20];

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s",nameTmp);
	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			printf("%s\n����: %d\n����: %d\n����: %d\n���: %.3f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].avg);
		}
	}
}
//5��
void getStNum(){
	printf("���� �Էµ� �л��� ���� %d�� �Դϴ�.\n", stNum);
}
//6��
void printAll(Student *st){
	int i;
	for(i=0; i<stNum; i++){
		printf("%s\n����: %d\n����: %d\n����: %d\n���: %.3f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].avg);
	}
}
//7��
void gradePrint(Student *st, DestStudent *stDest){
	int i,j;
	DestStudent stTemp;
	//�������� ��Ÿ�� ����ü �迭�� ���纻���� �������
	for(i=0; i<stNum; i++){
		strcpy(stDest[i].dest_name, st[i].name);
		stDest[i].dest_kor = st[i].kor;
		stDest[i].dest_eng = st[i].eng;
		stDest[i].dest_math = st[i].math;
		stDest[i].dest_avg = st[i].avg;
	}

	//������ ����
	for(i=0; i<stNum; i++){
		for(j=0; j<stNum; j++){
			if(stDest[i].dest_avg >= stDest[j].dest_avg){
				stTemp = stDest[i];
				stDest[i] = stDest[j];
				stDest[j] = stTemp;
			}
		}
	}
	//������ ����
	for(i=0; i<stNum; i++){
		printf("%s\n����: %d\n����: %d\n����: %d\n���: %.3f\n", stDest[i].dest_name, stDest[i].dest_kor, stDest[i].dest_eng, stDest[i].dest_math, stDest[i].dest_avg);
	}
}
//8��
void modifySt(Student *st){
	int i;
	char nameTmp[20];

	printf("������ ������ �л��� �̸��� �Է��ϼ��� : ");
	scanf("%s",nameTmp);
	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			printf("������ �̸��� �Է��ϼ��� : ");
			scanf("%s", st[i].name);
			printf("������ ���� ������ �Է��ϼ��� : ");
			scanf("%d", &st[i].kor);
			printf("������ ���� ������ �Է��ϼ��� : ");
			scanf("%d", &st[i].eng);
			printf("������ ���� ������ �Է��ϼ��� : ");
			scanf("%d", &st[i].math);
			st[i].avg = (st[i].kor+st[i].eng+st[i].math)/3.0;
		}
	}
}
//9��
void deleteSt(Student *st){
	int i,j;
	char nameTmp[20];

	printf("������ ������ �л��� �̸��� �Է��ϼ��� : ");
	scanf("%s",nameTmp);

	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			for(j=i; j<stNum; j++){
				st[j] = st[j+1];
			}
			stNum--;
			printf("�����Ǿ����ϴ�.\n");
		}
		else{
			break;
		}
	}
	
}
//10��
void Save_Load(Student *st){
	int i;
	char check;
	printf("�޸��忡 �л� ������ �����Ͻ÷��� w, �ҷ����÷��� r�� �����ּ��� : ");
	scanf(" %c", &check);
	if(check=='w'){
		FILE *wSrc = fopen("wSrc.txt", "wt");
		for(i=0; i<stNum; i++){
			fprintf(wSrc,"%s %d %d %d %.3f\n",st[i].name,st[i].kor,st[i].eng,st[i].math,st[i].avg);
		}
		fclose(wSrc);
		
	}else if(check=='r'){
		FILE *rSrc = fopen("wSrc.txt", "rt");
		stNum = 0;

		for(i=0; i<20; i++){
			fscanf(rSrc,"%s %d %d %d %lf\n",&st[i].name,&st[i].kor,&st[i].eng,&st[i].math, &st[i].avg);
			stNum++;
			//finLen++;
			if (feof(rSrc) != 0)
			{
				break;
			}
		}
		fclose(rSrc);

	}
}
//����
void quit(){
	printf("���α׷��� �����մϴ�.\n");
	isRun = 0;
}
//�޴����� ����
void wrongMenu(){
	printf("�޴��� ��ȣ�� �ٽ� �Է��ϼ���. \n");
}





int main(){
	
	char menu;
	
	Student *st = (Student*)malloc(sizeof(Student)*finLen);
	DestStudent *stDest = (DestStudent*)malloc(sizeof(Student)*finLen);
	
	
	while(isRun){
		printf(">>�޴� ��ȣ�� �Է��ϼ��� : ");
		scanf(" %c", &menu);
		switch(menu){
		case '1':
			finLen++;
			st = (Student*)realloc(st, sizeof(Student) * finLen);
			stSave(st);
			break;
		case '2':
			name_subSelect(st);
			break;
		case '3':
			stNumFind(st);
			break;
		case '4':
			nameSelect(st);
			break;
		case '5':
			getStNum();
			break;
		case '6':
			printAll(st);
			break;
		case '7':
			finLen++;
			stDest = (DestStudent*)realloc(stDest, sizeof(Student) * finLen);
			gradePrint(st,stDest);
			break;
		case '8':
			modifySt(st);
			break;
		case '9':
			
			deleteSt(st);
			break;
		case '0':
			st = (Student*)realloc(st, sizeof(Student) * finLen);
			Save_Load(st);
			break;
		case 'q':
			quit();
			free(st);
			break;
		default:
			wrongMenu();
			break;
		}
	}
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int stNum=0;
//
//typedef struct student{
//	char name[20];
//	int kor;
//	int	eng;
//	int	math;
//	double avg;
//}Student;
//
//Student *st;
//Student *stDest;
//
////1��
//void stSave(Student *st,int len){
//	char check;
//	int i;
//	st = (Student*)realloc((void*)st, sizeof(Student) * len);
//
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf(" %s", st[stNum].name);
//	printf("���� ������ �Է��ϼ��� : ");
//	scanf("%d", &st[stNum].kor);
//	printf("���� ������ �Է��ϼ��� : ");
//	scanf("%d", &st[stNum].eng);
//	printf("���� ������ �Է��ϼ��� : ");
//	scanf("%d", &st[stNum].math);
//	st[stNum].avg = (st[stNum].kor+st[stNum].eng+st[stNum].math)/3.0;
//
//	//�������� ó��
//	for(i=0; i<stNum; i++){
//		if(strcmp(st[i].name, st[stNum].name)==0){
//			printf("�̹� ���� �̸��� �����մϴ�. ���������̽ø� y, �ƴ϶�� n�� �����ּ��� : ");
//			scanf(" %c", &check);
//			if(check == 'y'){
//				continue;
//			}else if(check == 'n'){
//				printf("������ �̸��� �Է��ϼ��� : ");
//				scanf("%s", st[stNum].name);
//			}
//		}
//	}
//
//	stNum++;
//	len++;
//}
////2��
//void name_subSelect(Student *st){
//	int i;
//	char nameTmp[20];
//	char classTmp[20];
//
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf("%s", nameTmp);
//	printf("������ �Է��ϼ��� : ");
//	scanf("%s", classTmp);
//
//	for(i=0; i<stNum;i++){
//		if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
//			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].kor);
//		}
//		else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
//			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].eng);
//		}else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"����")==0){
//			printf("%s�� ���� ������ %d�� �Դϴ�.\n",st[i].name, st[i].math);
//		}
//	}
//}
////3��
//void stNumFind(Student *st){
//	int input;
//	printf("�� ��° �л��� ������ ����Ͻðڽ��ϱ�? : ");
//	scanf("%d", &input);
//	printf("%s\n����: %d\n����: %d\n����: %d\n���: %.3f\n", st[input-1].name, st[input-1].kor, st[input-1].eng, st[input-1].math, st[input-1].avg);
//}
////4��
//void nameSelect(Student *st);
////5��
//void getStNum();
////6��
//void printAll(Student *st);
////7��
//void gradePrint(Student *st, Student *stDest);
////8��
//void modifySt(Student *st);
////9��
//void deleteSt(Student *st);
////10��
//void Save_Load(Student *st);
////����
//void quit();
////�߸��� �޴����� << menuSelect �� �־��ֱ�
//void wrongMenu();
//
//
////�޴�����
//void menuSelect(){
//	char menu;
//	int isRun=1;
//	int len=1;
//
//	st =  (Student*)malloc(sizeof(Student)*len);
//
//	while(isRun){
//		printf(">>�޴� ��ȣ�� �Է��ϼ��� : ");
//		scanf(" %c", &menu);
//		switch(menu){
//		case '1':
//			stSave(st,len);
//			break;
//		case '2':
//			name_subSelect(st);
//			break;
//		case '3':
//			stNumFind(st);
//			break;
//		/*case '4':
//			nameSelect(st);
//			break;
//		case '5':
//			getStNum();
//			break;
//		case '6':
//			printAll(st);
//			break;
//		case '7':
//			gradePrint(st,stDest);
//			break;
//		case '8':
//			modifySt(st);
//			break;
//		case '9':
//			
//			deleteSt(st);
//			break;
//		case '0':
//			Save_Load(st);
//			break;
//		case 'q':
//			quit();
//			break;
//		default:
//			wrongMenu();
//			break;*/
//		}
//	}
//}
//
//
//int main(){
//	menuSelect();
//	return 0;
//}
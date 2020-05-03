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
////1번
//void stSave(Student *st,int len){
//	char check;
//	int i;
//	st = (Student*)realloc((void*)st, sizeof(Student) * len);
//
//	printf("이름을 입력하세요 : ");
//	scanf(" %s", st[stNum].name);
//	printf("국어 성적을 입력하세요 : ");
//	scanf("%d", &st[stNum].kor);
//	printf("영어 성적을 입력하세요 : ");
//	scanf("%d", &st[stNum].eng);
//	printf("수학 성적을 입력하세요 : ");
//	scanf("%d", &st[stNum].math);
//	st[stNum].avg = (st[stNum].kor+st[stNum].eng+st[stNum].math)/3.0;
//
//	//동명이인 처리
//	for(i=0; i<stNum; i++){
//		if(strcmp(st[i].name, st[stNum].name)==0){
//			printf("이미 같은 이름이 존재합니다. 동명이인이시면 y, 아니라면 n을 눌러주세요 : ");
//			scanf(" %c", &check);
//			if(check == 'y'){
//				continue;
//			}else if(check == 'n'){
//				printf("수정할 이름을 입력하세요 : ");
//				scanf("%s", st[stNum].name);
//			}
//		}
//	}
//
//	stNum++;
//	len++;
//}
////2번
//void name_subSelect(Student *st){
//	int i;
//	char nameTmp[20];
//	char classTmp[20];
//
//	printf("이름을 입력하세요 : ");
//	scanf("%s", nameTmp);
//	printf("과목을 입력하세요 : ");
//	scanf("%s", classTmp);
//
//	for(i=0; i<stNum;i++){
//		if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"국어")==0){
//			printf("%s의 국어 성적은 %d점 입니다.\n",st[i].name, st[i].kor);
//		}
//		else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"영어")==0){
//			printf("%s의 영어 성적은 %d점 입니다.\n",st[i].name, st[i].eng);
//		}else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"수학")==0){
//			printf("%s의 수학 성적은 %d점 입니다.\n",st[i].name, st[i].math);
//		}
//	}
//}
////3번
//void stNumFind(Student *st){
//	int input;
//	printf("몇 번째 학생의 정보를 출력하시겠습니까? : ");
//	scanf("%d", &input);
//	printf("%s\n국어: %d\n영어: %d\n수학: %d\n평균: %.3f\n", st[input-1].name, st[input-1].kor, st[input-1].eng, st[input-1].math, st[input-1].avg);
//}
////4번
//void nameSelect(Student *st);
////5번
//void getStNum();
////6번
//void printAll(Student *st);
////7번
//void gradePrint(Student *st, Student *stDest);
////8번
//void modifySt(Student *st);
////9번
//void deleteSt(Student *st);
////10번
//void Save_Load(Student *st);
////종료
//void quit();
////잘못된 메뉴선택 << menuSelect 에 넣어주기
//void wrongMenu();
//
//
////메뉴선택
//void menuSelect(){
//	char menu;
//	int isRun=1;
//	int len=1;
//
//	st =  (Student*)malloc(sizeof(Student)*len);
//
//	while(isRun){
//		printf(">>메뉴 번호를 입력하세요 : ");
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
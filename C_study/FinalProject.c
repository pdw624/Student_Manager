#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int stNum=0;//학생수를 표시하기 위한 인덱스

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

//1번
void stSave(Student *st){
	
	char check;
	int i;

	printf("이름을 입력하세요 : ");
	scanf(" %s", st[stNum].name);
	printf("국어 성적을 입력하세요 : ");
	scanf("%d", &st[stNum].kor);
	printf("영어 성적을 입력하세요 : ");
	scanf("%d", &st[stNum].eng);
	printf("수학 성적을 입력하세요 : ");
	scanf("%d", &st[stNum].math);
	st[stNum].avg = (st[stNum].kor+st[stNum].eng+st[stNum].math)/3.0;
	
	//동명이인 처리
	for(i=0; i<stNum; i++){
		if(strcmp(st[i].name, st[stNum].name)==0){
			printf("이미 같은 이름이 존재합니다. 동명이인이시면 y, 아니라면 n을 눌러주세요 : ");
			scanf(" %c", &check);
			if(check == 'y'){
				continue;
			}else if(check == 'n'){
				printf("수정할 이름을 입력하세요 : ");
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
//2번
void name_subSelect(Student *st){
	int i;
	char nameTmp[20];
	char classTmp[20];

	printf("이름을 입력하세요 : ");
	scanf("%s", nameTmp);
	printf("과목을 입력하세요 : ");
	scanf("%s", classTmp);

	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"국어")==0){
			printf("%s의 국어 성적은 %d점 입니다.\n",st[i].name, st[i].kor);
		}
		else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"영어")==0){
			printf("%s의 영어 성적은 %d점 입니다.\n",st[i].name, st[i].eng);
		}else if(strcmp(nameTmp,st[i].name)==0 && strcmp(classTmp ,"수학")==0){
			printf("%s의 수학 성적은 %d점 입니다.\n",st[i].name, st[i].math);
		}
	}
}
//3번
void stNumFind(Student *st){
	int input;
	printf("몇 번째 학생의 정보를 출력하시겠습니까? : ");
	scanf("%d", &input);
	printf("%s\n국어: %d\n영어: %d\n수학: %d\n평균: %.3f\n", st[input-1].name, st[input-1].kor, st[input-1].eng, st[input-1].math, st[input-1].avg);
}
//4번
void nameSelect(Student *st){
	int i;
	char nameTmp[20];

	printf("이름을 입력하세요 : ");
	scanf("%s",nameTmp);
	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			printf("%s\n국어: %d\n영어: %d\n수학: %d\n평균: %.3f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].avg);
		}
	}
}
//5번
void getStNum(){
	printf("현재 입력된 학생의 수는 %d명 입니다.\n", stNum);
}
//6번
void printAll(Student *st){
	int i;
	for(i=0; i<stNum; i++){
		printf("%s\n국어: %d\n영어: %d\n수학: %d\n평균: %.3f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].avg);
	}
}
//7번
void gradePrint(Student *st, DestStudent *stDest){
	int i,j;
	DestStudent stTemp;
	//성적순을 나타낼 구조체 배열을 복사본으로 만들어줌
	for(i=0; i<stNum; i++){
		strcpy(stDest[i].dest_name, st[i].name);
		stDest[i].dest_kor = st[i].kor;
		stDest[i].dest_eng = st[i].eng;
		stDest[i].dest_math = st[i].math;
		stDest[i].dest_avg = st[i].avg;
	}

	//성적순 설정
	for(i=0; i<stNum; i++){
		for(j=0; j<stNum; j++){
			if(stDest[i].dest_avg >= stDest[j].dest_avg){
				stTemp = stDest[i];
				stDest[i] = stDest[j];
				stDest[j] = stTemp;
			}
		}
	}
	//성적순 나열
	for(i=0; i<stNum; i++){
		printf("%s\n국어: %d\n영어: %d\n수학: %d\n평균: %.3f\n", stDest[i].dest_name, stDest[i].dest_kor, stDest[i].dest_eng, stDest[i].dest_math, stDest[i].dest_avg);
	}
}
//8번
void modifySt(Student *st){
	int i;
	char nameTmp[20];

	printf("정보를 수정할 학생의 이름을 입력하세요 : ");
	scanf("%s",nameTmp);
	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			printf("수정할 이름을 입력하세요 : ");
			scanf("%s", st[i].name);
			printf("수정할 국어 성적을 입력하세요 : ");
			scanf("%d", &st[i].kor);
			printf("수정할 영어 성적을 입력하세요 : ");
			scanf("%d", &st[i].eng);
			printf("수정할 수학 성적을 입력하세요 : ");
			scanf("%d", &st[i].math);
			st[i].avg = (st[i].kor+st[i].eng+st[i].math)/3.0;
		}
	}
}
//9번
void deleteSt(Student *st){
	int i,j;
	char nameTmp[20];

	printf("정보를 삭제할 학생의 이름을 입력하세요 : ");
	scanf("%s",nameTmp);

	for(i=0; i<stNum;i++){
		if(strcmp(nameTmp,st[i].name)==0){
			for(j=i; j<stNum; j++){
				st[j] = st[j+1];
			}
			stNum--;
			printf("삭제되었습니다.\n");
		}
		else{
			break;
		}
	}
	
}
//10번
void Save_Load(Student *st){
	int i;
	char check;
	printf("메모장에 학생 정보를 저장하시려면 w, 불러오시려면 r를 눌러주세요 : ");
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
//종료
void quit(){
	printf("프로그램을 종료합니다.\n");
	isRun = 0;
}
//메뉴선택 오류
void wrongMenu(){
	printf("메뉴의 번호를 다시 입력하세요. \n");
}





int main(){
	
	char menu;
	
	Student *st = (Student*)malloc(sizeof(Student)*finLen);
	DestStudent *stDest = (DestStudent*)malloc(sizeof(Student)*finLen);
	
	
	while(isRun){
		printf(">>메뉴 번호를 입력하세요 : ");
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
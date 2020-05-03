//#include <stdio.h>
//#include <stdlib.h>
//#define SQUARE(X) X*X
//#define PI 3.14
//#define PRODUCT(X,Y) ((X)*(Y))
//#define CIRCLE_AREA(R) (PRODUCT((R),(R))*PI)
//#define HIT_NUM 5
////파일입력 문자
//int p505(){
//	FILE * fp = fopen("data.txt", "wt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputc('A',fp);
//	fputc('B',fp);
//	fputc('C',fp);
//	fclose(fp);
//
//	return 0;
//}
////파일출력 문자
//int p509(){
//	int ch,i;
//	FILE * fp = fopen("data.txt", "rt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//	for(i=0; i<3;i++){
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//	}
//	fclose(fp);
//
//	return 0;
//}
////파일입력 문자열
//int p515_1(){
//	FILE * fp = fopen("simple.txt", "wt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputc('A',fp);
//	fputc('B',fp);
//	fputs("My name is Hong \n", fp);
//	fputs("Your name is Yoon \n", fp);
//	fclose(fp);
//}
////파일출력 문자열
//int p515_2(){
//	char str[30];
//	int ch;
//	FILE * fp = fopen("simple.txt", "rt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//
//	fclose(fp);
//}
//
//int p517(){
//	FILE * src = fopen("src.txt", "rt");
//	FILE * des = fopen("des.txt", "wt");
//	int ch;
//
//	if(src==NULL || des==NULL){
//		puts("파일 오픈 실패!");
//		return -1;
//	}
//	while((ch=fgetc(src))!=EOF){
//		fputc(ch,des);
//	}
//
//	if(feof(src)!=0){
//		puts("파일 복사 완료!");
//	}else{
//		puts("파일 복사 실패!");
//	}
//
//	fclose(src);
//	fclose(des);
//}
//
//int p518(){
//	FILE * src = fopen("src.txt", "rt");
//	FILE * des = fopen("des.txt", "wt");
//	char str[20];
//
//	if(src==NULL || des==NULL){
//		puts("파일 오픈 실패!");
//		return -1;
//	}
//	while(fgets(str, sizeof(str), src) != NULL){
//		fputs(str,des);
//	}
//
//	if(feof(src)!=0){
//		puts("파일 복사 완료!");
//	}else{
//		puts("파일 복사 실패!");
//	}
//
//	fclose(src);
//	fclose(des);
//}
//
//int p520(){
//	FILE * src = fopen("src.bin", "rb");
//	FILE * des = fopen("des.bin", "wb");
//	char buf[20];
//	int readCnt;
//	int buf_temp[7] = {1,2,3,4,5,6,7};
//
//	if(src == NULL){
//		src = fopen("src.bin", "wb");
//
//		//int buf_temp[7] = {1,2,3,4,5,6,7};
//		fwrite((void*)buf_temp, sizeof(int), 7, src);
//		fclose(src);
//		src = fopen("src.bin","rb");
//	}
//
//	if(src==NULL || des==NULL){
//		puts("파일 오픈 실패!");
//		return -1;
//	}
//	while(1){
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//
//		if(readCnt<sizeof(buf)){
//			if(feof(src)!=0){
//				fwrite((void*)buf, 1,readCnt, des);
//				puts("파일복사 완료");
//				break;
//			}else{
//				puts("파일복사 실패");
//			}
//			break;
//		}
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//	fclose(src);
//	fclose(des);
//}
//int p522_1(){
//	FILE * fp = fopen("mystory.txt", "wt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputs("#이름 : 윤성우 \n", fp);
//	fputs("#주민번호 : 900208-1012589 \n", fp);
//	fputs("#전화번호 : 010-1111-2222 \n", fp);
//	fputs("#즐겨먹는 음식 : 짬뽕, 탕수육 \n", fp);
//	fputs("#취미 : 축구 \n", fp);
//	fclose(fp);
//}
//int p522_3(){
//	char str[30];
//	int ch;
//	int i;
//	FILE * fp = fopen("mystory.txt", "rt");
//	if(fp==NULL){
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//
//	for(i=0; i<6; i++){
//		fgets(str, sizeof(str), fp);
//		printf("%s", str);
//	}
//
//	fclose(fp);
//}
//typedef struct fren{
//		char name[10];
//		char sex;
//		int age;
//}Friend;
//int p526(){
//	FILE *fp;
//	Friend myfren1;
//	Friend myfren2;
//
//	/*** file write ***/
//	fp = fopen("frind.bin", "wb");
//	printf("이름, 성별, 나이 순 입력 : ");
//	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
//	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//	/*** file read ***/
//	fp = fopen("frind.bin", "rb");
//	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
//	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
//	fclose(fp);
//}
//int p529(){
//	/*파일 생성*/
//	FILE *fp = fopen("text.txt", "wt");
//	fputs("123456789", fp);
//	fclose(fp);
//	/*파일 개방*/
//	fp = fopen("text.txt","rt");
//	/*SEEK_END test*/
//	fseek(fp, -2, SEEK_END);
//	putchar(fgetc(fp));
//	/*SEEK_SET test*/
//	fseek(fp, 2, SEEK_SET);
//	putchar(fgetc(fp));
//	/*SEEK_CUR test*/
//	fseek(fp, 2, SEEK_CUR);
//	putchar(fgetc(fp));
//
//	fclose(fp);
//}
//int p531(){
//	long fpos;
//	int i;
//
//	/*파일 생성*/
//	FILE *fp = fopen("text.txt", "wt");
//	fputs("1234-", fp);
//	fclose(fp);
//	/*파일 개방*/
//	fp = fopen("text.txt", "rt");
//
//	for(i=0; i<4; i++){
//		putchar(fgetc(fp));
//		fpos=ftell(fp);
//		fseek(fp, -1, SEEK_END);
//		putchar(fgetc(fp));
//		fseek(fp,fpos,SEEK_SET);
//	}
//	fclose(fp);
//}
////메모리 동적할당
//void p546(){
//	int *ptr1 = (int *)malloc(sizeof(int));
//	int *ptr2 = (int *)malloc(sizeof(int)*7);
//	int i;
//
//	*ptr1 = 20;
//	for(i=0; i<7; i++){
//		ptr2[i]=i+1;
//	}
//	printf("%d \n", *ptr1);
//	for(i=0; i<7; i++){
//		printf("%d ", ptr2[i]);
//	}
//	free(ptr1);
//	free(ptr2);
//}
//void func1(){
//	int *ptr = (int *)malloc(sizeof(int)*5);
//	int i;
//	int len = 5;
//	for(i=0;i<len;i++){
//		ptr[i] = i+1;
//	}
//	for(i=0;i<len;i++){
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//	ptr = (int *)realloc(ptr, sizeof(int)*len*2);
//
//	for(i=len; i<len*2; i++){
//		ptr[i] = i+1;
//	}
//	for(i=0; i<len*2; i++){
//		printf("%d ", ptr[i]);
//	}
//	free(ptr);
//}
////구조체 변수 메모리 할당
//typedef struct person
//{
//	char name[20];
//	int age;
//}Person;
//void func2(){
//	
//	Person *p1= (Person*)malloc(sizeof(Person));
//	scanf("%s %d", p1->name, &p1->age);
//
//	printf("%s %d",p1->name, p1->age);
//	free(p1);
//
//}
//void func3(){
//	Person *p1= (Person*)malloc(sizeof(Person));
//	Person *p2= (Person*)malloc(sizeof(Person));
//	Person *p3= (Person*)malloc(sizeof(Person));
//
//	scanf("%s %d", p1->name, &p1->age);
//	scanf("%s %d", p2->name, &p2->age);
//	scanf("%s %d", p3->name, &p3->age);
//
//	printf("%s %d",p1->name, p1->age);
//	printf("%s %d",p2->name, p2->age);
//	printf("%s %d \n",p3->name, p3->age);
//
//	free(p1);
//	free(p2);
//	free(p3);
//}
////메모리 3배씩 늘어남 while문 이용 , 입력 다 받고 출력, 저장된 데이터가 10개면 while 탈출 후 출력
//void func4(){
//	int unit = 3;
//	int index = 0;
//	int count = 1;
//	int len = unit * count;
//	int i;
//
//	Person *p1= (Person*)malloc(sizeof(Person)*len);
//
//	while(1){
//		
//		if(index > len -1){//메모리가 부족할 때 3씩 증가시키기 위한 구간
//			count++;
//			len = unit*count;//길이가 [3*2=6 >> 3*3=9 >> 3*4=12] : 3씩 증가
//			p1 = (Person *)realloc(p1, sizeof(Person)*len);//p1 의 메모리가 3만큼 증가
//		}
//		scanf("%s %d", p1[index].name, &p1[index].age);
//		index++;
//		
//		if(index == 10 ){
//			break;
//		}
//	}
//	for(i=0; i<10; i++){
//		printf("이름 : %s, 나이 %d \n", p1[i].name, p1[i].age);
//	}
//	free(p1);
//}
//
//void p560(){
//	int num = 20;
//	/*정상적 결과 출력*/
//	printf("Square of num : %d \n", SQUARE(num));
//	printf("Square of -5 : %d \n", SQUARE(-5));
//	printf("Square of 2.5 : %g \n", SQUARE(2.5));
//	/*비정상적 결과 출력*/
//	printf("Square of 3+2 : %d \n", SQUARE(3+2));
//}
//void p567(){
//	double rad = 2.1;
//	printf("반지름 %g인 원의 넓이 : %g \n", rad, CIRCLE_AREA(rad));
//}
//void p569(){
//#if HIT_NUM==5
//	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
//#else
//	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
//#endif
//}
//int main(){
//	p569();
//}
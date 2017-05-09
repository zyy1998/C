#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
typedef struct staf
{
	int num;           //职工号 
	char name[MAXSIZE];
	char sex[3];          //男m,女w
	char age[7];      //下标从0开始
	char workday [7];
	char edu_background[MAXSIZE];
	char job_title[MAXSIZE]; //职务
	char address[MAXSIZE]; //住址
	char phone_num[12];//电话号码 	
} staff[MAXSIZE]; 
staff s;
int s_count=0;    //职工总数 
void Menu(FILE *fp); 
void Display(FILE *fp);
int main()
{
	FILE *fp;
	fp=fopen("d:\\Staff_Management.txt","r+");
	if(fp==NULL) 
	{
	   printf("打开文件失败！");
	   exit(0);
    }
    Menu(fp);
   // Display(fp);
    
	return 0;
 } 
 void Menu(FILE *fp)
 {
 	int choice;
 printf("          欢迎进入职工管理系统        \n") ;
 printf ("1.录入职工信息             ") ;
 printf("2.浏览职工信息  \n") ; 
 printf ("3.查询职工信息             ") ;
 printf("4.删除职工信息\n") ;
 printf ("5.添加职工信息             ") ;
 printf ("6.修改职工信息\n") ;
 printf ("7.退出\n") ; 
 printf ("请选择想要进行的操作(1-7) :" ) ;
	scanf("%d",&choice) ;
	
    switch(choice) 
    {	case 1 : 
	      // Initial();
		  break ; 
		case 2 :
		  Display(fp);
		  break ;
		case 3 :
		 //  Serach() ;
		  break ;
		case 4 :
		//  Del();
		  break;
		case 5 :
		 //  Add();
		  break ;	
		case 6 :
		 //  void  modify();
		   break ;
		case 7 :  
		    break;
    } 
}
void Display(FILE *fp)
{
	int i=0;
	char buf[200];
	while(feof(fp)==0)
    {
      sscanf(fgets(buf,200,fp),"%d%s%s%s%s%s%s%s%s",&s[i].num,s[i].name,s[i].sex,s[i].age,s[i].workday,s[i].edu_background,s[i].job_title,s[i].address,s[i].phone_num);
      i++;
      s_count++;
	}
	
	printf("职工号\t姓名\t性别\t出生年月\t工作年月\t学历\t职务\t住址\t电话号码\n");
    for(i=0;i<s_count;i++)
	 printf("%d\t%s\t%s\t%s\t\t%s\t\t%s\t%s\t%s\t%s\n",s[i].num,s[i].name,s[i].sex,s[i].age,s[i].workday,s[i].edu_background,s[i].job_title,s[i].address,s[i].phone_num);
}

 

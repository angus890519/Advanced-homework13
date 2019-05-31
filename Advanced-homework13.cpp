/* 計算機概論實務-進階練習作業-作業13 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫 
struct company   //定義結構體 
{ 
    char name[30],employee[10];
    int quota;
}; 

struct individual //定義結構體 
{
    char name[10],tel[12];
    int quota;
};

union client     //定義結構體 
{
    struct company comp;
    struct individual indiv;
}; 

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業13\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:40\n");
	printf("-----------------------------------\n");
   int choice;
   union client c;

   printf("請選擇1.企業團體意外保險,2.個人意外保險: ");
   scanf(" %d", &choice);//輸入 
   if (choice==1)
   {
      printf("請輸入企業名稱: ");
      scanf(" %s", c.comp.name);//輸入 
      printf("請輸入員工姓名: ");
      scanf(" %s", c.comp.employee);//輸入
      printf("請輸入投保金額: ");
      scanf(" %d", &(c.comp.quota)); //輸入
      //顯示出來 
      printf("企業名稱: %s\n", c.comp.name);
      printf("員工姓名: %s\n", c.comp.employee);
      printf("投保金額: %d\n", c.comp.quota); 
   }
   else if (choice==2)
   {
      printf("請輸入個人姓名: ");
      scanf(" %s", c.indiv.name);//輸入
      printf("請輸入個人電話: ");
      scanf(" %s", c.indiv.tel);//輸入
      printf("請輸入投保金額: ");
      scanf(" %d", &(c.indiv.quota));//輸入
      //顯示出來 
      printf("個人姓名: %s\n", c.indiv.name);
      printf("個人電話: %s\n", c.indiv.tel);
      printf("投保金額: %d\n", c.indiv.quota); 
   }
   else printf("輸入錯誤\n");
   system("pause");//暫停視窗 
   return 0;//回傳值 0 
}



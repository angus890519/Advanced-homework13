/* �p������׹��-�i���m�ߧ@�~-�@�~13 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
struct company   //�w�q���c�� 
{ 
    char name[30],employee[10];
    int quota;
}; 

struct individual //�w�q���c�� 
{
    char name[10],tel[12];
    int quota;
};

union client     //�w�q���c�� 
{
    struct company comp;
    struct individual indiv;
}; 

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~13\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:40\n");
	printf("-----------------------------------\n");
   int choice;
   union client c;

   printf("�п��1.���~����N�~�O�I,2.�ӤH�N�~�O�I: ");
   scanf(" %d", &choice);//��J 
   if (choice==1)
   {
      printf("�п�J���~�W��: ");
      scanf(" %s", c.comp.name);//��J 
      printf("�п�J���u�m�W: ");
      scanf(" %s", c.comp.employee);//��J
      printf("�п�J��O���B: ");
      scanf(" %d", &(c.comp.quota)); //��J
      //��ܥX�� 
      printf("���~�W��: %s\n", c.comp.name);
      printf("���u�m�W: %s\n", c.comp.employee);
      printf("��O���B: %d\n", c.comp.quota); 
   }
   else if (choice==2)
   {
      printf("�п�J�ӤH�m�W: ");
      scanf(" %s", c.indiv.name);//��J
      printf("�п�J�ӤH�q��: ");
      scanf(" %s", c.indiv.tel);//��J
      printf("�п�J��O���B: ");
      scanf(" %d", &(c.indiv.quota));//��J
      //��ܥX�� 
      printf("�ӤH�m�W: %s\n", c.indiv.name);
      printf("�ӤH�q��: %s\n", c.indiv.tel);
      printf("��O���B: %d\n", c.indiv.quota); 
   }
   else printf("��J���~\n");
   system("pause");//�Ȱ����� 
   return 0;//�^�ǭ� 0 
}



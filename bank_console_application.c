// bank-console-project.
//mini project using c console application 
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int opt,x=0;
struct acc{

char *name[40];
int age;
int  Date,month,year,account_num,amount;
int zipcode;
char *adress[40];
}que[40];

void transfer_amount()
{
    int acc_num,i,transfer_amount,j;
    printf("Enter your account no :");
    scanf("%d",&acc_num);

i=account_ckeck(acc_num);
printf("Enter the amount ");
scanf("%d",&transfer_amount);
printf("Enter Account no you choose to transfer:");
scanf("%d",&acc_num);
j=account_ckeck(acc_num);
if(i==j){
    system("cls");
     system("color 4");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tIdiot how can we transfer amount to the same account");
    for(int k=0;k<10;k++){
        delay(100000000);
        printf(".");
    }
    printf("\n\n\n\n\n\n\n\n");
    system("pause");
    menu();
}
if(que[i].amount>=transfer_amount){
que[i].amount-=transfer_amount;
que[j].amount+=transfer_amount;
system("cls");
printf("Amount tranfered sucessfully");
for(int k=0;k<10;k++){
    delay(100000000);
    printf(".");
}
printf("\n\n\n\n\n\n\n\n");
system("pause");
menu();
}
else {
        system("cls");
printf("Insufficent Funds in your account...");
for(int k=0;k<10;k++){
    delay(10000000);
    printf(".");
}
system("pause");
menu();
}


}
int account_ckeck(int num){
    int i;

    for(i=0;i<50;i++){
        if(que[i].account_num==num){
            return i;
            break;
        }
    }
    if(i==50){
            system("cls");
        printf("Error account not found\n\n\n\n\n\n\n\n\n");
        system("pause");
        transfer_amount();

    }


}
int check_duplicate(int acc_no,int temp)
{
    int i;
    for(i=0;i<50;i++){
            if(i==temp){
                i++;
            }
        if(que[i].account_num==acc_no){
            printf("sorry this account number already taken \n");
            printf("try another num:\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            new_acc();
        }
    }
    if(i==50){
        return 0;
    }

}
void change_details(int i)
{

    int change;
    printf("\n\n\n Enter your choice:");
   scanf("%d",&change);
   switch(change)
    {
        case 1:printf("Sorry can't change account NO\n\n\n");break;
        case 2:printf("Enter new name :");
                scanf("%s",que[i].name);
                printf("Name updated sucessfully:\n\n");break;
        case 3:printf("Enter date of birth:");
                   printf("Enter Date of Birth \n ");
                      printf("\tDate:");
                       scanf("%d",&que[i].Date);
                           printf("\tmonth:");
                             scanf("%d",&que[i].month);
                                printf("\tYear:");
                                    scanf("%d",&que[i].year);
               printf("Date of birth updated sucessfuLLy\n\n");break;
         case 4:printf("Enter new AGe:");
                   scanf("%d",&que[i].age);
                    printf("\n Age updated sucessfully:\n\n"); break;
         case 5:printf("Enter new adress");
                     scanf("%s",que[i].adress);
                             printf("adress updated sucessfully"); break;
         case 6:printf("Enter new Zip_Code");
                    scanf("%d",&que[i].zipcode);
                      printf("Zipcode updated sucessfully");break;




    }
}
void check(char a[],char b[])
{
    int i,choice;
    if(strcmp(a,b)==0){
        printf("login Sucessfully");
        for(i=0;i<7;i++){
            delay(100000000);
            printf(".");
        }
        menu();
    }
    else {
            system("cls");
            system("color c");
        printf("Wrong password!\n");
      printf("Try again");
      for(i=0;i<7;i++){
      delay(100000000);
      printf(".");
      }
      system("cls");
      main();
    }

}
void new_acc()
{
    int taken;
    system("cls");
    printf("Enter account no:  ");
    scanf("%d",&que[x].account_num);
    while(check_duplicate(que[x].account_num,x)){
        system("cls");
    }


   printf("Enter your name :  ");
   scanf("%s",que[x].name);
  printf("Enter Age: ");
  scanf("%d",&que[x].age);
  printf("Enter Date of Birth \n ");
  printf("\tDate:");
  scanf("%d",&que[x].Date);
  printf("\tmonth:");
  scanf("%d",&que[x].month);
  printf("\tYear:");
  scanf("%d",&que[x].year);
  printf("Enter adress:  ");
 scanf("%s",que[x].adress);
 printf("Enter Zipcode:");
 scanf("%d",&que[x].zipcode);
 system("cls");
 system("color A");
 printf("\tAccount created sucessfully ;\n");
 printf("\t\t\tplease note your account No:%d\n\n\n",que[x].account_num);
 printf("\nname is :%s\n\n\n",que[x].name);
 x++;
 system("pause");
menu();

}
void check_bal(){

int acc_num,i,depo;
    system("cls");
    printf("Enter yout account number:");
    scanf("%d",&acc_num);
    for(i=0;i<50;i++){

        if(acc_num==que[i].account_num){
            system("color E");
            printf("\n\n\n\n\n\n\n\t\t\t\t=========Account Balance is $$%d ===========",que[i].amount);
            system("pause");
            break;
        }
    }
    if(i==50){
        printf("\n\n\n\n\n\n\t\t\t\t Error account not fount");
        for(int j=0;j<10;j++){
            delay(100000000);
            printf(".");

        }
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        system("pause");
    }
    menu();




}
void update_details()
{
    int i;
    system("cls");
    int acc_num,change;
    printf("Enter your account number want to update: ");
    scanf("%d",&acc_num);
    for( i=0;i<50;i++){
       if(que[i].account_num==acc_num) {
        printf("\n1.Account No:%d",que[i].account_num);
        printf("\n2.Name:%s",que[i].name);
        printf("\n3.Date of Birth:%d-%d-%d",que[i].Date,que[i].month,que[i].year);
        printf("\n4.Age:%d",que[i].age);
        printf("\n5.Adress:%s",que[i].adress);
        printf("\n6.zipcode:%d",que[i].zipcode);
         printf("\n\n\n\t\t\t\t=========Account Balance is %d ===========",que[i].amount);
        break;
   }

    }
       if(i==50){
           system("cls");
            system("color A");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tERRor account not fount");
    for(i=0;i<10;i++){
     delay(100000000);
     printf(".");
    }
    menu();
       }
        change_details(i);
       system("pause");
    menu();


}

void deposite()
{
    int acc_num,i,depo;
    system("cls");
    printf("Enter yout account number:");
    scanf("%d",&acc_num);
    for(i=0;i<50;i++){

        if(acc_num==que[i].account_num){
            printf("Enter the amount you to deposite:");
            scanf("%d",&depo);
            que[i].amount+=depo;
            printf("amount Deposited ");
            for(int j;j<7;j++){
                delay(10000000);
                printf(".");
            }
            system("color E");
            printf("\n\n\n\n\n\n\n\t\t\t\t=========Account Balance is $$%d ===========",que[i].amount);
            system("pause");
            break;
        }
    }
    if(i==50){
        printf("\n\n\n\n\n\n\t\t\t\tError account not fount ");
        for(int j=0;j<10;j++){
            delay(100000000);
            printf(".");

        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        system("pause");
    }
    menu();
}
void transfer();
void close()
  {
      int i;
      system("cls");
      system("color A");
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tThanks for using\n  ");
      printf("\t\t\t\t\t\tproject Developed BY Bhargav Ram");
      for(i=0;i<15;i++){
        delay(100000000);
        printf(".");
      }
  exit(1);

  }
void menu(void)
  {
      system("cls");
      system("color 9");
      printf("\t\t\t1.Create Bank Account\n");
      printf("\t\t\t2.check Account Balance\n");
      printf("\t\t\t3.update Account Details\n");
      printf("\t\t\t4.deposit Amount\n");
      printf("\t\t\t5.transfer Amount\n");
      printf("\t\t\t6.Quit..\n");
      printf("\n\t\t\tEnter option:  ");
      scanf("%d",&opt);
      switch(opt)
      {
          case 1:new_acc();break;
          case 2:check_bal();
          case 3:update_details();break;
          case 4:deposite();break;
          case 5:transfer_amount();break;
          case 6:close();break;
          default:menu();
      }

  }

int delay(int j)
{
int i,k;
for(i=0;i<=j;i++)
    k=i;

}
int main()
{

    char current[40],pass[40]="cupidlove";
    system("color F");
printf("\n\n\n\n\n\n\n\n\n\t\t\t Welocome to Cupid  bank enter password to continue:");
gets(current);
printf("\n\n\n");
check(current,pass);
}




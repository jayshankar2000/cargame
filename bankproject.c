
#include<stdio.h>
int list();
int totalamount=1000,amount,amo,tr;
void main()
{
   list();
}
clrscr();
int  list()
  getch();
{
    int ch;
    printf("\n 1.Diposite Amount: ");
    printf("\n 2.Withdrow amount: ");
    printf("\n 3.Transfer Amount: ");
    printf("\n 4. Check detail: ");
    printf("\n 5. Exit: ");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    return(ch);

}
void Diposite()
{
    printf("\n Enter your amount you want to diposite: ");
    scanf("%d",&amount);
    totalamount+=amount;
}
void withdraw()
{
    printf("\n Enter the amount you want to withdraw: ");
    scanf("%d",&amo);
    if(amo<=totalamount)
       totalamount-=amo;
       else
         printf("\n Less Amount withdraw is not possible: ");
}
void transfer()
{
  printf("\n Enter the amount you transfer: ")
  scanf("%d",&tr);
  if(tr<=totalamunt)
     totalamount-=tr;
  else
    printf("\n Less amount transfer is not possible: ");
}void check amount()
{
    printf("total amount=%d",totalamount);
    printf("")
}

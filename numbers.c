#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rnd;
struct Data
{
    int ival;
    char sval[20];
}D[15];
char* whatisit(int choice,int rnd)
{  
    switch(rnd)
    {   
        case 0 : if(choice==1)
                    return("UNIT");
                 else   
                    return("UNIT");
                 break;
        case 1 : if(choice==1)
                    return("THOUSAND");
                 else   
                    return("THOUSAND");
                 break;
        case 2 : if(choice==1)
                    return("LAKH");
                 else   
                    return("MILLION");  
                 break;
        case 3 : if(choice==1)
                    return("CORE");
                 else   
                    return("BILLION");           
                 break;
         case 4 : if(choice==1)
                    return("ARAB");
                 else   
                    return("TRILLION");           
                 break;
         case 5 : if(choice==1)
                    return("KHARAB");
                 else   
                    return("QUADRILLION");           
                 break;
         case 6 : if(choice==1)
                    return("NEEL");
                 else   
                    return("SEXTRILLION");           
                 break;
         case 7 : if(choice==1)
                    return("PADMA");
                 else   
                    return("SEPTILLION");           
                 break;                                    
         case 8 : if(choice==1)
                    return("SHANKHA");
                 else   
                    return("OCTILLION");           
                 break;  
         case 9 : if(choice==1)
                    return("MAHASHANKA");
                 else   
                    return("NONILLION");           
                 break;           
    } 
}

void main()
{
    long n;
    int i,j,choice;
    char* final;
    char* op;
    rnd=0;
    while(choice!=3)
    {
        printf("1)INDIAN\n2)AMERICAN\n3)EXIT\n");
        scanf("%d",&choice);
        switch(choice)
            {
                case 1 :printf("Enter the Number\n");
                        scanf("%ld",&n);
                        i=n%1000;
                        if(i>0)
                        { 
                          strcpy(op,whatisit(choice,rnd));
                          D[rnd].ival=i;
                          strcpy(D[rnd].sval,op);
                            rnd++;
                        }
                        else
                             rnd++;
                        n/=1000;
                        while(n>0)
                        {
                            i=n%100;
                          if(i>0)
                            {
                              strcpy(op,whatisit(choice,rnd));
                              D[rnd].ival=i;
                          strcpy(D[rnd].sval,op);
                              rnd++;
                            }
                        else
                             rnd++;
                             n=n/100;
                        }
                        rnd--;
                        printf("___________________________________________________________________\n\n");
                        for(j=rnd;j>=0;j--)
                        {   if(D[j].ival>0)
                            printf("%d ",D[j].ival);
                             if(D[j].ival>0)
                             printf("%s ",D[j].sval);

                        }
                        printf("\n");
                        printf("____________________________________________________________________\n\n");
                        fflush(stdin);
                        rnd=0;
                        break;

                case 2 :printf("Enter the Number\n");
                        scanf("%ld",&n);
                        while(n>0)
                        {
                            i=n%1000;
                          if(i>0)
                            { strcpy(op,whatisit(choice,rnd));
                              D[rnd].ival=i;
                          strcpy(D[rnd].sval,op);
                              rnd++;
                            }
                        else
                             rnd++;
                             n=n/1000;
                        }
                         rnd--;
                        printf("___________________________________________________________________\n\n");
                        for(j=rnd;j>=0;j--)
                        {   if(D[j].ival>0)
                            printf("%d ",D[j].ival);
                             if(D[j].ival>0)
                             printf("%s ",D[j].sval);

                        }
                        printf("\n");
                        printf("____________________________________________________________________\n\n");
                        fflush(stdin);
                        rnd=0;
                        break;

                case 3 : exit;        
            
            }
    }
    
    return;
}
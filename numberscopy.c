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
                    return("SIXATRILLION");           
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

int rev(int x)
{   int sum,a,b;
    b=x;
sum=0;
    while(b>0)
    {
        a=b%10;
        sum=sum*10+a;
        b/=10;
    }
    return(sum);
}

char* toword(int x)
{
   char final[1000]="";
   int z,y;

   int cnt;
    if(x<=19)
    {
        switch(x)
        {
        case 1: strcat(final,"ONE "); 
                break;
        case 2: strcat(final,"TWO "); 
                break;        
        case 3: strcat(final,"THREE "); 
                break;    
        case 4: strcat(final,"FOUR "); 
                break;
        case 5: strcat(final,"FIVE "); 
                break;
        case 6: strcat(final,"SIX "); 
                break;
        case 7: strcat(final,"SEVEN "); 
                break;
        case 8: strcat(final,"EIGHT "); 
                break;
        case 9: strcat(final,"NINE "); 
                break;
        case 10: strcat(final,"TEN "); 
                break;  
        case 11: strcat(final,"ELEVEN "); 
                break;                                                                                               
        case 12: strcat(final,"TWELVE "); 
                break;
        case 13: strcat(final,"THIRTEEN "); 
                break;
        case 14: strcat(final,"FOURTEEN "); 
                break;
        case 15: strcat(final,"FIFTEEN "); 
                break;
        case 16: strcat(final,"SIXTEEN "); 
                break;
        case 17: strcat(final,"SEVENTEEN "); 
                break;
        case 18: strcat(final,"EIGHTEEN "); 
                break;
        case 19: strcat(final,"NINTEEN "); 
                break;

        }
        char* ret=final;
       return(ret);
    } 
        if(x<=99)
    {   cnt=1;
        z=rev(x);
       while(z>0)
        {
        y=z%10;
       
        switch(y)
        {
        case 1: if(cnt==1)
                    break;
                else
                     strcat(final,"ONE "); 
                break;
        case 2: if(cnt==1)
                    strcat(final,"TWENTY ");
                else 
                    strcat(final,"TWO "); 
                break;        
        case 3: if(cnt==1)
                    strcat(final,"THIRTY ");
                else 
                    strcat(final,"THREE "); 
                break;    
        case 4: if(cnt==1)
                    strcat(final,"FOURTY ");
                else 
                    strcat(final,"FOUR "); 
                break;
        case 5: if(cnt==1)
                    strcat(final,"FIFTY ");
                else 
                    strcat(final,"FIVE "); 
                break;
        case 6: if(cnt==1)
                    strcat(final,"SIXTY ");
                else 
                    strcat(final,"SIX "); 
                break;
        case 7: if(cnt==1)
                    strcat(final,"SEVENTY ");
                else 
                    strcat(final,"SEVEN "); 
                break;
        case 8: if(cnt==1)
                    strcat(final,"EIGHTY ");
                else 
                    strcat(final,"EIGHT "); 
                break;
        case 9: if(cnt==1)
                    strcat(final,"NINETY ");
                else 
                    strcat(final,"NINE "); 
                break;
        case 10: if(cnt==1)
                    strcat(final,"ONETY ");
                else 
                    strcat(final,"TEN "); 
                break;                                                                                        
        }
        cnt++;
        z/=10;
        }
        char* ret=final;
        return(ret);
    }
   if(x<=999)
    {   cnt=1;
        z=rev(x);
        while(z>0)
        {
        y=z%10;
       
        switch(y)
        {
        case 1: if(cnt==1)
                    strcat(final,"ONE HUNDRED ");
                else if(cnt==2)
                    strcat(final,"ONETY ");
                else
                     strcat(final,"ONE "); 
                break;
        case 2: if(cnt==1)
                    strcat(final,"TWO HUNDRED ");
                else if(cnt==2)
                    strcat(final,"TWENTY ");
                else 
                    strcat(final,"TWO "); 
                break;        
        case 3: if(cnt==1)
                    strcat(final,"THREE HUNDRED ");
                else if(cnt==2)
                    strcat(final,"THIRTY ");
                else 
                    strcat(final,"THREE "); 
                break;    
        case 4:if(cnt==1)
                    strcat(final,"FOUR HUNDRED ");
                else if(cnt==2)
                    strcat(final,"FOURTY ");
                else 
                    strcat(final,"FOUR "); 
                break;
        case 5:if(cnt==1)
                    strcat(final,"FIVE HUNDRED ");
                else if(cnt==2)
                    strcat(final,"FIFTY ");
                else 
                    strcat(final,"FIVE "); 
                break;
        case 6: if(cnt==1)
                    strcat(final,"SIX HUNDRED ");
                else if(cnt==2)
                    strcat(final,"SIXTY ");
                else 
                    strcat(final,"SIX "); 
                break;
        case 7: if(cnt==1)
                    strcat(final,"SEVEN HUNDRED ");
                else if(cnt==2)
                    strcat(final,"SEVENTY ");
                else 
                    strcat(final,"SEVEN "); 
                break;
        case 8: if(cnt==1)
                    strcat(final,"EIGHT HUNDRED ");
                else if(cnt==2)
                    strcat(final,"EIGHTY ");
                else 
                    strcat(final,"EIGHT "); 
                break;
        case 9: if(cnt==1)
                    strcat(final,"NINE HUNDRED ");
                else if(cnt==2)
                    strcat(final,"NINETY ");
                else 
                    strcat(final,"NINE "); 
                break;
        case 10: if(cnt==1)
                    strcat(final,"ONETY ");
                else 
                    strcat(final,"TEN "); 
                break;                                                                                        
        }
        cnt++;
        z/=10;
        }
        char* ret=final;
        return(ret);
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
                            printf("%s",toword(D[j].ival));
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
                        printf("_________________________________________________________________________________________________________________________________\n\n");
                        for(j=rnd;j>=0;j--)
                        {   if(D[j].ival>0)
                            printf("%s ",toword(D[j].ival));
                             if(D[j].ival>0)
                             printf("%s ",D[j].sval);

                        }
                        printf("\n");
                        printf("__________________________________________________________________________________________________________________________________\n\n");
                        fflush(stdin);
                        rnd=0;
                        break;

                case 3 : exit;        
            
            }
    }
    
    return;
}

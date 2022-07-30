#include<stdio.h>
#include<conio.h>
#include<string.h>
char SUBSTR[80];
char INSERTRESULT[80];
char DELETERESULT[80];
char REPLACERESULT[80];
///Return A sub string of a string
    char *SUBSTRING(char *STR,int i,int l)
        {
            int k,m=0;
                for(k=i-1;k<=i+l-1-1;k++)
                {
                    SUBSTR[m++]=STR[k];
                }
                SUBSTR[m]='\0';
                return (SUBSTR);
        }
///Return the 1st index of a pattern in a string
        int INDEX(char *TEXT,char *PATTERN)
        {
            int m,n;
            int index,flag;
            for(m=0;m<strlen(TEXT);m++)
            {
                index=m;
                flag=1;
                for(n=0;n<strlen(PATTERN);n++)
                {
                    if(TEXT[m+n]==PATTERN[n]) {  }
                    else { flag=0; break;  }
                }
                if(flag==0) continue;
                else return (index);
            }
            if(m==strlen(TEXT)) return (-1);
        }
/// Insert a string
        char *INSERT(char *STR1,int i,char * STR2)
        {
           strcpy(INSERTRESULT,SUBSTRING(STR1,1,i-1));
           strcat(INSERTRESULT,STR2) ;
           strcat(INSERTRESULT,SUBSTRING(STR1,i,strlen(STR1)-i+1));
           return (INSERTRESULT);
        }
///Delete a string
        char *DELETE(char *STR1,int i,int l)
        {
            strcpy(DELETERESULT,SUBSTRING(STR1,1,i-1));
            strcat(DELETERESULT,SUBSTRING(STR1,i+l,strlen(STR1)-i-l+1));
            return (DELETERESULT);
        }
///Replace a string
        char *REPLACE(char *str1,char *str2,char *str3)
        {
            int k;
            char RES1[80];
            if(INDEX(str1,str2)!=-1)
                k=INDEX(str1,str2)+1;
            else
                return (str1);
            strcpy(RES1,DELETE(str1,k,strlen(str2)));
            strcpy(REPLACERESULT,INSERT(RES1,k,str3));
        }
void main()
{
    char T[80]={"WRITE THE CODE CHANGE THE WORLD"};
    printf(" \nTEXT T = %s ",T);
    printf("\n\nLENGTH OF TEXT T = %d ",strlen(T));
    printf(" \n\nSUB STRING (T,5,6) = %s ",SUBSTRING(T,5,6));
    printf("\n\nINDEX OF THE PATTERN = %d ",INDEX(T,"COPE"));
    printf("\n\nINSERT 'atik' AT POSITION 7 = %s ",INSERT(T,7,"atik "));
    printf("\n\nDELETE FROM 7 POSITION LN 5 = %s ",DELETE(T,7,5));
     printf("\n\nREPLACE CODE BY PROGRAM = %s ",REPLACE(T,"CODE","PROGRAM"));
   getch();
}

#include<stdio.h>
#include<string.h>
int i=0,j=0;
char w[1001][100],in[100];

void visit()
{
    scanf("%s",in);
    i++;
    j=i;
    strcpy(w[i],in);
    printf("%s\n",w[i]);
}

void back()
{
    if(i==0)printf("Ignored\n");
    else
    {
        i--;
        printf("%s\n",w[i]);
    }
}

void forward()
{
    if(i==j)printf("Ignored\n");
    else
    {
        i++;
        printf("%s\n",w[i]);
    }
}

main()
{
    strcpy(w[0],"http://www.acm.org/");
    while(1)
    {
        scanf("%s",in);
        switch(in[0])
        {
            case 'V':visit();break;
            case 'B':back();break;
            case 'F':forward();break;
            case 'Q':exit(0);
        }
    }
}

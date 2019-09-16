#include<stdio.h>
int main()
{
    int a[100][100],i,j,max=0,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        max=a[i][j];
        for(j=0;j<m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }

        }
        printf("%d",max);
    }

}

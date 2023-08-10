#include<stdio.h>
#define N 50//defining to allocate an space to an Memory
int main()
{
    int i,j,k,sum;
    int a[N][N],b[N][N],c[N][N],m,n,p,q;
    printf("Enter the Rows and Column of a Matrix:\n");
    scanf("%d%d",&m,&n);//How many Row & COlumn
    printf("Enter the Elements of the Matrix:\n");
    for(i=0;i<m;i++)//Outer - Row
    {
        for(j=0;j<n;j++)//Inner - Column
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Rows and Column of the Matrix:\n");
    scanf("%d%d",&p,&q);//How many Row & COlumn
    printf("Enter the Elements of the Matrix:\n");
    for(i=0;i<p;i++)//Outer - Row
    {
        for(j=0;j<q;j++)//Inner - Column
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The Rows and Columns of the First Matrix:\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);//Showing in an Matrix Form
        }
        printf("\n");
    }
    printf("The Rows and Column of the Second Matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);//Showing in an Matrix Form
        }
        printf("\n");
    }

    if(n!=p)//Number of columns in First Matrix should be = Number Rows in Second Matrix
    {
        printf("The Give Matrix is Not a Valid");
    }
    else
    {
        printf("Performing Matrix Multiplication:\n");
    for(i=0;i<m;i++)//1st Matrix Row
    {
        for(j=0;j<q;j++)//2nd Matrix Column
        {
            sum=0;//Initializing
            for(k=0;k<m;k++)//This will be Traversing 0,1,2,3,....
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
             c[i][j]=sum;
            printf("\n");
        }
    }
    }
    printf("The Final Expression of the Matrix Multiplication is:\n");//Final Expression should First Matrix Row = Second Matrix Column
    for(i=0;i<m;i++)//1st Matrix Row
    {
        for(j=0;j<q;j++)//2nd Matrix Column
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

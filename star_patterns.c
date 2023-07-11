**STAR PATTERNS**

#include <stdio.h>  
#include <stdlib.h>  
s
void square();
void hollowSquare();
void hollowSquareDiagonal();
void rhombus();
void hollowRhombus();
void mirroredRhombus();
void hollowMirroredRhombus();
void rightTriangle();
void mirroredRightTriangle();
void hollowRightTriangle();
void hollowMirroredRightTriangle();
void hollowInvertedMirroredRightTriangle();
void hollowInvertedRightTriangle();
void invertedRightTriangle();
void invertedMirroredRightTriangle();
void pyramid();
void hollowPyramid();
void invertedPyramid();
void hollowInvertedPyramid();
void rightArrow();
void halfDiamond();
void leftArrow();
void plus();
void diamond();
void xStar();
 
 int main()  
{  
	square();
	hollowSquare();
	hollowSquareDiagonal();
	rhombus();
	hollowRhombus();
	mirroredRhombus();
	hollowMirroredRhombus();
	rightTriangle();
	mirroredRightTriangle();
	hollowRightTriangle();
	hollowMirroredRightTriangle();
	hollowInvertedMirroredRightTriangle();
	hollowInvertedRightTriangle();
	invertedRightTriangle();
	invertedMirroredRightTriangle();
	pyramid();
	hollowPyramid();
	invertedPyramid();
	hollowInvertedPyramid();
	rightArrow();
	halfDiamond();
	leftArrow();
	plus();
	diamond();
	xStar();
	
    return 0;  
}  

 void square()
{
	int max, columns, rows;
	
    printf("Enter the number of rows:\n");  
    scanf("%d",&max);  
	
    for(columns=0;columns<=max;columns++)  
    {  
        for(rows=0;rows<=max;rows++)  
        {  
            printf("*");  
        }  
		printf("\n");          
    }  
}

 void hollowSquare()
{  
    int max, columns, rows;
	
    printf("Enter the number of rows:\n");  
    scanf("%d",&max);  
	
    for(columns=0;columns<=max;columns++)  
    {  
        for(rows=0;rows<=max;rows++)  
        {  
            if(columns==0 ||columns==max||rows==0||rows==max)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
}  

 void hollowSquareDiagonal()
{
    int max, columns, rows;
	
    printf("Enter the number of rows:\n");  
    scanf("%d",&max);  
	
    for(columns=1;columns<=max+1;columns++)  
    {  
        for(int rows=1;rows<=max+1;rows++)  
        {  
            if(columns==1 ||columns==max+1||rows==1||rows==max+1||rows==max+1-columns+1||columns==rows)  
            {  
				printf("*");  
            }  
            else  
            {   
				printf(" ");  
            }  
        }        
        printf("\n");  
    } 
}

///n = max, i = columns, j= rows

void rhombus()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
}

void hollowRhombus()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
           if(i==1 || i==n || k==1 || k==n)  
            printf("*");  
            else  
            printf(" ");   
        }  
        printf("\n");  
    }  
}

void mirroredRhombus()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
           printf("*");  
              
        }  
        printf("\n");  
    }  
}

void hollowMirroredRhombus()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
         if(i==1 || i==n || k==1 || k==n)  
           printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
}

void rightTriangle()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("*");  
        }  
        printf("\n");
	}
}

void mirroredRightTriangle()
{
	 int n,m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;
	}
}

void hollowRightTriangle()
{
	int n;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");
	}
}

void hollowMirroredRightTriangle()
{
	int n,m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
           if(k==1 || k==m || m==n)  
            printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
        m++;
	}
}

void hollowInvertedMirroredRightTriangle()
{
	int n,m;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
          if(i==1 || k==1 || k==m)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m--;  
     
      printf("\n");  
   }
}

void hollowInvertedRightTriangle()
{
	int n,m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
         if(j==1 || j==i || i==n)  
          printf("*");  
          else  
          printf(" ");  
      }  
      printf("\n");  
    }  
}

void invertedRightTriangle()
{
	int n,m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
          printf("*");  
      }  
      printf("\n");  
    }  
}

void invertedMirroredRightTriangle()
{
	int n,m;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
           printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
}

void pyramid()
{
	int n,m;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
}

void hollowPyramid()
{
	int n, m;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
         printf("*");  
         else  
         printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    }  
}

void invertedPyramid()
{
	int n,m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n"); 
   }
}


void hollowInvertedPyramid()
{
	int n, m=1;  
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
  
	for(int i=n;i>=1;i--)  
    {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m++;  
     
      printf("\n");  
    }  
}

void rightArrow()
{
	 int n;  
	 printf("Enter the number of columns:\n");  
	 scanf("%d",&n);  
	 //printing the upper part of the pattern...  
	  
	 for(int i=0;i<n;i++)  
	 {  
	   for(int j=0;j<i;j++)  
	   {  
		   printf(" ");  
	   }  
	   for(int k=1;k<=n-i;k++)  
	   {  
		 printf("*");  
	   }  
	   printf("\n");  
	 }  
	for(int i=1;i<n;i++)  
	{  
	  for(int j=1;j<n-i;j++)  
	  {  
		printf(" ");  
	  }  
	  for(int k=1;k<=i+1;k++)  
	  {  
		printf("*");  
	  }  
	  printf("\n");  
	}  
}

void halfDiamond()
{
	int n,m=1;  
    printf("Enter the number of columns:\n");  
    scanf("%d",&n);  
	
	for(int i=1;i<=n;i++)  
	{  
	  for(int j=1;j<=i;j++)  
	  {  
		printf("*");  
	  }  
	  printf("\n");  
	}  
	 for(int i=n-1;i>=1;i--)  
	 {  
	   for(int j=1;j<=i;j++)  
	   {  
		 printf("*");  
	   }  
	   printf("\n");  
	 }    
}

void leftArrow()
{
	 int n;  
	 printf("Enter the number of columns:\n");  
	 scanf("%d",&n);  
	 //printing the upper part of the pattern...  
	 
	 for(int i=1;i<=n;i++)  
	 {  
	   for(int j=1;j<=n-i;j++)  
	   {  
		   printf(" ");  
	   }  
	   for(int k=0;k<=n-i;k++)  
	   {  
		 printf("*");  
	   }  
	   printf("\n");  
	 }  
	 
	for(int i=1;i<n;i++)  
	{  
	  for(int j=1;j<i+1;j++)  
	  {  
		printf(" ");  
	  }  
	  for(int k=1;k<=i+1;k++)  
	  {  
		printf("*");  
	  }  
	  printf("\n");  
	}  
}

void plus()
{
	  int n;
	  
	  printf("Enter an odd number only:\n");  
	  scanf("%d", &n);  
	  for(int i=1;i<=n;i++)  
	  {  
		if(i==((n/2)+1))  
		{  
		  for(int j=1;j<=n;j++)  
		  {  
			printf("+");  
		  }  
	   
		}  
		else  
		{  
		for(int j=1;j<=n/2;j++)  
		{  
		  printf(" ");  
		}  
		printf("+");  
		}  
		printf("\n");  
	  }  
}

void diamond()
{
	  int n;  
	  printf("Enter the number of rows:\n");  
	  scanf("%d",&n);  
	  int spaces=n-1;  
	  int stars=1;  
	  
	  for(int i=1;i<=n;i++)  
	  {  
		for(int j=1;j<=spaces;j++)  
		{  
		  printf(" ");  
		}  
		for(int k=1;k<=stars;k++)  
		{  
		  printf("*");  
		}  
		if(spaces>i)  
		{  
		  spaces=spaces-1;  
		  stars=stars+2;  
		}  
		if(spaces<i)  
		{  
		  spaces=spaces+1;  
		  stars=stars-2;  
		}  
		printf("\n");  
	  }  
}

void xStar()
{
	  int n,m;  
	  printf("Enter the number of rows:\n");  
	  scanf("%d",&n);  
	  m=2*n-1;  
	  for(int i=1;i<=m;i++)  
	  {  
		for(int j=1;j<=m;j++)  
		{  
		   if(i==j || j==(m-i+1))  
		   {  
			 printf("*");  
		   }  
		   else  
		   {  
			 printf(" ");  
		   }  
		}  
		printf("\n");  
	  }  
}

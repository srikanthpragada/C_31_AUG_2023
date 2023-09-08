// Program to display grade
// Date : 08-sep-2023

void main()
{
 int marks;

   printf("Enter the marks :");
   scanf("%d",&marks);

   if(marks>80)
     printf("Grade A");
   else
     if(marks>60)
       printf("Grade B");
    else
       printf("Grade C");
}

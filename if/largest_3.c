// Program to largest of 3 numbers
// Date : 08-sep-2023

void main()
{
 int a,b,c;

   printf("Enter three numbers :");
   scanf("%d%d%d",&a,&b,&c);

   if(a > b && a > c)
     printf("%d", a);
   else
     if(b > c)
       printf("%d", b);
     else
       printf("%d", c);


   if(a > b)
   {
     if(a > c)
        printf("%d", a);
     else
        printf("%d", c);
   }
   else
   {
     if(b > c)
       printf("%d", b);
     else
       printf("%d", c);
   }
}

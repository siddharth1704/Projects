#include<stdio.h>
#include<math.h>

void hello();
void add();
void subtract();
void Multi();
void div();
void mod();
void cal();
void prime();
void rev1();
void count();
void count1();
void armstrong();
void strong1();
void cuber();
void squarer();
void cube();
void square();
void npow();
void evechck();
void oddchck();
void halfpyramids();
void halfpyramidn();
void floydtrian();
void invertedfloy();
void invertedhalfs();
void invertedhalfn();
void leftpys();
void leftpyn();
void inleftpys();
void fact();
void butter();
void displayarr();
void sumofarr();
void sumofeve();
void sumofodd();
void sumofelementateve();
void sumofelementatedd();
void encrypt();
void multiele();
void multieveele();
void multioddel();
void averageofarr();
void reverseofarr();
void palindromearr();
void dispevenel();
void dispoddel();
void rightshift();
void leftshift();
void alphabet(){
    char ch;
    printf("Enter the alphabet");
    scanf("%c",&ch);
    if((ch>='A' && ch<='z')||(ch>='a' && ch<='z')){
    switch(ch)
    {
case 'A':
case 'I':
case 'E':
case 'O':
case 'U':
case 'a':
case 'i':
case 'e':
case 'o':
case 'u':
printf("Character is vowel");
    break;
    default : printf("Character is  Constant");
    }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
    }
    void series()
    {
    int i,n,sume=0,sumo=0,sum = 0;
    printf("Till where you want:");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i%2==0){
        sume= sume + i;
    }
    else
    {
        sumo= sumo-i;
    }
}
sum = sume + sumo;
printf("sum of series is : %d",sum);
    }
    void power()
    {
        int c,x,y;
        printf("Enter the value of x and y");
        scanf("%d%d",&x,&y);
        c=pow(x,y);
        printf("%d",c);
    }
    void hcflcm()
    {
        int n;
        printf("Enter the value of n :");
        scanf("%d",&n);
    }
    void datatype(){
    char ch;
    int a;
    float b;
    double c;
    scanf("%c%d%f%lf",&ch,&a,&b,&c);
    printf("%c %d %f %lf",ch,a,b,c);
    }
    void salary()
    {
        float da,hra,ta,gs,tax,bs;
        printf("Enter basic salary");
        scanf("%f",&bs);
        da = (bs*0.15);
        hra =( bs*10)/100;
        ta = (bs*5)/100;
        gs =bs +da+hra+ta;
        printf("\n Basic salary \t = %f",bs);
        printf("\n da \t = %f",da);
        printf("\n hra \t = %f",hra);
        printf("\n ta \t = %f",ta);
         printf("\n Gross salary \t = %f",gs);
    }
    void strong()
{
    int num,i,f,r,sum=0,temp;
printf("Enter a number: ");
scanf("%d",&num);
temp=num;
while(num) {
i=1,f=1;
r=num%10;
while(i<=r) {
f=f*i;
i++;
}
sum=sum+f;
num=num/10;
}
if(sum==temp)
     printf("%d is a strong number",temp); else
     printf("%d is not a strong number",temp);
}
void paliendrome()
{
int i,flag=0,len;
char str[20];
printf("enter the string");
fflush(stdin);
gets(str);
for(i=0;str[i]!=NULL;i++);
len=i;
for(i=0;i<(len-1)/2;i++)
{
if(str[i]!=str[len-1-i]){
    flag=1;
    break;
}
}
    if(flag==0){
        printf("str is palindrome",str[20]);
    }
    else{
        printf("str is not palindrome",str[20]);
    }
}
void svowel()
{
int i,ctr=0;
char str[20];
printf("enter the string");
fflush(stdin);
gets(str);
printf("%s \n",str);
for(i=0;str[i]!=NULL;i++)
    {
    if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
    {
        printf("%c",str[i]);
        ctr++;
    }
    }
    printf("%d \n",ctr);

}
void srev()
{
    int i,j;
    char str[20];
    printf("Enter the string\n");
    fflush(stdin);
    gets(str);
    j=strrev(str);
    printf("%s",j);
            }
void capital()
{
    int i,ctr;
char str[20];
printf("enter the string \n");
fflush(stdin);
gets(str);
for(i=0;str[i]!=NULL;i++)
{
    if(str[i]>=65 && str[i]<=90){
        str[i]=str[i]+32;
    }
    if(str[i]>=97 && str[i]<=122){
        str[i]=str[i]-32;
}
printf("%s",str);
}
}
void slast()
{
    int i,k=0;
char str[20],str1[20];
printf("enter the string\n");
fflush(stdin);
gets(str);
for(i=0;str[i]!=NULL;i++) ;
for(i=i-1;i>=0;i--)
{
    str[k+1]=str[i];
}
str1[i]=NULL;
printf("%s",str);
}
void slength()
{
     char str[20];
    int i;
    printf("enter the string\n");
    fflush(stdin);
    gets(str);
    for (i = 0; str[i] != '\0'; i++);
    printf("Length of the string: %d", i);
}
void concat()
{
    int i, j;
    char str[20],str1[20];
    printf("Enter the String: \n");
    fflush(stdin);
    gets(str);
    printf("Enter the String 1: \n");
    gets(str1);
    for (i = 0; str[i] != '\0'; i++) {
        printf("i = %d\n", i);
    }
    for (j = 0; str1[j] != '\0'; j++,i++) {
        str[i] = str1[j];
    }
    str[i] = '\0';
    printf("After concatenation: ");
    puts(str);

}
void copy()
{
        char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fflush(stdin);
    gets(s1);
    for (i = 0; s1[i] != '\0';i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s", s2);

}
void substring()
{
     char string[1000], sub[1000];
   int position, length, c = 0;

   printf("Input a string\n");
   fflush(stdin);
   gets(string);

   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);

   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';

   printf("Required substring is \"%s\"\n", sub);
}
void strword()
{
    int i,j,d,x=0;
    char str[20];
    printf("Enter the string: ");
    fflush(stdin);
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if(str[i]==' ')
        {
            x++;
            for (j=x,d=i; str[d] != '\0';j++,d++)
            {
                str[j]=str[d];
            }
            str[j]=NULL;
            i=x+1;
            x++;
        }
    }
    printf("%s",str);
}
void sname()
{
  char name[10];
int age;
printf("Enter your first name and age: \n");
scanf("%s %d", name, &age);
printf("You entered: %s %d",name,age);
}
void sswap()
{
       char s1[100];
   char s2[100];
   char ch;
   printf(" Enter the string :");
   fflush(stdin);
   gets(s1);
   printf(" Enter the string :");
   fflush(stdin);
   gets(s2);
   int i = 0;
   printf("Before Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);
   while(s1[i] != '\0') {
      ch = s1[i];
      s1[i] = s2[i];
      s2[i] = ch;
      i++;
   }
   printf("After Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);
}
 void maxmin(){
    int i,n,arr[n],max=0,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&n);
    }
    max = arr[0];
    for(i=0;i<n;i++){
        if(min > arr[i])
            {
            min = arr[i];}
            if(min<arr[i]){
                max = arr[i];
        }
        printf("Min: %d Max :%d",min,max);
    }
    }
    void digit(){
    int i,n,arr[20];
    printf("Enter the number");
    scanf("%d",&n);
        if(n<9 && n>0){
            printf("Single digit");
        }
        else
        {
            printf("not a single digit");
        }
    }
    void binary()
    {
        int n,r,i=1,binary =0;
    printf("Enter the decimal number :");
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        n=n/2;
        binary =binary + (r*i);
        i = i*10;
    }
    printf("Binary is %d",binary);
    }

      void perfect()
    {
        int i,n,sum=0;
        printf("Enter the number");
        scanf("%d",&n);
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0){
                sum = sum +i;
            }
            if(sum==n)
            {
                printf("Number is perfect");
            }
            else
                {
                printf("Number is not perfect");
            }
        }
    }
    void asciialpha()
    {
        int ch;
        printf("Enter the alphabet :");
        scanf("%d",&ch);
        if(ch>=65 && ch<=90)
        {
            printf("%c",ch);
        }
        if(ch>=97 && ch<=122)
        {
            printf("%c",ch);
        }
    }
    void factor()
    {
            int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    }
    void factsum()
    {
        int i,n,fact=1,sum=0,dig ,dig1;
        printf("Enter the number :");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
if(n%2==0)
{
            fact*= i ;
        }
printf("%d",fact);
    }

            while(n)
            {
               sum += n % 10;
                n /= 10 ;
           }
            printf("%d",sum);
}
void matrixmult()
    {
        int first[10][10], second[10][10], mult[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    while (c1 != r2) {
        printf("Error! Enter rows and columns again.\n");
        printf("Enter rows and columns for the first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and columns for the second matrix: ");
        scanf("%d%d", &r2, &c2);
    }
    enterData(first, second, r1, c1, r2, c2);
    multiplyMatrices(first, second, mult, r1, c1, r2, c2);
    display(mult, r1, c2);
    return 0;
}
void enterData(int first[][10], int second[][10], int r1, int c1, int r2, int c2) {
    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }
}
void multiplyMatrices(int first[][10], int second[][10], int mult[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                mult[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
void display(int mult[][10], int r1, int c2) {
    printf("\nOutput Matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d  ", mult[i][j]);
            if (j == c2 - 1)
                printf("\n");
        }
    }
    }

    void num_cha()
{
int n,sum=0,r;
printf("enter the number ");
scanf("%ld",&n);
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=sum;
while(n>0)
{
r=n%10;
switch(r)
{
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case 0:
printf("zero ");
break;
default:
printf("tttt");
break;
}
n=n/10;
}
}
void transpose()
  {
      int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
  }
  void frequencyword()
  {
      int freq,l;
          char str[1000], ch;
    int count = 0;
    printf("Enter a string: \n");
    fflush(stdin);
    scanf("%d",str);
    gets(str);
    l=strlen(str);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; i<l; i++) {
        if (ch == str[i])
            count++;
    }
    printf("Frequency of %c = %d", ch,count);
  }
  void frequencynumber()
  {
      int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
  }
  void stringlength()
  {
      int i,ctr=0;
      char str []= "hello";
      //printf("Enter the string : ");
      //gets(str);
      for(i=0;str[i]!='\0';i++)
      {
          ctr++;
      }
      printf("%d",ctr);
  }
  void leapyear()
  {
       int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if(y % 4 == 0)
    {
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);
  }
  void greatestofthree()
  {
   int num1,num2,num3;
   printf("\nEnter value of num1, num2 and num3:");
   scanf("%d %d %d",&num1,&num2,&num3);
   if((num1>num2)&&(num1>num3))
      printf("\n Number1 is greatest");
   else if((num2>num3)&&(num2>num1))
      printf("\n Number2 is greatest");
   else
      printf("\n Number3 is greatest");
  }
  void naturalsum()
  {
    int n, count, sum = 0;
    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);
    for(count=1; count <= n; count++)
    {
        sum = sum + count;
    }
    printf("Sum of first %d natural numbers is: %d",n, sum);
  }
  void rev()
  {
      int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
  }
  void avg()
  {
    int n, i;
    float sum = 0, x;
    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\n\n\nEnter %d elements\n\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\n\n\nAverage of the entered numbers is =  %f", (sum/n));
  }
  void multtable()
  {
     int n,i;
    printf("Enter an integer you need to print the table of: ");
    scanf("%d", &n);
    printf("\n\n\n");
    for(i = 1; i <= 10; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n*i);
    }
  }
  void revarray()
  {
      int c, d, n, a[100], b[100];
    printf("\n\nEnter number of elements in array :");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &a[c]);
    for(c = n-1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];
    for(c = 0; c < n; c++)
        a[c] = b[c];
    printf("\n\n Resultant array is: ");
    for(c = 0; c < n; c++)
        printf("%d", a[c]);
  }
  void determinant()
  {
      int a[2][2], i, j;
    long determinant;
    printf("\n\nEnter the 4 elements of the array\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &a[i][j]);
    printf("\n\nThe entered matrix is: \n\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\n\nDeterminant of 2x2 matrix is : %d - %d =  %d", a[0][0]*a[1][1], a[1][0]*a[0][1], determinant);
  }
  void compare(){
char arr1[200], arr2[200];
printf("Please enter the 1st string\n");
fflush(stdin);
gets(arr1);
printf("Please enter the 2nd string\n");
fflush(stdin);
gets(arr2);
printf("Entered strings are\narr1 = %s \narr2 = %s", arr1, arr2);
if( strcmp(arr1,arr2) == 0 )
printf("\nEntered strings are equal.\n");
else
printf("\nEntered strings are not equal.\n");
  }
void duplicate()
{
    int arr1[100];
int arr2[100];
int arr3[100];
    int n,mm=1,ctr=0;
    int i, j;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
        scanf("%d",&arr1[i]);
   }
for(i=0;i<n; i++)
        {
arr2[i]=arr1[i];
arr3[i]=0;
        }
for(i=0;i<n; i++)
        {
for(j=0;j<n;j++)
{
if(arr1[i]==arr2[j])
{
arr3[j]=mm;
mm++;
}
}
mm=1;
        }
   for(i=0; i<n; i++)
    {
      if(arr3[i]==2)
        {
            ctr++;
        }
    }
      printf("The total number of duplicate elements found in the array is: %d ", ctr);
}



int main(){
 int x;
 //---------------------------------------------------------------------------------------output-----------------------
 label:
 printf("\t\t\t\t\t\t\t\t\tWELCOME  TO 100 CODES\n");
 printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("1. About   2.Source Code\n");
 printf("\t\t\t------------IF ELSE STATEMENTS--------------\n");
 printf("\t\t\tPress 1  for Hello World\n");
 printf("\t\t\tPress 2  for Addition\n");
 printf("\t\t\tPress 3  for Subtraction\n");
 printf("\t\t\tPress 4  for Multiplication\n");
 printf("\t\t\tPress 5  for Division \n");
 printf("\t\t\tPress 6  for Modulo\n");
 printf("\t\t\tPress 7  for Calculator\n");
 printf("\t\t\t------------LOOPS--------------\n");
 printf("\t\t\tPress 8  for Prime Number\n");
 printf("\t\t\tPress 9  for Reversing a Number\n");
 printf("\t\t\tPress 10 for Counting Digits in a Number\n");
 printf("\t\t\tPress 11 for Counting Specific Digit  in a Number\n");
 printf("\t\t\tPress 12 to  Check a number is Armstrong\n");
 printf("\t\t\tPress 13 to  Check a Number is Strong\n");
 printf("\t\t\tPress 14 for Cube root of Number\n");
 printf("\t\t\tPress 15 for Square root of a number\n");
 printf("\t\t\tPress 16 for Cube of a number\n");
 printf("\t\t\tPress 17 for Square of a number\n");
 printf("\t\t\tPress 18 for Calculating Nth power of a number \n");
 printf("\t\t\tPress 19 to  Check a number is Even \n");
 printf("\t\t\tPress 20 to  Check a number is Odd\n");
 printf("\t\t\t------------PATTERNS--------------\n");
 printf("\t\t\tPress 21 for half pyramid using star\n");
 printf("\t\t\tPress 22 for half pyramid using numbers\n");
 printf("\t\t\tPress 23 for Floyd triangle\n");
 printf("\t\t\tPress 24 for Inverted Floyd triangle\n");
 printf("\t\t\tPress 25 for Inverted half pyramid using star\n");
 printf("\t\t\tPress 26 for Inverted half pyramid using numbers\n");
 printf("\t\t\tPress 27 for left half pyramid using stars\n");
 printf("\t\t\tPress 28 for left half pyramid using Numbers\n");
 printf("\t\t\tPress 29 for Inverted left half pyramid using stars\n");
 printf("\t\t\tPress 30 for Inverted left half pyramid using numbers\n");
 printf("\t\t\tPress 31 for Pyramid using stars\n");
 printf("\t\t\tPress 32 for factorial\n");
 printf("\t\t\tPress 33 for Butterfly pattern\n");
 printf("\t\t\t------------ARRAYS--------------\n");
 printf("\t\t\tPress 34 for Displaying an Array\n");
 printf("\t\t\tPress 35 for Sum of a Array Elements\n");
 printf("\t\t\tPress 36 for Sum of even Elements in  an Array\n");
 printf("\t\t\tPress 37 for Sum of odd  Elements in  an Array\n");
 printf("\t\t\tPress 38 for Sum of elements at odd index in an Array \n");
 printf("\t\t\tPress 39 for Sum of elements at even index in an Array\n");
 printf("\t\t\tPress 40 for Encrypting an array by a number n\n");
 printf("\t\t\tPress 41 for Multiplication of elements in an Array\n");
 printf("\t\t\tPress 42 for Multiplication of even elements in an Array\n");
 printf("\t\t\tPress 43 for Multiplication of odd elements in an Array\n");
 printf("\t\t\tPress 44 for Average of elements of an Array \n");
 printf("\t\t\tPress 45 for Reversing an array\n");
 printf("\t\t\tPress 46 for Checking whether array is palindrome\n");
 printf("\t\t\tPress 47 for Displaying Even elements of an array\n");
 printf("\t\t\tPress 48 for Displaying Odd elements of an array\n");
 printf("\t\t\tPress 49 for Right shift of array elements\n");
 printf("\t\t\tPress 50 for Left  shift of array elements\n");
 printf("\t\t\t------------MISCS--------------\n");
 printf("\n\t\t\t 51: alphabet \n\t\t\t 52: power \n\t\t\t  53: hcflcm \n\t\t\t 54: datatype \n\t\t\t 55: salary ");
 printf("\n\t\t\t 56: to check strong number \n\t\t\t 57: paliendrome \n\t\t\t 58: vowel in a string \n\t\t\t 59: reverse of a string \n\t\t\t 60: capital becomes small and small becomes capital in a string \n\t\t\t 61: last string was printed as a character \n\t\t\t 62: length of a string \n\t\t\t 63: concatenate of string \n\t\t\t 64: copy a string \n\t\t\t 65: substring of a string \n\t\t\t 66: short the name through string \n\t\t\t 67: enter your first name and age \n\t\t\t 68: swapping of a string");
 printf("\n\t\t\t 69: print max and min \n\t\t\t 70: print single digit or not \n\t\t\t 71: print binary or not \n\t\t\t 72: print perfect number \n\t\t\t 73: print ascii alphabet \n\t\t\t 74: print factor of a number \n\t\t\t 75: print factorial of even number and sum of digits of odd number \n\t\t\t 76: to convert number into character");
printf("\n\t\t\t  77 : Print Transpose of a matrix \t\t\t------------STRINGS--------------\n \n\t\t\t 78 : Print Frequency of word \n\t\t\t 79 : Print Frequency of a each number \n\t\t\t 90 : Print String Length \n\t\t\t 91 : Print Leap year \n\t\t\t 92 : Print Greatest of three number \n\t\t\t 93 : Print Sum of first n natural number \n\t\t\t 94 : Print reverse of a number \n\t\t\t 95 : Print average of a number \n\t\t\t 96 : Print Multiplication table \n\t\t\t 97: Print reverse of an array \n\t\t\t 98 : Print Determinant of a matrix \n\t\t\t 99 : Print Compare two strings \n\t\t\t 100 : Count total number of duplicate elements in an array ");

 //-----------------------------------------------------input----------------------------------
printf("\n---------------------------------------------------------------------------\n\t\tENTER YOUR CHOICE");
scanf("%d",&x);

 switch(x){
   case 1:
     hello();
     break;
   case 2:
     add();
     break;
   case 3:
     subtract();
     break;
   case 4:
      Multi();
      break;
   case 5:
      div();
      break;
   case 6:
      mod();
      break;
   case 7:
      cal();
      break;
   case 8:
      prime();
      break;
   case 9:
      rev1();
      break;
   case 10:
      count();
      break;
   case 11:
      count1();
      break;
   case 12:
      armstrong();
      break;
   case 13:
      strong1();
      break;
   case 14:
      cuber();
      break;
   case 15:
      squarer();
      break;
   case 16:
      cube();
      break;
   case 17:
      square();
      break;
   case 18:
      npow();
      break;
   case 19:
      evechck();
      break;
   case 20:
      oddchck();
      break;
   case 21:
      halfpyramids();
      break;
   case 22:
      halfpyramidn();
      break;
   case 23:
      floydtrian();
      break;
   case 24:
      invertedfloy();
      break;
   case 25:
      invertedhalfs();
      break;
   case 26:
      invertedhalfn();
      break;
   case 27:
      leftpys();
      break;
   case 28:
      leftpyn();
      break;
   case 30:
      inleftpys();
      break;
   case 31:
      fact();
      break;
   case 32:
      butter();
      break;
   case 34:
      displayarr();
      break;
   case 35:
      sumofarr();
      break;
   case 36:
      sumfofeve();
      break;
   case 37:
      sumofodd();
      break;
   case 38:
      sumofelementateve();
      break;
   case 39:
      sumofelementatodd();
      break;
   case 40:
      encrypt();
      break;
   case 41:
      multiele();
      break;
   case 42:
      multieveele();
      break;
   case 43:
      multioddel();
      break;
   case 44:
      averageofarr();
      break;
   case 45:
      reverseofarr();
      break;
   case 46:
      palindromearr();
      break;
   case 47:
      dispevenel();
      break;
   case 48:
      dispoddel();
      break;
   case 49:
      rightshift();
      break;
   case 50:
      leftshfit();
      break;
   case 51 : alphabet();
    break;
    case 52 : power();
    break;
    case 53 : hcflcm();
    break;
    case 54 : datatype();
    break;
    case 55 : salary();
    break;
    case 56 : strong();
    break;
    case 57 : paliendrome();
    break;
    case 58 : svowel();
    break;
    case 59 : srev();
    break;
    case 60 : capital();
    break;
    case 61 : slast();
    break;
    case 62 : slength();
    break;
    case 63 : concat();
    break;
    case 64 : copy();
    break;
    case 65 : substring();
    break;
    case 66 : strword();
    break;
    case 67 : sname();
    break;
    case 68 : sswap();
    break;
    case 69 : maxmin();
    break;
    case 70 : digit();
    break;
    case 71 : binary();
    break;
    case 72 : perfect();
    break;
    case 73 : asciialpha();
    break;
    case 74 : factor();
    break;
    case 75 : factsum();
    break;
    case 76 : num_cha();
    break;
    case 77 : transpose();
    break;
    case 78 : frequencyword();
    break;
    case 79 : frequencynumber();
    break;
    case 90 : stringlength();
    break;
    case 91 : leapyear();
    break;
    case 92 : greatestofthree();
    break;
    case 93 : naturalsum();
    break;
    case 94 : rev();
    break;
    case 95 : avg();
    break;
    case 96 : multtable();
    break;
    case 97 : revarray();
    break;
    case 98 : determinant();
    break;
    case 99 : compare();
    break;
    case 100 : duplicate();
    break;

    default : ("wrong choice");
 }

char a;
printf("\n\t\t1WANT TO RETURN TO MAIN MENU(Y/N)\n");
 scanf("%s",&a);
if(a=='Y')
 goto label;
else
 return 0;
}


void hello()
 {
     printf("Hello World");
 }

void add()
  {
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d",x+y);
  }

 void subtract()
  {
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d",x-y);
  }

 void Multi()
  {
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d",x*y);
  }

 void div()
  {
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d",x/y);
  }

  void mod()
  {
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d",x%y);
  }

void cal()
 {
    int n,x,y;
    printf("Press 1 for addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");
    printf("Press 5 for mod\n");
    scanf("%d",&n);
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    switch(n)
    {
    case 1:
     printf("%d",x+y);
     break;
    case 2:
     printf("%d",x-y);
     break;
    case 3:
     printf("%d",x/y);
     break;
    case 4:
     printf("%d",x*y);
     break;
    case 5:
     printf("%d",x%y);
     break;
    default:
     printf("Wrong Choice");
    }
 }

 void prime()
  {
    int n,flag;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
     {
      if(n%i==0)
       {
        flag=1;
        break;
       }
     }
   if(flag==1)
    printf("NON-PRIME");
   else
    printf("Prime");
  }
 void rev1()
 {
  int n,rev=0,digi;
  printf("Enter the number");
  scanf("%d",&n);
   while(n!=0)
    {
     digi=n%10;
     rev=rev*10+digi;
     n=n/10;
    }
   printf("Reverse number is %d",rev);
 }

 void count()
 {
  int n,digi=0;
  printf("Enter the number");
  scanf("%d",&n);
  while(n!=0)
   {
    n=n/10;
    ++digi;
   }
  printf("The number of digits are %d",digi);

 }

 void count1()
 {
  int n,i,digi,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the digit to be counted");
    scanf("%d",&i);
    while(n!=0)
     {  digi=n%10;
        if(i==digi)
            ++c;
     }
   printf("The number of %d in %d are %d",i,n,c);
 }

 void armstrong()
 {
    int n,temp,result,digi;
    printf("Enter a three digit number");
    n=temp;
    while(temp!=0)
     {
       digi=temp%10;
       result=digi*digi*digi;
       temp=temp/10;
     }
   if(n==result)
     printf("Armstrong");
   else
     printf("Not armstrong");
}

 void strong1()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    originalNum = num;
    sum = 0;
    while(num > 0)
    {
        lastDigit = num % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;

    }
    if(sum == originalNum)
        printf("%d is STRONG NUMBER", originalNum);
    else
        printf("%d is NOT STRONG NUMBER", originalNum);
}


void cuber()
{
  int x;
  printf("Enter the number");
  scanf("%d",&x);
  x=cbrt(x);
  printf("%d",x);
}

void squarer()
{
  int x;
  printf("Enter the number");
  scanf("%d",&x);
  x=sqrt(x);
  printf("%d",x);

}

void cube()
{
  int x;
  printf("Enter the number");
  scanf("%d",&x);
  x=x*x*x;
  printf("%d",x);

}

void square()
{
  int x;
  printf("Enter the number");
  scanf("%d",&x);
  x=x*x;
  printf("%d",x);

}

void npow()
{
  int x,n;
  printf("Enter the number and power");
  scanf("%d %d",&x,&n);
  x=pow(x,n);
  printf("%d",x);

}

void evechck()
{
  int x;
  printf("Enter the number");
  scanf("%d",&x);
  if(x%2==0)
   printf("Even");
  else
   printf("Not even");
}

void oddchck()
{
   int x;
  printf("Enter the number");
  scanf("%d",&x);
  if(x%2==0)
   printf("Even");
  else
   printf("Not even");

}


void halfpyramids()
{
 int n,i,j;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(i<=j)
      printf("*");
     else
      printf(" ");
    }
   printf("\n");
  }
}


void halfpyramidn()
{
 int n,i,j,k=1;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  { k=1;
   for(j=0;j<n;j++)
    {
	 if(i<=j)
      printf("%d",k++);
     else
      printf(" ");
    }
   printf("\n");
  }
}

void floydtrian()
{
 int n,i,j,k=1;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(i<=j)
      printf("%d",k);
     else
      printf(" ");
    }
   ++k;
   printf("\n");
  }
}

void invertedfloy()
{
 int n,i,j,k;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 k=n;
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(j>=i)
      printf("%d",k);
     else
      printf(" ");
    }
   ++k;
   printf("\n");
  }
}

void invertedhalfs()
{
 int n,i,j,k=1;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(j>=i)
      printf("*");
     else
      printf(" ");
    }

   printf("\n");
  }

}

void invertedhalfn()
{
 int n,i,j,k=1;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   k=1;
   for(j=0;j<n;j++)
    {
	 if(j>=i)
      printf("%d",k++);
     else
      printf(" ");
    }
   ++k;
   printf("\n");
  }
}

void leftpyn()
{
 int n,i,j,k=1;
 printf("Enter the number of  lines");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  { k=1;
   for(j=0;j<n;j++)
    {
	 if(i+j>=n-1)
      printf("%d",k++);
     else
      printf(" ");
    }
   printf("\n");
  }
}

void leftpys()
{
 int n,i,j;
 printf("Enter the number of lines you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(i+j<=n-1)
      printf("*");
     else
      printf(" ");
    }
   printf("\n");
  }
 return 0;
}

void inleftpys()
{
 int n,i,j,k=1;
 printf("Enter the no of lines");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
	 if(i+j<=n-1)
      printf("*");
     else
      printf(" ");
    }
   printf("\n");
  }
}



void butter()
{
	int i,j,n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=(2*n); j++)
		{

			if (i<j)
				printf(" ");
			else
				printf("*");
			if (i<=((2*n)-j))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}


	for (i=1; i<=n; i++)
	{
		for (j=1;j<=(2*n);j++)
		{

			if (i>(n-j+1))
				printf(" ");
			else
				printf("*");


			if ((i+n)>j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

void displayarr()
{
  int n;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
  printf("The elements of array");
  for(int i=0;i<n;i++)
        printf("%d ",a[i]);

}

void sumofarr()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
     sum+=a[i];
  }
  printf("The sum is %d",sum);
}

void sumfofeve()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
     if(a[i]%2==0)
     sum+=a[i];
  }
 printf("The sum of even elements are %d",sum);
}

void sumofodd()
{
 int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
     if(a[i]%2!=0)
     sum+=a[i];
  }
  printf("The sum of odd elements are %d",sum);
}

void sumofelementatodd()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     if(i%2!=0)
     sum+=a[i];
   }
  printf("The sum of elements at odd %d",sum);
}

void sumofelementateve()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     if(i%2==0)
     sum+=a[i];
   }
  printf("The sum of elements at even %d",sum);
}

void encrypt()
{
  int n,s,k;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("the encrypt code");
  scanf("%d",&k);
  for(int i=0;i<n;i++)
   {
     a[i]=a[i]+k;
   }
  printf("The encrypted array");
  for(int i=0;i<n;i++)
    printf("%d",a[i]);

}


void multiele()
{
 int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     sum*=a[i];
   }
  printf("The multiplications of elements %d",sum);
}

void multieveele()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     if(i%2==0)
     sum*=a[i];
   }
  printf("The multiplication of elements at even %d",sum);
}

void multioddel()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     if(i%2!=0)
     sum*=a[i];
   }
  printf("The multi of elements at odd %d",sum);
}

void averageofarr()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     sum+=a[i];
   }
  printf("The average of elements at %d",sum/n);

}

void reverseofarr()
{
  int n,temp;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);

   }
  for(int i=0;i<n;i++)
  {
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
  }
}

void palindromearr()
{
  int n,flag;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);

   }
  for(int i=0;i<n;i++)
  {
    if(a[i]!=a[n-i-1])
       {
           flag=1;
           break;
       }
  }
  if(flag==1)
   printf("Not palindrome");
  else
   printf("Palindrome");
}

void dispevenel()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("The even elements");
  for(int i=0;i<n;i++)
    if(a[i]%2==0)
      printf("%d",a[i]);
}

void dispoddel()
{
  int n,sum=0;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("The even elements");
  for(int i=0;i<n;i++)
    if(a[i]%2!=0)
      printf("%d",a[i]);
}

void rightshift()
{
  int n,temp,i;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("The right shift");
  temp=a[0];
  for(i=1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
  for(int i=0;i<n;i++)
      printf("%d",a[i]);
}
void leftshfit()
{
  int n,temp,i;
  printf("enter the no of elements of array");
  scanf("%d",&n);
  int a[n];
  for( i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("The right shift");
  temp=a[0];
  for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
  for(i=0;i<n;i++)
      printf("%d",a[i]);
}

void fact()
{
    int i,f=1,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("%d",f);
 }

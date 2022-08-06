#include<stdio.h>
int a;
int square (); //function declation 1
float circle ();//function declation 2
float rect(); //function declation 3
float triangle(); //function declation 4
void main ()
{
  printf("\nGoing to calculate the area of the following : ");//make it menu driven ???????
  printf("\n-----------------------------------------------\n\n");
  printf("\t- Press 1 for - Area of square \n");
  printf("\t- Press 2 for - Area of circle \n");
  printf("\t- Press 3 for - Area of rectengle \n");
  printf("\t- Press 4 for - Area of triangle \n");
  
  printf("\tEnter your choice: ");
  scanf("%d",&a);

  if(a==1)
  {
      float area = square ();//function call 1: defining a variable in the function...
  printf("The area of square: %f\n",area);// variable declared above
  } else if(a==2)
  {
      float areac=circle();//function call 2: defining a variable in the function...
  printf ("The area of circle: %f\n", areac);  // variable declared above
  } else if(a==3)
  {
       float lb = rect(); //function call 3: defining a variable in the function...
  printf("The area of rectengle: %f\n", lb);// variable declared above 
  } else if(a==4)
  {
      float side = triangle(); //function call 4: defining a variable in the function...
  printf("The area of triangle: %f\n", side);// variable declared above */
  }

}

int square () // function defination 1
{
  int side;
  printf ("Enter the length of side in metres for square: ");
  scanf ("%d", &side);
  return side * side;
}

 float circle () // function defination 2
{
    int rad;
     printf ("\nEnter the length of radius of a circle: ");
     scanf ("%d", &rad);
     return 3.14*rad*rad; 
}

float rect() // function defination 3
{
    float length;
    printf("\nEnter length of rectengle: ");
    scanf("%f",&length);
    
    float b;
    printf("Enter breth of rectengle: ");
    scanf("%f",&b);
    return length*b;
}

float triangle() // function defination 4
{
    float sidet;
    printf("\nEnter one side of a triangle: ");
    scanf("%f",&sidet);
    
    float height;
    printf("Enter height of triangle: ");
    scanf("%f",&height);
    return 0.5*sidet*height;
}



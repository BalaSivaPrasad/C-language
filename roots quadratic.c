#include<stdio.h>
#include<math.h> 
int main()
{
int a,b,c;
float disc,root1,root2;
float img,real;
printf("ENTER VALUES FOR a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
disc=(float)b*b-4*a*c;
 if(disc>0){
    printf("THE ROOTS ARE REAL & UNEQUAL:\n");
 	root1=(-b+sqrt(disc))/(2*a);
 	root2=(-b-sqrt(disc))/(2*a);
  }
  else if(disc==0)
  {
 	printf("THE ROOTS ARE REAL AND EQUAL:\n");
 	root1=-b/(2*a);
 	root2=root1;
  }
  else
  {   
    printf("THE ROOTS ARE IMAGINARY:\n");
 	disc=-disc;
 	img=(float)disc/2*a;
 	real=(float)-b/2*a;
 	if (img>0)
 	{	
 	    printf("Root1=%f + i%f\n",real,img);
 	    printf("Root2=%f - i%f\n",real,img);
 	}
 	else
 	{	
 	    img=-img;
 	    printf("Root1=%f + i%f\n",real,img);
    	printf("Root2=%f - i%f\n",real,img);
 	}
 }
return 0;
}

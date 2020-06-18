#include<iostream.h>
#include<conio.h>
#include<math.h>
float gpsum(float a,float r,int n)
{ 
  float sum=0;
  cout<<"the numbers of the gp series are";
  for(inti=0;i<=n;i++){
  int current_term=a*pow(r,i);
  cout<<current_term<<" ";
  }
  
  
  for(i=0;i<=n;i++)
  {
   a=a*r;
   sum=sum+a;
  } 
    
 cout<<"the sum of the gp series is"<<sum;
}   
void main()
{ 
 int a,n;
 float r;
 cout<<"Input the starting term of the gp series";
 cin<<a;
 cout<<"input the no of terms of gp series";
 cin<<n;
 cout<<"input the common ratio of the gp series";
 cin<<r;
 gpsum(a,r,n);
}
 
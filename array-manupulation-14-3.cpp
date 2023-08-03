# include<iostream>
using namespace std;
int main()
{
  int array[]={3,3,4,1,4};


   for(int i=0;i<5;i++)
   {
      for(int j=i+1;j<5;j++)
      {
        if(array[i]==array[j])
        {
            array[i]=array[j]=-1 ;
        }
      }
   }
  for(int i=0;i<5;i++)
  { if(array[i]!=-1)
    {
        cout<<array[i] ;
    }
  }
return 0;
}
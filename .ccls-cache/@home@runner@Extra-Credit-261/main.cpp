#include <iostream>
using namespace std;

void DrawTriangle(int length)
{
  if(length<=0) return ;
  
  for(int space=1; space<=(20-length)/2;space++)cout<<" ";
  
  for(int star=1; star<=length;star++)cout<<"*";cout<<endl;
  
  DrawTriangle(length-2);
}

int main() 
{
  int baseLength;
  
  cin >> baseLength;
  
  DrawTriangle(baseLength);
  
  return 0;
}
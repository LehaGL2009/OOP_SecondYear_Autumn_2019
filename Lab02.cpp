#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int xA,yA;
  int xB,yB;
  int xC,yC;
  int xD,yD;
  int AB,BC,CA;
  cout<<"Введите X и Y координаты первой точки треугольника: "<<endl;
  cin>>xA>>yA;
  cout<<"Введите X и Y координаты второй точки треугольника:"<<endl;
  cin>>xB>>yB;
  cout<<"Введите X и Y координаты третьей точки треугольника: "<<endl;
  cin>>xC>>yC;
  cout<<"Введите X и Y координаты четвертой точки треугольника: "<<endl;
  cin>>xD>>yD;
  
  AB=(xA-xB)*(yD-yB)-(xD-xB)*(yA-yB);
  BC=(xD-xC)*(yD-yC)-(xD-xC)*(yB-yC);
  CA=(xC-xA)*(yD-yA)-(xD-xA)*(yC-yA);

      cout<<"result: ";
  if(AB>0&&BC>0&&CA>0)
  {
    cout<<"0"<<" ";
  }
  if(AB<0||BC<0||CA<0)
  {
    cout<<"1"<<" ";
  }
  if(AB==0||BC==0||CA==0)
  {
    cout<<"2"<<" ";
  }
  return 0;
}

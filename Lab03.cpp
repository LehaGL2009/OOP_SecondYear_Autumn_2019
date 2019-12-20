#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int xA,xB,yA,yB,X,Y;
	cout << "Введите Х и Y координаты первой точки";
	cin>>xA>>yA;
	cout << "Введите Х и Y координаты второй точки";
	cin>>xB>>yB;
	X=abs(xA-xB);
	Y=abs(yA-yB);
	while(X*Y>0)
		if(X>=Y)
			X=X%Y;
		else
			Y=Y%X;
	cout<<endl;
	if(X>0)
		cout<<X;
	if(Y>0)
		cout<<Y;
	system("pause");
	return 0;
}

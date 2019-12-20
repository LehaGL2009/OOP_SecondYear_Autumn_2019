#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
	float lat1, lon1, lat2, lon2;
	
	cout << "Введите широту первой точки в диапазоне от -90 до 90 градусов: ";
	cin >> lat1;
	cout << "Введите долготу первой точки в диапазоне от 0 до 360 градусов: ";
	cin >> lon1;
	cout << "Введите широту второй точки в диапазоне от -90 до 90 градусов: ";
	cin >> lat2;
	cout << "Введите долготу второй точки в диапазоне от 0 до 360 градусов: ";
	cin >> lon2;


	float PI = 3.14159;
	float Length = 40000;
	float R = Length / (2 * PI);
    float K = PI / 180;

	lat1 = lat1 * K;
	lon1 = lon1 * K;
	lat2 = lat2 * K;
	lon2 = lon2 * K;

	float Dist;

	Dist = R * acosf(cosf(lat1)*cosf(lat2)*cosf(lon1 - lon2) + sinf(lat1)*sinf(lat2));
	
	cout << "Кратчайший путь по поверхности сферы: " << Dist;
	return 0;
}

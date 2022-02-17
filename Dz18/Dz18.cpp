#include <iostream>
using namespace std;

inline double srAr(double num1, double num2);
int max(int num1, int num2, int num3);
float max(float num1, float num2, float num3);
double max(double num1, double num2, double num3);
template <typename T> T maxElem(T arr[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	double n, m, l;

	//Задача 1
	cout << "Задача 1\nВведите два числа: ";
	cin >> n >> m;
	cout << srAr(n, m) << "\n\n";

	//Задача 2
	cout << "Задача 2\nВведите три числа: ";
	cin >> n >> m >> l;
	cout << "Максимальное число: " << max(n, m, l) << "\n\n";

	//Задача 3
	cout << "Задача 3\nИсходый массив:\n[";
	double array1[5] = { -5, 0, -100, 4.1, 50.5 };
	for (int i = 0; i < 5; i++) 
		cout << array1[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальное значение: " << maxElem(array1, 5) << "\n\n";

	return 0;
}

//Задача 3
template <typename T> T maxElem(T arr[], int length) {
	T max = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
//Задача 2
int max(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 > num1 && num2 >= num3)
		return num2;
	else
		return num3;
}
float max(float num1, float num2, float num3) {
	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 > num1 && num2 >= num3)
		return num2;
	else
		return num3;
}
double max(double num1, double num2, double num3) {
	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 > num1 && num2 >= num3)
			return num2;
		else
			return num3;
}
//Задача 1
inline double srAr(double num1, double num2) {
	return (num1 + num2) / 2;
}
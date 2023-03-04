#include <iostream>
#include <cstdlib>
#include <ctime>
//Task 1
int sum_of(int num1, int num2=0, int num3=0, int num4=0, int num5=0) {
	return num1 + num2 + num3 + num4 + num5;
}
//Task 2
inline int ar_mean(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3;
}
//Task 3
void maxnum(int num1,int num2,int num3){
	int max = num1;
	max=max > num2 ? max : num2;
	max=max > num3 ? max : num3;
	std::cout << "max = " << max << " typename = INT";
}
void maxnum(double num1, double num2, double num3) {
	double max = num1;
	max=max > num2 ? max : num2;
	max=max > num3 ? max : num3;
	std::cout << "max = " << max << " typename = DOUBLE";
}
void maxnum(short num1, short num2, short num3) {
	short max = num1;
	max=max > num2 ? max : num2;
	max=max > num3 ? max : num3;
	std::cout << "max = " << max << " typename = SHORT";
}
//Task 4
template<typename T>
int first_num(T arr[], const int length) {
	int tmp=0;
	for (int i = 0; i < length; i++) {
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0 && arr[i] != j) {
				tmp = 0;
				break;
			}
			else
				tmp = 1;
				
			
		}
		if(tmp!=0)
		return arr[i];
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	
	
	 int num1,num2,num3,num4,num5;
	//Task 1
	std::cout << "Task 1.\nEnter from 2 to 5 numbers to calculate their sum ->";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	std::cout << "Sum of entered numbers = " << sum_of(num1, num2, num3, num4, num5)<<"\n\n";

	//Task 2
	std::cout << "Task 2.\nEnter three numbers ->";
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "ArMean of these numbers = " << ar_mean(a, b, c)<<"\n\n";
	
	//Task 3
	
	std::cout << "Task 3.\nEnter three numbers ->";
	int d, e, f;
	std::cin >> d >> e >> f;
	maxnum(d, e, f);
	
	//Task 4
	srand(time(NULL));
	std::cout << "Task 4.\nArray:\n";
	const int length = 10;
	int arr[length];
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 99 + 1;
		std::cout << arr[i] << " ";
	}
	

	if (first_num(arr, length) == length)
		std::cout << "No primes in array\n";
	std::cout << "\n"<<first_num(arr, length);

	return 0;
}
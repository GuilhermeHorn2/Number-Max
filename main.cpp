#include <iostream>
#include <cmath>



int number_max(int x,int y);

int main()
{
	 /* ?\n;||(or) e &&(and)*/


	/*int n = -10;
	std::cout << abs(n) << "\n";*/

	std::cout << number_max(-10,-100) << "\n";
	std::cout << number_max(-10,100) << "\n";
	std::cout << number_max(22,45) << "\n";

	return 0;
}


int abs(int n){

	//absolute value of n,by definition:
	return sqrt(pow(n,2));

}

int number_max(int x,int y){

	int a = x+y;
	a = a + abs(x-y);
	return a/2;


}




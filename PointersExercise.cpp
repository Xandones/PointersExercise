#include <iostream>

int main()
{
	int Number = 234;
	int *ptr = &Number;
	int *AnotherPtr = ptr;

	std::cout << "The value of variable Number is " << * ptr << "\n";
	*ptr += 1222;
	std::cout << "The new value of variable Number added to 1222 is " << *ptr << "\n";
	std::cout << "The RAM memory address of varible Number is " << &Number << " and the address of the pointer ptr is " << &ptr << "\n";
	std::cout << "The address stored inside pointer ptr is " << ptr << "\n";
	*AnotherPtr += 200;
	std::cout << "The new value of variable Number added to 200 is " << *AnotherPtr << "\n";
}
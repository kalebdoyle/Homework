# include <iostream>
int main()
{
	//booleans can only be true or false. Which are 1 and 0 respectively.
	int a, b, temp;

	a = 16;
	b = 5;

	temp = a;
	a = b;
	b = temp;

	std::cout << "the value of a: " << a << endl;
	std::cout << "the value of b: " << b << endl;
	std::cin.get();


	//in order to get input we must use the std::cin>>input where input will be what the user inputs
	//std::cout<< "display num" this will display to the output stream
	//have to display two numbers for a and b then swap them???


	return 0;
}
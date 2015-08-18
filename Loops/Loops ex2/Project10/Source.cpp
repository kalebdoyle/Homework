# include <iostream>
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
		//need to print "fizz" every 3, "Buzz" every 5, and "Fizzbuzz" every multiple of 3 and 5

	{
		if (i % 3 == 0) {
			//print "Fizz" for multiples of 3
			std::cout << "Fizz";
		}
		if (i % 5 == 0) {
			//print "Buzz" for multiples of 5
			std::cout << "Buzz";
		}
		std::cout << i << std::endl;
	}
	std::cin.get();
	return 0;
}
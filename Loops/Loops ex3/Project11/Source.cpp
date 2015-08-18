# include <iostream>
int main()
{
	int i, j, a;
	for (i = 1; i <= 1000; i++) {
		//need to find multiples of 3 and 5, and find the sum of them all together
		for (j = i % 3; i <= 1000; i += 3)
			for (a = i % 5; i <= 1000; i += 5)

				std::cout << j + a << std::endl;
	
	
	}



	std::cin.get();
	return 0;

}

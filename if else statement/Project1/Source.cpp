# include <iostream>
int main()
{
	bool cat = true;
	bool isFat = true;
	if (cat == isFat){
		//get on diet
		std::cout << "time to buy a new one";
	}
	else {
		//healthy animal
		std::cout << "nice";
	}
	std::cin.get();
	return 0;
}
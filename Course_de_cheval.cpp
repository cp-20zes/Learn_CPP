#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

	// A
	srand (time(NULL));

	int piste[6] = {0, 0, 0, 0, 0, 0};

	bool i = true;

	while(i){
		cout << "\x1B[2J\x1B[H";
		cout << "Course de chevaux. Pour faire avancer les chevaux, pressez sur ENTER\n\n";

		int rnd0 = rand() % 1;
		int rnd1 = rand() % 1;
		int rnd2 = rand() % 1;
		int rnd3 = rand() % 1;
		int rnd4 = rand() % 1;
		int rnd5 = rand() % 1;

		if 



	}

	return 0;
}
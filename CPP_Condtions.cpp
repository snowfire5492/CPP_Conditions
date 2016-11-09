/*
 *
 * Eric Schenck
 *
 * CPP conditions
 *
 */


#include <iostream>
using namespace std;

/*
 *
 * == equality test
 * != not equals
 * < less than
 * > greater than
 */

int main(){

	int value1 = 7;
	int value2 = 4;

	if(value1 > 8){
		cout << "value1 = " << value1 << endl;
	}else{
		cout << "try again" << endl;
	}

	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = value1 < 10;

	if(condition1 || condition2){
		cout << "score" << endl;
	}else{
		cout << "notscore" << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	int grade [10], highest, lowest, sum=0;
	float ave;
	
	for (int i = 0; i < 10; i++) {
		cout <<"Input grades ["<<i+1<<"] :";
		cin >> grade [i];
		sum += grade [i];
	
	}
	
	highest = lowest = grade [0];
	
	for (int g = 0; g < 10; g++){
		if (grade[g] > highest){
			highest = grade [g];
		} if (grade [g] < lowest){
			lowest = grade[g];
		}
	}
	
	ave = sum / 10;
	
	cout << "The highest grade :" << highest << endl;
	cout << "The lowest grade :" << lowest << endl;
	cout << "Average of all grades :" << ave;
	
	
	
	
	
	return 0;
}

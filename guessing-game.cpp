#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
 
int random_gen(){
	srand(time(NULL));
	int randInt;
	randInt = (rand()%100) + 1;
	return randInt;
}

int userInput(){
	int number;
	cin >> number;
	return number;
}
int main(void){
	int numberGuessed;
	int counter = 1;
	int numberGenerated;
	numberGenerated = random_gen();
	

	while(counter<=5){
		cout << "Enter number: ";
		numberGuessed = userInput();
		if(numberGuessed == numberGenerated){ cout << "You win" << endl; break;}
		else if(numberGuessed < numberGenerated){ cout << "Guess higher" << endl;}
		else if(numberGuessed > numberGenerated){ cout << "Guess lower" << endl;}
		counter++;
	}
	if(counter == 5)cout << "You lose" << endl;
	cout << "The actual number is: " << numberGenerated << endl;
	return 0;
}
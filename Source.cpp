//Chad Huntebrinker
//CS 303
//Problem 4

#include <iostream>
#include <map>
#include <string>

using namespace std;

void output_data(map<string, string> myMap);
map<string, string> change_Cali(map<string, string> myMap);
void output_user_state(map<string, string> myMap, string userInput);

int main() {

	//Declare the map stateDataMap.
	map<string, string> stateDataMap;
	string userInput;

	//Insert the states and state capitals.
	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	//Function that outputs data.
	output_data(stateDataMap);

	//Function that changes the value of California.
	stateDataMap = change_Cali(stateDataMap);

	cout << "Enter the state to see it's capital." << endl;
	cout << "States you can enter: " << endl;
	cout << "Nebraska" << endl;
	cout << "New York" << endl;
	cout << "Ohio" << endl;
	cout << "California" << endl;
	cout << "Massachusetts" << endl;
	cout << "Texas" << endl << endl;
	getline(cin, userInput);

	//Function that outputs the value of the key the user enters in.
	output_user_state(stateDataMap, userInput);




	return  0;
}

//This function outputs all the values and keys of the map.
void output_data(map<string, string> myMap) {

	cout << "Nebraska, " << myMap["Nebraska"] << endl;
	cout << "New York, " << myMap["New York"] << endl;
	cout << "Ohio, " << myMap["Ohio"] << endl;
	cout << "California, " << myMap["California"] << endl;
	cout << "Massachusetts, " << myMap["Boston"] << endl;
	cout << "Texas, " << myMap["Texas"] << endl << endl;

}

//This function changes the value of the key California.
map<string, string> change_Cali(map<string, string> myMap) {
	myMap.at("California") = "Los Angeles";
	return myMap;

}

//This function outputs the value of the key the user enters in,
//if it exists.
void output_user_state(map<string, string> myMap, string userInput) {

	//If the user's key exists in the map.
	if (myMap.find(userInput) != myMap.end()) {
		cout << myMap.at(userInput) << endl << endl;
	}

	//Else if the user's key doesn't work.
	else {
		cout << userInput << " does not exist in the map." << endl << endl;
	}
}
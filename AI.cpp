//Include required libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//Declare funtions
int isFile(string isfile);
int createUser(string name);
int addUser(string name);
bool fexists(const char *filename, string filename) {
  ifstream ifile(filename);
  return ifile;
}
//Main function
  int main() {
  int isFile;
  //Make name a string
  string name;
  //Get name from user
  cout << "Hello, Welcome to Aqua-AI, Enter name now: ";
  getline(cin, name);
  //If the file exists then add a user, else make a new file
  if (fexists("AI.dat")){
    addUser(name);
  }
  else {
    createUser(name);
  }
}
//Funtion createUser
  int createUser(string name){
  //Declare what file is
  ofstream file;
  //Make a file
  file.open("AI.dat");
  //Put the name in the file
  file << name;
  //Add a newline
  file << "\n";
  //Close the file
  file.close();
  cout << "Welcome, " << name << "." << endl;
  //End
  return 0;
  }
  
//Funtion addUser
  int addUser(string name){
  //Declare what file is
  ofstream file;
  //Make a file
  file.open("AI.dat", ios_base::app);
  //Put the name in the file
  file << name;
  //Add a newline
  file << "\n";
  //Close the file
  file.close();
  cout << "Welcome, " << name << "." << endl;
  //End
  return 0;
  }

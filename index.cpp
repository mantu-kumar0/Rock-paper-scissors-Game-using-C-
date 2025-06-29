
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class A{
public:
 int n;
 void input() {
 cin >> n;
 }
 int random() {
 for(int i=0;i<=5;i++)
 return rand() % 3;
 }
 void disp_Choice(int n) {
 switch (n) {
 case 1: cout << "Rock"; 
 break;
 case 2: cout << "Paper";
  break;
 case 3: cout << "Scissors";
  break;
 default: cout << "Invalid";
  break;
 }
 }
};
int main() {
 srand(time(0)); // generate random number at a time
 A ob;
 
 while (true) {
 
 system("cls");
 cout<<endl;
 cout<<" GAME "<<endl;
 cout<<endl;
 cout<<endl;
 cout << "1.\tStart the Game" << endl;
 cout << "2.\tExit" << endl;
 cout << "Enter the choice: ";
 int choice;
 cin >> choice;
 if (choice<1 || choice>2) {
 cout << "invalid choice!!!" << endl;
 system("pause");
 continue;
 }
 if (choice == 2) {
 exit(0);
 }
if (choice == 1){
 while (true) {
 system("cls");
 cout << "1.\tRock" << endl;
 cout << "2.\tPaper" << endl;
 cout << "3.\tScissors" << endl;
 cout << "Enter your choice: ";
 ob.input();
 int pchoice = ob.n;
 if (pchoice<1 || pchoice>3) {
 cout << "invalid choice!" << endl;
 system("pause");
 continue;
 }
 int computerChoice = ob.random();
 cout <<"You chose: ";
 ob.disp_Choice(pchoice);
 cout << endl;
 cout <<"Computer chose: ";
 ob.disp_Choice(computerChoice);
 cout << endl;
 if (pchoice==computerChoice) {
 cout<<"Match draw!!!"<<endl;
 cout<<"try Again!"<<endl;
 } else if ((pchoice==1 && computerChoice==3) ||
 (pchoice==2 && computerChoice==1) ||
 (pchoice==3 && computerChoice==2)) {
 cout <<"You win!"<<endl;
 } else {
 cout<<"Computer wins!"<<endl;
 }
 system("pause");
 break;
 }
 }
 
 }
 return 0;
}
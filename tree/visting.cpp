#include<iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct VisitingCard {
char name[50];
char phone[10];
char email[50];
};
void addCard(VisitingCard cards[], int& cardCount) {
if (cardCount < 10) {
cout << "PROGRAM MADE BY SANDEEP KUMAR"<<endl;
cout << "Enter Name: ";
cin >> cards[cardCount].name;
cout << "Enter Phone: ";
cin >> cards[cardCount].phone;
if (strlen(cards[cardCount].phone) > 10) {
cout << "Phone number cannot be more than 10 digits. Card not added." << endl;
return;
}
if (strlen(cards[cardCount].phone) < 10) {
cout << "Phone number cannot be less than 10 digits. Card not added." << endl;
return;
}
cout << "Enter Email: ";
cin >> cards[cardCount].email;
cardCount++;
cout << "Card added successfully!" << endl<<endl;
} else {
cout << "Maximum card limit reached (10 cards)." << endl;
}
}
void deleteCard(VisitingCard cards[], int& cardCount, const char* nameToDelete) {
for (int i = 0; i < cardCount; i++) {
if (strcmp(cards[i].name, nameToDelete) == 0) {
for (int j = i; j < cardCount - 1; j++) {
strcpy(cards[j].name, cards[j + 1].name);
strcpy(cards[j].phone, cards[j + 1].phone);
strcpy(cards[j].email, cards[j + 1].email);
}
cardCount--;
cout << "Card deleted successfully!" << endl<<endl;
return;
}
}
cout << "Card not found." << endl<<endl;
}
void updateCard(VisitingCard cards[], int cardCount, const char* nameToUpdate) {
for (int i = 0; i < cardCount; i++) {
if (strcmp(cards[i].name, nameToUpdate) == 0) {
cout << "Enter New Phone: ";
cin >> cards[i].phone;
if (strlen(cards[cardCount].phone) > 10) {
cout << "Phone number cannot be more than 10 digits. Card not added." << endl;
return;
}
if (strlen(cards[cardCount].phone) < 10) {
cout << "Phone number cannot be less than 10 digits. Card not added." << endl;
return;
}
cout << "Enter New Email: ";
cin >> cards[i].email;
cout << "Card updated successfully!" << endl<<endl;
return;
}
}
cout << "Card not found." << endl<<endl;
}
void searchCard(const VisitingCard cards[], int cardCount, const char* nameToSearch) {
for (int i = 0; i < cardCount; i++) {
if (strcmp(cards[i].name, nameToSearch) == 0) {
cout << "Name: " << cards[i].name << endl;
cout << "Phone: " << cards[i].phone << endl;
cout << "Email: " << cards[i].email << endl;
return;
}
}
cout << "Card not found." << endl;
}
int main() {
// clrscr();
VisitingCard cards[10];
int cardCount = 0;
int choice;
do {
cout << "Menu:" << endl<<endl;
cout << "1. Add Card" << endl;
cout << "2. Delete Card" << endl;
cout << "3. Update Card" << endl;
cout << "4. Search Card" << endl;
cout << "5. Exit" << endl<<endl;
cout << "Enter your choice: "<<endl;
cin >> choice;
switch (choice) {
case 1: {
addCard(cards, cardCount);
break;
}
case 2: {
char nameToDelete[50];
cout << "Enter Name to delete: ";
cin >> nameToDelete;
deleteCard(cards, cardCount, nameToDelete);
break;
}
case 3: {
char nameToUpdate[50];
cout << "Enter Name to update: ";
cin >> nameToUpdate;
updateCard(cards, cardCount, nameToUpdate);
break;
}
case 4: {
char nameToSearch[50];
cout << "Enter Name to search: ";
cin >> nameToSearch;
searchCard(cards, cardCount, nameToSearch);
break;
}
case 5:
cout << "Exiting program." << endl;
break;
default:
cout << "Invalid choice. Please try again." << endl;
}
} while (choice != 5);
getch();
return 0;
}
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#define MAXIMUM_SIZE 5
#define MAX_AUTHOR 5

using namespace std;
struct Book{
    int id;
    int publishedYear;
    float price;
    string isbn;
    string title;

    int authorCount;
    string author[MAX_AUTHOR];
};

int getCurrentYear(){
    time_t current_time = time(NULL);
    struct tm local_time = *localtime(&current_time);
    int currentYear = local_time.tm_year + 1900;

    return currentYear;
}

void insertBookInfo(Book books[], int size, int countStep){
    if(countStep >= size){
        cout << "THE STORAGE IS FULL! "<< endl;
    }else{
        for(int i = countStep; i < size; i++){
            // 1st book.id -> idx 0, 2nd book.id -> idx 1, check previouse idx use coutStep
            cout << "Book ID: ";
            cin >> books[i].id;
            bool isExisted = false;
            int existedId = books[i].id;
            for(int c = 0; c < countStep; c++){
                if(existedId == books[c].id){
                    cout << "THIS ID IS REALDY EXISTED!" << endl;
                    isExisted = true;
                    break;
                }
            }
            if(isExisted)break;

            cout << "Book ISBN: ";
            cin >> books[i].isbn;

            cin.ignore();
            cout << "Book Title: ";
            // cin >> books[i].title;
            getline(cin, books[i].title);

            cout << "Published year: ";
            cin >> books[i].publishedYear;
            int py = books[i].publishedYear;
            if(py < 0 || py > 2026) {
                cout << "INVALID YEAR!" << endl;
                break;
            };

            cout << "Price: ";
            cin >> books[i].price;
            if(books[i].price < 0) {
                cout << "INVALID PRICE" << endl;
                break;
            }

            cout << "Number of Author: ";
            cin >> books[i].authorCount;
            cin.ignore(); // what is cin.ingore() :  ingored unessesary type of input from the back
            for(int j = 0; j < books[i].authorCount; j++){
                cout << "Author name: ";
                getline(cin, books[i].author[j]); //what is getline : allow  user input with space;
                // getline can be input with space: manut manut -> manut manut
            }
            break;
        }
    }
}

// i used counstep for loop instead of size because if we loop through actual information rather then loop through empty arrays
void displayBookBy_isbn(Book books[],int size, string isbn, int countStep){
    //inp -> copyInfo-> tyisbn -> loopInfo -> compare -> dis
    for(int i = 0; i < countStep; i++){
        if(isbn == books[i].isbn){
            cout << "Title: " << books[i].title << endl;
            cout << "Id: " << books[i].id << endl;
            cout << "ISBN: " << books[i].isbn << endl;

            for(int j=0; j<books[i].authorCount; j++){
                cout << "Author: " << books[i].author[j] << endl;
            }
            cout << "Published: " << books[i].publishedYear << endl;
            cout << "Price: " << books[i].price << "$ " << endl;
        }else {
            cout << "THIS ISBN DOESN'T EXIST!" << endl;
            break;
        }
    }
}

void displayAllBook(Book books[], int size){
    for(int i = 0; i < size; i++){
        cout << "Title: " << books[i].title << endl;
        cout << "Id: " << books[i].id << endl;
        cout << "ISBN: " << books[i].isbn << endl;
        cout << "Author: ";
        for(int j=0; j<books[i].authorCount; j++){
            cout << books[i].author[j];
            if(j < books[i].authorCount - 1){
                cout << ", ";
            }
        }
        cout << endl << "Published: " << books[i].publishedYear << endl;
        cout << "Price: " << books[i].price << "$ " << endl << endl;
    }
}

int main(){
    Book books[MAXIMUM_SIZE];
    int countStep = 0;
    while (1)
    {
        cout << "(1) -> Add Books Information " << endl;
        cout << "(2) -> Add Diplay Book by ISBN " << endl;
        cout << "(3) -> Add Diplay All Book " << endl;
        cout << "(0) -> Exit " << endl;

        int feature;
        cin >> feature;
        cout << endl;

        if(feature == 1){
            insertBookInfo(books, MAXIMUM_SIZE,countStep);
            countStep+=1;
        }else if(feature == 2){
            string isbn;
            cout << "ISBN: ";
            cin >> isbn;
            displayBookBy_isbn(books, MAXIMUM_SIZE, isbn,countStep);
        }else if(feature == 3){
            displayAllBook(books,countStep);
        }else if(feature == 0){
            break;
        }   
    }

    return 0;
} 

// debug

//1. new input will replace the old input when we add another book info, so that mean we can only have 1 book info (solved)

//2. if author number is greater than 1, it'll display author more than 1 times. i want only one author to display. Ex: Author: SEAN Manutnithya, Pruce Banner. (solved)

//4. diplay all book info is also wrong of the debug number 1. , we have countStep for counting the information which we input.(solved)

//3. didn't handle any invalid input yet. (solved) sitll have a few invalid condintions.

//optional task
// after input invalid information instead of breaking and stopping a whole operatoin, it should re-ask for invalid input
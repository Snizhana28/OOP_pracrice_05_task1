#include "Book.h"

class BookProvider
{
public:
	
	static void Print(Book* obj)
	{
		cout << "Avtor: " << obj->avtor << endl;
		cout << "Name: " << obj->name << endl;
		cout << "Publishing house: " << obj->publishing_house << endl;
		cout << "Year: " << obj->year << endl;
		cout << "Number of books: " << obj->number_of_books << endl;
		cout << "Number of pages: " << obj->number_of_pages << endl << endl;

	}

	static void Print(Book obj)
	{
		cout << "Avtor: " << obj.avtor << endl;
		cout << "Name: " << obj.name << endl;
		cout << "Publishing house: " << obj.publishing_house << endl;
		cout << "Year: " << obj.year << endl;
		cout << "Number of books: " << obj.number_of_books << endl;
		cout << "Number of pages: " << obj.number_of_pages << endl << endl;

	}
};

#include "Book.h"

class BookProvider
{
public:
	
	static void Print(Book* obj)
	{
		cout << "Avtor: " << obj->get_avtor() << endl;
		cout << "Name: " << obj->get_name() << endl;
		cout << "Publishing house: " << obj->get_publishing_house() << endl;
		cout << "Year: " << obj->get_year() << endl;
		cout << "Number of books: " << obj->get_number_of_books() << endl;
		cout << "Number of pages: " << obj->get_number_of_pages() << endl << endl;

	}

	static void Print(Book obj)
	{
		cout << "Avtor: " << obj.get_avtor() << endl;
		cout << "Name: " << obj.get_name() << endl;
		cout << "Publishing house: " << obj.get_publishing_house() << endl;
		cout << "Year: " << obj.get_year() << endl;
		cout << "Number of books: " << obj.get_number_of_books() << endl;
		cout << "Number of pages: " << obj.get_number_of_pages() << endl << endl;

	}
};

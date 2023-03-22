#include "BookProvider.h"

class Screns
{
public:
	static void Home()
	{
		Book book("Richard Branson", "My Ryles", "Alpina", 2015, 10, 360);
		Book book_copy(book);
		book_copy.set_year(2022);
		BookProvider::Print(book.copy());
		BookProvider::Print(book_copy.copy());
	}
};
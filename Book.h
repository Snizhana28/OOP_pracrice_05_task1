#include "application_library.h"


class Book
{
public:

	string avtor;
	string name;
	string publishing_house;
	int year;
	int number_of_books;
	int number_of_pages;

	Book()
	{

	}

	Book(string avtor, string name, string publishing_house, int year,
		int number_of_books, int number_of_pages)
	{
		set_avtor(avtor);
		set_name(name);
		set_publishing_house(publishing_house);
		set_year(year);
		set_number_of_books(number_of_books);
		set_number_of_pages(number_of_pages);
	}

	inline void set_avtor(string avtor)
	{
		this->avtor = avtor;
	}
	inline string get_avtor() const
	{
		return avtor;
	}

	inline void set_name(string name)
	{
		this->name = name;
	}
	inline string get_name() const
	{
		return name;
	}

	inline void set_publishing_house(string publishing_house)
	{
		this->publishing_house = publishing_house;

	}
	inline string get_publishing_house() const
	{
		return publishing_house;
	}

	inline void set_year(int year)
	{
		this->year = year;
	}
	inline int get_year() const
	{
		return year;
	}

	inline void set_number_of_books(int number_of_books)
	{
		this->number_of_books = number_of_books;
	}
	inline int get_number_of_books() const
	{
		return number_of_books;
	}

	inline void set_number_of_pages(int number_of_pages)
	{
		this->number_of_pages = number_of_pages;
	}
	inline int get_number_of_pages() const
	{
		return number_of_pages;
	}

	Book(const Book& obj)
	{
		set_avtor(obj.avtor);
		set_name(obj.name);
		set_publishing_house(obj.publishing_house);
		set_year(obj.year);
		set_number_of_books(obj.number_of_books);
		set_number_of_pages(obj.number_of_pages);
	}
	Book(const Book*& obj)
	{
		set_avtor(obj->avtor);
		set_name(obj->name);
		set_publishing_house(obj->publishing_house);
		set_year(obj->year);
		set_number_of_books(obj->number_of_books);
		set_number_of_pages(obj->number_of_pages);
	}

	Book* copy() const
	{
		return new Book(get_avtor(), get_name(), get_publishing_house(), get_year(),
			get_number_of_books(), get_number_of_pages());
	}

};
#pragma once

#include <vector>
#include "Book.h"

class Library {
private:
	std::vector<Book> books;

public:
	void addBook(std::string title, std::string author);

	void showAllBooks();
};
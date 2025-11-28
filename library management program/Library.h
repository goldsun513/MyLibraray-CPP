#pragma once

#include "Book.h"
#include <fstream>

struct Node {
	Book data;
	Node* next;

	Node(std::string t, std::string a) : data(t, a), next(nullptr){}
};

class Library {
private:
	Node* head;

public:
	Library();
	~Library();

	void addBook(std::string title, std::string author);

	void showAllBooks();

	void searchBook(std::string title);

	void saveBooks();

	void loadBooks();

};


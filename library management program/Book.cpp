#include "Book.h"
#include <iostream>

Book::Book(std::string t, std::string a) {
	title = t;
	author = a;
	isBorrowed = false;
}

std::string Book::getTitle() const {
	return title;
}

std::string Book::getAuthor() const {
	return author;
}

bool Book::getIsBorrowed() const {
	return isBorrowed;
}

void Book::borrowBook() {
	if (isBorrowed) {
		std::cout << "이미 대출 중인 책입니다." << "\n";
	}
	else {
		isBorrowed = true;
		std::cout << "대출이 완료되었습니다." << "\n";
	}
}

void Book::returnBook() {
	isBorrowed = false;
	std::cout << "반납이 완료되었습니다." << "\n";
}

void Book::printInfo() const {
	std::cout << "------------------------" << "\n";
	std::cout << "제목: " << title << "\n";
	std::cout << "저자: " << author << "\n";
	std::cout << "상태: " << (isBorrowed ? "대출 중" : "대출 가능") << "\n";
	std::cout << "------------------------" << "\n";
}
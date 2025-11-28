#pragma once
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
	std::string title;  //책 제목
	std::string author; // 저자
	bool isBorrowed; // 대출 상태(true 시 대출 중)

public:
	Book(std::string t, std::string a);

	std::string getTitle() const;
	std::string getAuthor() const;
	bool getIsBorrowed() const;

	void borrowBook(); //대여
	void returnBook(); //반납
	void printInfo() const; //정보 출력
};


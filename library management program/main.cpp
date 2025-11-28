// main.cpp
#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library myLib; // 도서관 생성

    // 1. 책 등록
    myLib.addBook("자료구조", "이컴공");
    myLib.addBook("C++ 기초", "김코딩");

    // 2. 목록 확인
    myLib.showAllBooks();

    return 0;
}
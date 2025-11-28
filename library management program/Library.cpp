#include "Library.h"
#include <iostream>

Library::Library() {
	head = nullptr;
}

void Library::addBook(std::string title, std::string author) {
	// 1. 새 노드(기차 칸) 만들기 (동적 할당)
	Node* newNode = new Node(title, author);

	// 2. 만약 리스트가 비어있다면?
	if (head == nullptr) {
		head = newNode; // 새 노드가 곧 대장이 된다.
	}
	// 3. 비어있지 않다면? (맨 끝을 찾아가자)
	else {
		Node* temp = head;

		// 다음 칸이 없을 때까지(nullptr) 계속 이동
		while (temp->next != nullptr) {
			temp = temp->next; // 다음 칸으로 이동
		}

		// 맨 끝에 도착했으니 새 노드 연결!
		temp->next = newNode;
	}

	std::cout << "['" << title << "'] 등록 완료 (Linked List)" << "\n";
}

void Library::showAllBooks() {
	if (head == nullptr) {
		std::cout << "등록된 책이 없습니다.\n";
		return;
	}
	Node* temp = head;
	while (temp != nullptr) { 
		temp->data.printInfo();
		temp = temp->next;
	}
}

void Library::searchBook(std::string title) {
	bool isFound = false;
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->data.getTitle() != title) {
			std::cout << "\n[검색 성공!]" << "\n";
			temp->data.printInfo(); 
			isFound = true;
			break;
			
		}
		temp = temp->next;
		if (!isFound) {
			std::cout << "\nError: '" << title << "' 책을 찾을 수 없습니다." << "\n";
		}
		
	}
}

Library::~Library() {
	Node* temp = head;
	while (temp != nullptr) {
		Node* nextNode = temp->next;
		delete temp;
		temp = nextNode;
	}
	std::cout << "도서관 폐관 : 모든 책을 정리했습니다.\n";
}
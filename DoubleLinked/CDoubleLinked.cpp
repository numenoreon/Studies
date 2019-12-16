#include "CDoubleLinked.h"
#include <iostream>

CDoubleLinked::CDoubleLinked() : sz(0) {
	head = tail = nullptr;
}

CDoubleLinked::CDoubleLinked(int d) : sz(1) {
	head = new CNode(d);
	tail = head;
}

CDoubleLinked::~CDoubleLinked() {
	while (head) {
		CNode* temp = head;
		head = head->giveNext();
		delete temp;
	}
}

void CDoubleLinked::showFront()
{
	CNode* temp = head;
	while (temp)
	{
		std::cout << temp->get() << " ";
		temp = temp->giveNext();
	}
	std::cout << std::endl;
}

void CDoubleLinked::showBack()
{
	CNode* temp = tail;
	while (temp)
	{
		std::cout << temp->get() << " ";
		temp = temp->givePrev();
	}
	std::cout << std::endl;
}

void CDoubleLinked::addFront(int d) {

	if (!head){
		head = new CNode(d);
		tail = head;
		++sz;
	}
	else {
		CNode* temp = new CNode(d);
		temp->setNext(head);
		head->setPrev(temp);
		head = temp;
		++sz;
	}
}

void CDoubleLinked::deleteFront() {
	
	if (head == tail && head!=nullptr)
	{
		CNode* temp = head;
		delete temp;
		head = tail = nullptr;
		--sz;
	}
	else if (head) {
		CNode* temp = head;
		head = head->giveNext();
		head->setPrev(nullptr);
		delete temp;
		--sz;
	}
}

void CDoubleLinked::addBack(int d) {
	if (!head) {
		head = new CNode(d);
		tail = head;
		++sz;
	}
	else {
		CNode* temp = new CNode(d);
		temp->setPrev(tail);
		tail->setNext(temp);
		tail = temp;
		++sz;
	}
}

void CDoubleLinked::deleteBack() {
	if (head == tail && head != nullptr)
	{
		CNode* temp = head;
		delete temp;
		head = tail = nullptr;
		--sz;
	}
	else if (head) {
		CNode* temp = tail;
		tail = tail->givePrev();
		tail->setNext(nullptr);
		delete temp;
		--sz;
	}
}

void CDoubleLinked::addData(int d, int p) {
	if (p >= sz) {
		addBack(d);
	}
	else {
		CNode* temp = head;
		while (--p) {
			temp = temp->giveNext();
		}
		CNode* temp2 = temp->giveNext();
		temp->setNext(new CNode(d));
		temp->giveNext()->setPrev(temp);
		temp->giveNext()->setNext(temp2);
		temp2->setPrev(temp->giveNext());
	}
}

void CDoubleLinked::deleteData(int d) {
	if (head) {
		if (head->get() == d) {
			deleteFront();
		}
		else {
			CNode* temp = head;
			while (temp->get() != d)
			{
				temp = temp->giveNext();
				if (temp==nullptr) break;
			}
			if (temp!=nullptr) {
				CNode* temp2 = temp;
				temp->givePrev()->setNext(temp->giveNext());
				temp->giveNext()->setPrev(temp->givePrev());
			}
		}
	}
}

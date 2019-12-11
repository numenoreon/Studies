#include "CDoubleLinked.h"
#include <iostream>

CDoubleLinked::CDoubleLinked() {
	head = tail = nullptr;
}

CDoubleLinked::CDoubleLinked(int d)
{
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
	}
	else {
		CNode* temp = new CNode(d);
		temp->setNext(head);
		head->setPrev(temp);
		head = temp;
	}
}

void CDoubleLinked::deleteFront() {
	if (head) {
		CNode* temp = head;
		head = head->giveNext();
		head->setPrev(nullptr);
		delete temp;
	}
}

void CDoubleLinked::addBack(int d) {
	if (!head) {
		head = new CNode(d);
		tail = head;
	}
	else {
		CNode* temp = new CNode(d);
		temp->setPrev(tail);
		tail->setNext(temp);
		tail = temp;
	}
}

void CDoubleLinked::deleteBack() {
	if (head) {
		CNode* temp = tail;
		tail = tail->givePrev();
		tail->setNext(nullptr);
		delete temp;
	}
}

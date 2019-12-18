#pragma once
#include "CNode.h"
#include <iostream>

template <class T>
class CDoubleLinked
{
		CNode <T> * tail, * head;
		unsigned int sz;
	public:
		CDoubleLinked() : sz(0) {
			head = tail = nullptr;
		}

		CDoubleLinked(T d) : sz(1) {
			head = new CNode<T>(d);
			tail = head;
		}

		~CDoubleLinked() {
			while (head) {
				CNode<T>* temp = head;
				head = head->giveNext();
				delete temp;
			}
		}

		void showFront()
		{
			CNode<T>* temp = head;
			while (temp)
			{
				std::cout << temp->get() << " ";
				temp = temp->giveNext();
			}
			std::cout << std::endl;
		}

		void showBack()
		{
			CNode* temp = tail;
			while (temp)
			{
				std::cout << temp->get() << " ";
				temp = temp->givePrev();
			}
			std::cout << std::endl;
		}

		void addFront(T d) {

			if (!head) {
				head = new CNode<T>(d);
				tail = head;
				++sz;
			}
			else {
				CNode<T>* temp = new CNode<T>(d);
				temp->setNext(head);
				head->setPrev(temp);
				head = temp;
				++sz;
			}
		}

		void deleteFront() {

			if (head == tail && head != nullptr)
			{
				CNode<T>* temp = head;
				delete temp;
				head = tail = nullptr;
				--sz;
			}
			else if (head) {
				CNode<T>* temp = head;
				head = head->giveNext();
				head->setPrev(nullptr);
				delete temp;
				--sz;
			}
		}

		void addBack(T d) {
			if (!head) {
				head = new CNode<T>(d);
				tail = head;
				++sz;
			}
			else {
				CNode <T>* temp = new CNode<T>(d);
				temp->setPrev(tail);
				tail->setNext(temp);
				tail = temp;
				++sz;
			}
		}

		void deleteBack() {
			if (head == tail && head != nullptr)
			{
				CNode <T>* temp = head;
				delete temp;
				head = tail = nullptr;
				--sz;
			}
			else if (head) {
				CNode <T>* temp = tail;
				tail = tail->givePrev();
				tail->setNext(nullptr);
				delete temp;
				--sz;
			}
		}

		void addData(T d, unsigned int p) {
			if (p >= sz) {
				addBack(d);
			}
			else {
				CNode<T>* temp = head;
				while (--p) {
					temp = temp->giveNext();
				}
				CNode<T>* temp2 = temp->giveNext();
				temp->setNext(new CNode<T>(d));
				temp->giveNext()->setPrev(temp);
				temp->giveNext()->setNext(temp2);
				temp2->setPrev(temp->giveNext());
			}
		}

		void deleteData(T d) {
			if (head) {
				if (head->get() == d) {
					deleteFront();
				}
				else {
					CNode <T>* temp = head;
					while (temp->get() != d)
					{
						temp = temp->giveNext();
						if (temp == nullptr) break;
					}
					if (temp != nullptr) {
						CNode <T>* temp2 = temp;
						temp->givePrev()->setNext(temp->giveNext());
						temp->giveNext()->setPrev(temp->givePrev());
					}
				}
			}
		}

};


#pragma once
#include "CNode.h"

class CDoubleLinked
{
		CNode* tail, * head;
		int sz;
	public:
		CDoubleLinked();
		CDoubleLinked(int d);
		~CDoubleLinked();
		void showFront();
		void showBack();
		void addFront(int d);
		void deleteFront();
		void addBack(int d);
		void deleteBack();
		void deleteData(int d);
		void addData(int d, int p);

};


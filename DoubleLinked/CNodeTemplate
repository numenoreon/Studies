#pragma once

template <class T>
class CNode
{
	T data;
	CNode* next, * prev;

public:

	CNode(T d) : data(d)
	{
		prev = nullptr;
		next = nullptr;
	}
	
	CNode(T d, CNode* p, CNode* n) : data(d) {
		prev = p;
		next = n;
	}

	~CNode() {}

	void set(T d) {
		data = d;
	}

	T get() {
		return data;
	}

	CNode* givePrev() {
		return prev;
	}

	CNode* giveNext() {
		return next;
	}

	void setNext(CNode* temp) {
		next = temp;
	}

	void setPrev(CNode* temp) {
		prev = temp;
	}
};


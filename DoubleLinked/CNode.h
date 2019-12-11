#pragma once

class CNode
{
	int data;
	CNode * next, * prev;

public:
	CNode(int d);
	CNode(int d, CNode* p, CNode* n);
	~CNode() = default;
	void set(int d);
	int get();
	CNode* givePrev();
	CNode* giveNext();
	void setNext(CNode* temp);
	void setPrev(CNode* temp);
};


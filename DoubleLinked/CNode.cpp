#include "CNode.h"

	CNode::CNode(int d) : data(d)
	{
		prev = nullptr;
		next = nullptr;
	}

	CNode::CNode(int d, CNode* p, CNode* n) : data(d) {
		prev = p;
		next = n;
	}

	void CNode::set(int d) {
		data = d;
	}

	int CNode::get() {
		return data;
	}

	CNode * CNode::givePrev() {
		return prev;
	}

	CNode * CNode::giveNext() {
		return next;
	}

	void CNode::setNext(CNode * temp) {
		next = temp;
	}

	void CNode::setPrev(CNode * temp) {
		prev = temp;
	}
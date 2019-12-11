#include "CDoubleLinked.h"

int main()
{
	CDoubleLinked dL;
	dL.addFront(1);
	dL.addFront(2);
	dL.addBack(3);
	dL.showFront();
	dL.deleteFront();
	dL.showFront();
	dL.addFront(15);
	dL.addFront(4);
	dL.addBack(19);
	dL.showFront();
	dL.deleteBack();
	dL.showFront();
	dL.addBack(23);
	dL.showFront();
	dL.showBack();
	return 0;
}
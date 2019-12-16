#include "CDoubleLinked.h"

int main()
{
	CDoubleLinked dL;
	dL.addFront(1);
	dL.deleteBack();
	dL.addBack(4);
	dL.addBack(43);
	dL.addFront(21);
	dL.addBack(14);
	dL.addFront(15);
	dL.showFront();
	dL.addData(69, 3);
	dL.showFront();
	dL.deleteBack();
	dL.addBack(56);
	dL.addBack(11);
	dL.addFront(90);
	dL.showFront();
	dL.deleteData(21);
	dL.showFront();
	dL.addData(77, 3);
	dL.addBack(104);
	dL.addFront(81);
	dL.showFront();
	dL.deleteData(1001);
	return 0;
}

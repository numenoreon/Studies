#include "CDoubleLinked.h"
#include "CPerson.h"

int main()
{
	CDoubleLinked <CPerson> dL;
	dL.addBack(CPerson("One", "Two", 69));
	dL.addBack(CPerson("Three", "Six", 1));
	dL.showFront();
	return 0;
}

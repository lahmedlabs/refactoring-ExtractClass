#include "main.h"
#include "Book.h"
#include "BookRF.h"

int main() {
	Book refactoring = Book(
		"Refactoring", "ISBN0011223344", "$44.99", "Martin Fowler", "fowler@acm.org");
		cout << refactoring.toXml() << endl;
		/* */
	BookRF refactoringRf = BookRF(
			"Refactoring", "ISBN0011223344", "$44.99", "Martin Fowler", "fowler@acm.org");
		cout << refactoringRf.toXml() << endl;
	return 0;

}
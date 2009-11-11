// Создать объект GradeBook, ввести оценки и вывести отчет.
#include "6.3_GradeBook.h"	

int main()
{
	// создать объект GradeBook
	GradeBook myGradeBook( "Программирование на С++" );

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	return 0;
}

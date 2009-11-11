// определения элемент-функций класса GradeBook, который
// определяет максимум из трех значений.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "6.3_GradeBook.h"	// включить определение класса GradeBook

// конструктор инициалзирует courseName переданной строкой;
// инициализирует нулем maximumGrade
GradeBook::GradeBook( string name )
{
	setCourseName( name );	// проверить и сохранить courseName
	maximumGrade = 0;	// будет замещаться максимальной оценкой
}	// конец конструктора GradeBook

// функция для установки названия курса - не более 25 символов
void GradeBook::setCourseName( string name )
{
	if( name.length() <= 25 )
		courseName = name;
	else
	{
		courseName = name.substr( 0, 25 );
		cout << "Name\"" << name << "\" exceeds maximum length (25).\n"
		<< "Limiting courseName to first 25 characters. \n" << endl;
	}	// конец if...else
}

// функция для извлечения названия курса
string GradeBook::getCourseName()
{
	return courseName;
}

// выводим приветы
void GradeBook::displayMessage()
{
	// этот оператор вызывает getCourseName, чтобы получить
	// название курса, представленного данным GradeBook
	cout << "Welcome to the grade book for\n " << getCourseName()
	<< "!\n" << endl;
}

// определяем максимум
void GradeBook::inputGrades()
{
	int grade1, grade2, grade3;
	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3;

	// сохранить максимум в элементе studentMaximum
	maximumGrade = maximum( grade1, grade2, grade3 );
}

// возвращает наибольший из 3 своих параметров
int GradeBook::maximum( int x, int y, int z )
{
	int maximumValue = x;	// предположить, что x - наибольший

	// определить, не является ли y большим maximumValue
	if ( y > maximumValue )
		maximumValue = y;

	if ( z > maximumValue)
		maximumValue = z;

	return maximumValue;
}

// вывести отцет по оценкам
void GradeBook::displayGradeReport()
{
	// вывести максимум введенных оценок
	cout << "Maximum of grades entered: " << maximumGrade << endl;
}

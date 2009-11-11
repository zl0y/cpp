// Класс GradeBook, находящий наибольшую из трех оценок
// Элемент-функции определеяются в GradeBook.cpp

#include <string>	// программа использует стандартный класс sting
using std::string;

// определение класса GradeBook
class GradeBook
{
public:
	GradeBook( string );	// конструктор инициализирует название курса
	void setCourseName( string );	// функция для установки названия
	string getCourseName();	// функция для извлечения названия курса
	void displayMessage();	// вывести приветственное сообщение
	void inputGrades();	// получить от юзера три оценки
	void displayGradeReport();	// вывести отчет по введенным оценкам
	int maximum( int, int, int );	// определить максимум из 3 целых

private:
	string courseName;	// название курса
	int maximumGrade;	// максимум из 3 значений
};	// конец класса GradeBook

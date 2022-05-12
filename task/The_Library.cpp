﻿/*
	Разработать программу «Библиотека». Определить структуру «Книга»
(название, автор, издательство, год издания, жанр). Реализовать для этой
программы следующие возможности.
	 Добавление книг;
	 Печать всех книг;
	 Удаление книги по указанному критерию;
	 Редактирование книги;
	 Поиск книг по автору;
	 Поиск книги по названию;
	 Сортировка книг по названию;
	 Сортировка книг по автору;
	 Сортировка книг по издательству.
	Важно понимать следующее. Программа должна хранить не одномерный
динамический массив книг, а одномерный динамический массив указателей
на книги.
*/
/*
НЕ РАБОТАЕТ

3:07:50
*/

#include <iostream>
#include <windows.h>
#include "lib.h"
#include <conio.h>

int main()
{
	SetConsoleCP(1251);
	/*
	Задает кодовую страницу ввода, используемую консолью, связанной с вызывающим процессом.
	Консоль использует страницу входного кода для преобразования ввода с клавиатуры
	в соответствующее символьное значение.
	*/
	SetConsoleOutputCP(1251);
	/*
	Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом.
	Консоль использует свою кодовую страницу вывода для преобразования символьных значений,
	записанных различными функциями вывода, в изображения, отображаемые в окне консоли.
	*/
	ArrayBooks b;
	memset(&b, 0, sizeof(ArrayBooks));
	b.Block = 10;
	char menu[][50] = {
		"1. Добавление книг", // Готово
		"2. Печать всех книг", // Готово
		"3. Удаление книги по указанному критерию", // Готово
		"4. Редактирование книги", // Готово
		"5. Поиск книг по автору" , // Готово
		"6. Поиск книги по названию" , // Готово
		"7. Сортировка книг по названию" ,
		"8. Сортировка книг по автору" ,
		"9. Сортировка книг по издательству" };
	while (true)
	{
		system("cls");
		Menu(menu, 9);
		int choice = _getch();
		switch (choice)
		{
		case '1':
			AddBooks(b);
			break;
		case '2':
			PrintHeaderBooks();
			PrintBooks(b);
			break;
		case '3':
			RemoveBookBySpecCriteria(b);
			break;
		case '4':
			EditBook(b);
			break;
		case '5':
			SearchBookByAuthor(b);
			break;
		case '6':
			BookSearchByTitle(b);
			break;
		case '7':
			SortBooksByTitle(b);
			break;
		case '8':
			SortBooksByAuthor(b);
			break;
		case '9':
			SortBooksByPublisher(b);
			break;
		}
	}

	return 0;
}
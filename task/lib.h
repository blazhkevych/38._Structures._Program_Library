#pragma once

struct Book
{
	char title[100]; // название книги
	char author[100]; // автор книги
	char publishingHouse[100]; // издательство книги
	int yearOfPublishing; // год издания книги
	char genre[100]; // жанр книги
};

struct ArrayBooks
{
	Book** PtrBook;
	int Size; // Реальный размер массива (заполненные ячейки и пустые ячейки), кратен размеру блока
	int Count; // Фактическое количество ячеек с добавленными данными
	int Block; // Размер добавляемого блока
};

//Вывод сообщения на русском
void RussianMessage(const char* str);

// Меню
void Menu(char ptr[][50], int row);

// Ввод данных о книге
void InputData(Book* st);

// Добавление книги в массив
void AddBooks(ArrayBooks& b);

// Удаление книги
void RemoveBookBySpecCriteria(ArrayBooks& b);

// Редактирование книги
void EditBook(ArrayBooks& b);

// Вывод книг на экран
void PrintBooks(ArrayBooks& b);

// Удаление книги
void Destroy(ArrayBooks& b);
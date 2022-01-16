﻿#pragma once

#include <iostream>

using namespace std;

/*!
	\brief Класс реализации списка.

	В данном классе описана реализация вектора.

	1. int* arr - указатель на массив значений типа int вектора.
	2. size_t size_vector - значение типа size_t количества элементов вектора.
*/

class vector
{
private:

	vector(const vector&) = delete;


	vector& operator=(const vector&) = delete;


	vector(vector&&) = delete;


	vector& operator=(const vector&&) = delete;

	int* arr;
	size_t size_vector;
	size_t capacity;

	friend ostream& operator<< (ostream& os, vector& vec);

public:

	/*!
		\brief Конструктор по умолчанию

		В данном конструкторе иницилизируется массив
		Размер вектора равен 0
	*/
	vector();

	/*!
		\brief Деструктор по умолчанию

		Освобождает память
	*/
	~vector();

	/*!
		\brief Метод вывода размера вектора
		\return size_vector - переменная типа size_t количества элементов вектора

		Выводит количество элементов вектора
	*/

	const size_t size();

	/*!
		\brief Метод вывода максимального размера вектора
		\return capacity - переменная типа size_t количества элементов вектора

		Выводит количество элементов вектора
	*/

	const size_t max_size();
	/*!
		\brief Метод удаления значения вектора

		Данный метод удаляет текущие значения вектора.
	*/

	void clear();
	/*!
		\brief Метод выделения памяти

		Данный метод выделяет запасную память для вектора.
	*/

	void add_memory();

	/*!
		\brief Метод добавления нового элемента в вектор
		\param[in] const int value - значение которое
		будет хранить добавленный элемент вектора

		Элемент добавляется в конец вектора

		В данном методе учтены ситуации:
		- Отсутствие элементов вектора
		- Присутствие элементов вектора
	*/

	void add_item(const int value);

	/*!
		\brief Метод удаления элемента в векторе
		\param[in] size_t index - номер элемента
		который нужно удалить

		В данном методе учтены ситуации:
		- требуется удалить единственный элемент в списке.
		- требуется удалить элемент любого номера из списка.
		- требуется удалить последний элемент из списка.
	*/

	void remove_item(const size_t index);

	/*!
		\brief Метод добавления элемента в вектор
		\param[in] size_t index - номер элемента
		которой требуется внести
		\param[in] const int value - значение
		для хранения в элементе

	*/

	void insert_item(size_t index, const int value);

	/*!
		\brief Метод изменения значения элемента в векторе
		\param[in] size_t index - номер элемента
		который хотим поменять местами
		\param[in] size_t new_index - номер элемента
		с которым меняем местами

		В данном методе учтены ситуации:
		- обращение к не существующим элементам

	*/

	void swap(const size_t index, const size_t new_index);

	int& operator[](const size_t index) {
		return arr[index];
	}

	const int& operator[](const size_t index) const {
		return arr[index];
	}

};


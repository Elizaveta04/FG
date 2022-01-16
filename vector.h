#pragma once

#include <iostream>

using namespace std;

/*!
	\brief ����� ���������� ������.

	� ������ ������ ������� ���������� �������.
	
	1. int* arr - ��������� �� ������ �������� ���� int �������.
	2. size_t size_vector - �������� ���� size_t ���������� ��������� �������.
	3. size_t capacity_vector - �������� ���� size_t ���������� ������ ��� ��������� �������.
*/

class vector
{
	int* arr;
	size_t size_vector;
	size_t capacity_vector;
	

	public:
	
	/*!
		\brief ����������� �� ���������

		� ������ ������������ ��������������� ������
		������ ������� ����� 0
		�������� ������ ��� 1 ��������
	*/
	vector();

	/*!
		\brief ���������� �� ���������

		����������� ������
	*/
	~vector();

	/*!
		\brief ����� ������ ������� �������
		\return size_vector - ���������� ���� size_t ���������� ��������� ������� 

		������� ���������� ��������� �������
	*/

	const size_t size();

	/*!
		\brief ����� ������ ������ ������� 

		� ������ ������ ������ ��������:
		- ���������� ��������� �������
		- ����������� ��������� �������
	*/

	void read();

	/*!
		\brief ����� ��������� ������

		������ ����� �������� �������� ������ ��� �������. 
	*/
	void add_memory();

	/*!
		\brief ����� ���������� ������ �������� � ������
		\param[in] const int value - �������� �������
		����� ������� ����������� ������� �������

		������� ����������� � ����� �������

		� ������ ������ ������ ��������:
		- ���������� ��������� �������
		- ����������� ��������� �������
	*/
	
	void add_item(const int value);

	/*!
		\brief ����� �������� �������� � �������
		\param[in] size_t index - ����� ��������
		������� ����� �������

		� ������ ������ ������ ��������:
		- ��������� ������� ������������ ������� � ������.
		- ��������� ������� ������� ������ ������ �� ������.
	    - ��������� ������� ��������� ������� �� ������.
	*/
	 
	void remove_item(size_t index);

	/*!
		\brief ����� ��������� �������� �������� � �������
		\param[in] size_t index - ����� ��������
		� ������� ��������� ��������� ��������
		\param[in] const int value - ����� ��������
		��� �������� � ��������

	*/
	
	void update_item(size_t index, const int value);

	/*!
		\brief ����� ��������� �������� �������� � �������
		\param[in] size_t index - ����� �������� 
		������� ����� �������� �������
		\param[in] size_t new_index - ����� ��������
		� ������� ������ �������

		� ������ ������ ������ ��������:
		- ��������� � �� ������������ ���������

	*/

	void swap(size_t index, size_t new_index);
};
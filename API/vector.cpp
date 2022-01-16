#include "vector.h"

vector::vector() {
	arr = new int[1], size_vector = 0, capacity = 1;
};

vector::~vector() {
	delete[] arr;
	size_vector = 0;
	capacity = 0;
};

const size_t vector::size() {
	return size_vector;
};

const size_t vector::max_size() {
	return capacity;
};

void vector::add_memory() {
	capacity = capacity * 2;
	int* temp = arr;
	arr = new int[capacity];
	for (size_t i = 0; i < size_vector; i++) {
		arr[i] = temp[i];
	}
	delete[] temp;
};

void vector::clear() {
	size_vector = 0;
}

void vector::add_item(const int value) {
	if (size_vector >= capacity) add_memory();
	arr[size_vector++] = value;
};

void vector::remove_item(const size_t index) {
	for (size_t i = index + 1; i < size_vector; ++i) {
		arr[i - 1] = arr[i];
	}
	size_vector -= 1;
};

void vector::insert_item(const size_t index, const int value) {
	if (index <= size_vector) {
		if (size_vector >= capacity) add_memory();
		size_vector += 1;
		for (size_t i = size_vector - 1; i > index; i--) {
			arr[i] = arr[i - 1];
		}
		arr[index] = value;
	}
};

void vector::swap(const size_t index, const size_t new_index) {
	if (index <= size_vector && new_index <= size_vector) {
		int temp = arr[index];
		arr[index] = arr[new_index];
		arr[new_index] = temp;
	}

};

ostream& operator<< (ostream& os, vector& vec) {
	for (size_t i = 0; i < vec.size(); i++) os << vec[i] << " ";
	return os;
}
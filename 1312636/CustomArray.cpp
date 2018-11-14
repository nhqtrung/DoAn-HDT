#include "pch.h"
#include "CustomArray.h"

template <class T>
CustomArray<T>::CustomArray(int m_N)
{
	this->N = m_N;
	this->arr = new T[3 * this->N];
	this->lowerBound = &arr[0];
	this->begin = &arr[this->N];
	this->end = &arr[2 * this->N];
	this->upperBound = &arr[3 * this->N - 1];
}

template <class T>
CustomArray<T>::CustomArray(int m_N, T defaultValue)
{
	this->N = m_N;
	this->arr = new T[3 * this->N];
	this->lowerBound = &arr[0];
	this->begin = &arr[this->N];
	this->end = &arr[2 * this->N];
	this->upperBound = &arr[3 * this->N - 1];
	for (int i = 0; i < this->N; i++)
	{
		arr[this->N + i] = defaultValue;
	}
}

template <class T>
void CustomArray<T>::printArr()
{
	for (int i = 0; i < this->N; i++)
	{
		std::cout << arr[this->N + i];
	}
	std::cout << " " << std::endl;
}

template <class T>
void CustomArray<T>::setDefaultValue(T defaultValue)
{
	for (int i = 0; i < this->N; i++)
	{
		arr[this->N + i] = defaultValue;
	}
}

template <class T>
CustomArray<T>::CustomArray()
{

}

template <class T>
CustomArray<T>::~CustomArray()
{
}

template <class T>
CustomArray<T>::CustomArray(const CustomArray& t)
{
	this->arr = new T;
	*arr = t.arr;
}

template <class T>
CustomArray<T>& CustomArray<T>::operator=(CustomArray& t)
{
	this->arr = new T;
	*this->arr = *t.arr;
	return this;
}


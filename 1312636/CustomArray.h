template <class T>
class CustomArray
{
private:
	int N;
	T *lowerBound, *begin, *end, *upperBound, *arr;
public:
	CustomArray(int m_N);
	CustomArray(int m_N, T defaultValue);
	CustomArray(const CustomArray& customArray);
	CustomArray();
	~CustomArray();
	void setDefaultValue(T defaultValue);
	void printArr();
	CustomArray& operator=(CustomArray& t);
};


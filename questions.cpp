#include <vector>
#include <iostream>
using std::cout;

//59 page
int findK(int arr[14]) {
	int count = 0;
	for (int i = 0; i < 14; i++)
	{
		if (arr[i] % 2 == 0)
			count++;
	}
	return count;
}
void index5(int arr[12]) {
	if (12 < 5)
		return ;
	int mijin = 0;
	int i = 0;
	for (; i < 12; i++)
	{
		mijin += arr[i];
	} 
	arr[5] = mijin / i;
}
int moreMijin(int arr[11]) {
	int mijin = 0;
	int i = 0;
	for (; i < 11; i++)
	{
		mijin += arr[i];
	}
	mijin /= i;
	i = 0;
	int count = 0;
	for (; i < 11; i++)
	{
		if (arr[i] > mijin)
			count++;
		
	}
	return count;
}
void changeMax(int arr[10]) {
	int max = 0;
	for (int i = 1; i < 10; i++)
	{
		if (arr[max] < arr[i])
			max = i;
	}
	int tmp = arr[max];
	arr[max] = arr[0];
	arr[0] = tmp;
}
int* changeMaxMin(int arr[9]) {
	int max = 0;
	int min = 0;
	for (int i = 1; i < 9; i++)
	{
		if (arr[max] < arr[i])
			max = i;
		if (arr[min] > arr[i])
			min = i;
	}
	int tmp = arr[max];
	arr[max] = arr[min];
	arr[min] = tmp;
	return arr;
}
void whatIsMore(int arr[20]) {
	int z = 0, k = 0;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] % 2 == 0)
			z++;
		else
			k++;
	}
	std::cout << (z > k ? "zuyg" : "kent");
}



//61 page
int* twoArrays(int a1[10], int a2[10]) {
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			array[i] = a1[i + 1];
		else
			array[i] = a2[i - 1];
	}
	return array;
}
int* sec(int arr[8]) {
	int* a = new int[8];
	for (int i = 0; i < 8; i++)
	{
		a[i] = arr[i] % 10;
	}
	return a;
}
int sum(int arr[17]) {
	int s = 0;
	for (int i = 0; i < 17; i++)
	{
		s += arr[i];
	}
	return s;
}
int* twoArrSort(int a1[9], int a2[7]) {
	int* arr = new int[16];
	for (int i = 0; i < 9; i++)
	{
		arr[i] = a1[i];
	}
	for (int i = 0; i < 7; i++)
	{
		arr[i + 9] = a2[i];
	}
	for (int i = 0; i < 16-1; i++)
	{
		for (int j = i+1; j < 16; j++)
		{
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	return arr;
}
std::vector<int> repeatNums(int a1[10], int a2[10]) {
	std::vector<int> arr;
	if (a1[0] == a2[0])
	{
		arr.push_back(a1[0]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (a1[i] == a2[j]) {
				bool t = true;
				for (int o = 0; o < arr.size(); o++)
				{
					if (a1[i] == arr[o]) {
						t = false;
					}
				}
				if (t) {
					arr.push_back(a1[i]);
				}
			}
		}
	}
	return arr;
}
void byFormula(int arr[12]) {
	int y[12];
	int sum = 0;
	int i = 0;
	for (; i < 12; i++)
	{
		y[i] = (int)(i * -2 * i + 19.3 * cos(i));
		sum += y[i];
	}
	sum /= i;
	int y2[12];
	i = 0;
	for (int j = 0; j < 12; j++)
	{
		std::cout << y[j] << ',';
	}
	std::cout << "\n\n\n"<<sum<<"\n\n\n";

	for (int j = 0; j < 12; j++)
	{
		if (y[j] < sum) {
			y2[i] = y[j];
			std::cout << y2[i] << ' ';
			i++;
		}
	}
	for (int j = 0; j < 12; j++)
	{
		if (y[j] >= sum) {
			y2[i] = y[j];
			std::cout << y2[i] << ' ';
			i++;
		}
	}
}
int DifByKentZuyg(int arr[16]) {
	int z = 0, k = 0;
	int i = 0;
	for ( ; i < 16; ++i)
	{
		if (i % 3 == 0) {
			if (arr[i]%2 == 0)
			{
				z += arr[i];
			}
			else {
				k += arr[i];
			}
		}
	}
	z /= i;
	k /= i;
	if (z>=k)
	{
		return z - k;
	}
	return k - z;
}
int MaxIndOfKent(int arr[9]) {
	int m = NULL;
	for (int i = 0; i < 9; i++)
	{
		if (arr[i]%2!=0 && arr[i]>0 && arr[m]<arr[i])
		{
			m = i;
		}
	}
	return m;
}
void nineQuest(int arr[16]) {
	int y[16];
	int z[32];
	int j = 0;
	y[0] = (int)(pow(cos(arr[0]), 2));
	z[j] = y[0];
	j++;
	z[j] = arr[0];
	j++;
	for (int i = 1; i < 16; i++)
	{
		y[i] = (int)(pow(cos(arr[i]), 2) + 2.97 * pow(log10(i * i), 2));
		z[j] = arr[i];
		j++;
		z[j] = y[i];
		j++;
	}
	for (int i = 0; i < 32; i++)
	{

		for (int k =i +1; k < 32; k++)
		{
			if (z[i]<z[k])
			{
				int tmp = z[i];
				z[i] = z[k];
				z[k] = tmp;
			}

		}
		std::cout << z[i] << ' ';
	}
}
void tenQuest(int x[17]) {
	int y[17];
	for (int i = 0; i < 17; i++)
	{
		if (x[i] % 2 == 0) {
			y[i] = (int)(x[i] * x[i] * x[i] - 7.5);
		}
		else {
			y[i] = x[i] * x[i] - 5 * exp(sin(x[i]));
		}
	}
	int* z = new int[17];
	int  j = 0;
	for (int i = 0; i < 17; i+=2)
	{
		z[j] = y[i];
		j++;
		z[j] = x[i];
		j++;
	}
}
int* elevQuest(int arr[9]) {
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		sum += arr[i];
		arr[i] = sum;
	}
	return arr;
}
int twQuest(int arr[12]) {
	int count = 0;
	for (int i = 0; i < 12-1; i++)
	{
		for (int j = i+1; j < 12; j++)
		{
			if (arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				count++;
			}
		}
	}
	return count;
}
int Quest14(int arr[14]) {
	for (int i = 0; i < 7; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[13 - i];
		arr[13 - i] = arr[i];
	}
	return 7;
}
int Quest15(int*arr, int size, int num) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			if (i== size/2)
			{
				return arr[i];
			}
			else if (i > size / 2) {
				return arr[0];
			}
			else {
				return arr[size - 1];
			}
		}
	}
	return NULL;
}
void Quest16(int arr[10]) {
	int sum = 0;
	int i = 0;
	for (; i < 10; i++)
	{
		if (arr[i] % 2) {
			cout << "sum, count" << sum << ',' << i;
			return;
		}
	}
}
int Quest17(int* arr, int size) {
	int count = 0;
	for (int i = 1; i < size-1; i++)
	{
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
			count++;
	}
	return count;
}
int Quest18(int* arr, int size) {
	int count = 0;
	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			count++;
	}
	return count;
}
void Quest19(int arr[15]) {
	bool t = false;
	std::vector<int> a;
	for (int i = 0; i < 15; i++)
	{
		if (t && arr[i] != 0) {
			a.push_back(arr[i]);
		}
		if (arr[i] < 0) {
			t = true;
		}
		else if (arr[i] == 0) {
			t = false;
			for (int j = 0; j < a.size(); j++)
			{
				std::cout << a[i];
			}
			a.clear();
		}
	}
}
void Quest20(int arr[20]) {
	bool t = false;
	for (int i = 0; i < 20-1; i++)
	{
		if (arr[i - 1] > arr[i]) {
			if (!t)
			{
				std::cout << i - 1<<',';
				t = true;
			}
			std::cout << i<<',';
		}
		else
		{
			t = false;
		}
	}
}
void Ques21(std::vector<int>& arr) {
	for (int i = 0; i < arr.size()-1; i++)
	{
		bool t = false;
		for (int j = i+1; j < arr.size(); j++)
		{
			if (arr[i] == arr[j]) {
				auto it = arr.begin() + j;
				arr.erase(it,it+1);
				t = true;
			}
		}
		if (t)
		{
			arr.erase(arr.begin() + i, arr.begin() + i + 1);
		}
	}
}
void Quest22(int arr[10]) {
	int zan[10];
	int j  = 0;
	int i = 0;
	for (; i < 10; i++)
	{
		if (arr[i] <= 0) {
			zan[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > 0) {
			zan[j] = arr[i];
			j++;
		}
	}
}
double Quest23(double arr[10]) {
	double y[10];
	double p = 1;
	for (int i = 0; i < 10; i++)
	{
		y[i] = arr[i] * arr[i] + 0.3;
	}
	for (int i = 1; i < 10; i+=2)
	{
		p *= p* (arr[i - 1] * y[i - 1]) / (arr[i] * y[i]);
	}
	return p;
}

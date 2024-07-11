#include <iostream>
using namespace std;
//const int max_rows = 3;
//const int max_cols = 3;
class Mat {
	int rows;
	int cols ;
	int data[3][3];
public:
	Mat(int r, int c) : rows(r), cols(c) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				data[i][j] = 0;
			}
		}
	}
	void setValue() {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				int a;
				cout << "data[" << i << "][" << j<<"]";
				cin >> a;
				data[i][j] = a;
			}
		}
	}
	Mat operator + (const Mat& obj) {
		Mat result(rows, obj.cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < obj.cols; j++)
			{
				result.data[i][j] = data[i][j] + obj.data[i][j];
			}
		}
			return result;
		
	}
	void display() {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}


};
int main() {
	Mat m1(3, 3);
	m1.setValue();
	m1.display();
	Mat m2(3, 3);
	m2.setValue();
	m2.display();
	cout << endl << "Result Matrix:" << endl;
	Mat m3 = m1 + m2;
	m3.display();
}

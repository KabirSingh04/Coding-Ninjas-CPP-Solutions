#include<climits>
#include <iostream>
using namespace std;

#include<climits>
void findLargest(int **input,int nRows,int mCols)
{   int idx,idxcol,sum=0,sumcol=0;
	int maxSumrow = INT_MIN;
	int maxSumcol = INT_MIN;
    for (int i = 0; i < nRows; i++) {
        int sum = 0;

        for (int j = 0; j < mCols; j++) {
            sum += input[i][j];
        }

        if (sum > maxSumrow) {
            maxSumrow = sum;
            idx = i;
        }
    }
       for (int i = 0; i < nRows; i++) {
        int sumcol = 0;

        for (int j = 0; j < mCols; j++) {
            sumcol += input[j][i];
        }

        if (sumcol > maxSumcol) {
            maxSumcol = sumcol;
            idxcol = i;
        }
    }
 if(maxSumcol>maxSumrow)
    {   cout<<"column "<<idxcol<<" "<<maxSumcol;
	}
	else
	  cout<<"row "<<idx<<" "<<maxSumrow;

}

int main()
{

		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;

}

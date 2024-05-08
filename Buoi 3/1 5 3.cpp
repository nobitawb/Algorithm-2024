#include <bits/stdc++.h>
using namespace std;

bool findPath(std::vector<std::vector<int>& martrix){
	int column = martrix[0].size();
	int row = martrix.size();
	int column1 = - 1;
	int row1 = -1;
	int cnt = 2;
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			if (matrix[i][j] == 1){
				column1 = j;
				row1 = i;
				break;
			}
		}
	}
	
	if (column1 == -1 && row1 == -1)
		return false;
	
	while (cnt <= column * row){
		if (row1 + 1 >= 0 && row1 + 1 < row && martrix[row1 + 1][column1] == cnt){
			cnt++;
			row1++;
		}
		else if (row1 - 1 >= 0 && row1 - 1 < row && martrix[row1 - 1][column1] == cnt){
			cnt++;
			row1++;
		}
		else if (column1 + 1 >= 0 && column1 - 1 < column && martrix[row1][column1 - 1] == cnt){
			cnt++;
			column1++;
		}
		else if (column1 - 1 >= 0 && column1 - 1 < column && martrix[row1][column1 - 1] == cnt){
			cnt++;
			column1++;
		}
		else 
			return false;
	}
	return true;
}

int main(){
	
}

#include<iostream>

const long w{ 3 };
const long h{ 3 }; // ������ ����� � ������������� ����� ��� ���������� ������ ������� (���� int, long, short � �.�.)

int random(int MIN = 0, int MAX = 9) {		// ������������ ������� �������
	return rand() % (MAX - MIN + 1) + MIN;
}

template<typename T>						// ������ ���������� �������
T fillMatrix(T matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			matrix[i][j] = random(0, 9);
		}
	}
	return matrix[w][h];
}

template<typename K, typename T>						// ������ ������ �������
K transMatrix(T matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

template<typename K>						// ������ ������ ���������������� �������
K renderMatrix(int matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			std::cout << matrix[j][i] << "\t";
		}
		std::cout << std::endl;
	}
}

int main() {
	int Matrix[w][h]; // �������� ������� 3:3								// �� ���� ������� ������� ��� � �������(?)
	fillMatrix<int>(Matrix); // ���������� ������� ���������� ����������
	renderMatrix<void>(Matrix); // ����� ��������� �������
	std::cout << std::endl;
	transMatrix<void, int>(Matrix); // ����� ���������������� �������

	return 0;
}
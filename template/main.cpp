#include<iostream>

const long w{ 3 };
const long h{ 3 }; // только целые и положительные цифры для правильной работы матрицы (типы int, long, short и т.д.)

int random(int MIN = 0, int MAX = 9) {		// обыкновенная функция рандома
	return rand() % (MAX - MIN + 1) + MIN;
}

template<typename T>						// шаблон заполнения матрицы
T fillMatrix(T matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			matrix[i][j] = random(0, 9);
		}
	}
	return matrix[w][h];
}

template<typename K, typename T>						// шаблон вывода матрицы
K transMatrix(T matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

template<typename K>						// шаблон вывода транпонированной матрицы
K renderMatrix(int matrix[w][h]) {
	for (int i{}; i < w; i++) {
		for (int j{}; j < h; j++) {
			std::cout << matrix[j][i] << "\t";
		}
		std::cout << std::endl;
	}
}

int main() {
	int Matrix[w][h]; // создание матрицы 3:3								// от типа матрицы зависит тип в шаблоне(?)
	fillMatrix<int>(Matrix); // заполнение матрицы рандомными значениями
	renderMatrix<void>(Matrix); // вывод созданной матрицы
	std::cout << std::endl;
	transMatrix<void, int>(Matrix); // вывод транпонированной матрицы

	return 0;
}
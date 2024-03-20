#pragma once
template <typename T>
T Add(T a, T b) {
	return a + b;
}
template <class T1, class T2>
void PrintTemp(T1 t1, T2 t2) {
	std::cout << typeid(t1).name() << std::endl;
	std::cout << typeid(t2).name() << std::endl;
}
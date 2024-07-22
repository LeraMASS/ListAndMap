#include <iostream>
#include <list>//библиотека хран в нее реализацию класса list
#include <map> //асоциативная коллекция
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//класс list
	std::list<int> list1;//применяем в узконаправленных ситуациях
	list1.push_back(7);//заполнение списка push.bakc
	list1.push_back(105);
	list1.push_back(42);
	list1.push_front(555);//добовление элемента первым в список, у вектор такого метода нет
	//list1.pop_back();// удаление последнего элемента
	//list1.pop_front(); //удаление последнего элемента

	//list1.back();//ссылка на элемент

	//короткий пример
	for (auto e1 : list1)
		std::cout << e1 << ' ';
	std::cout << std::endl;

	auto place = list1.begin();
	std::advance(place, 3);//перемещение элемента, второе чило место перемещения
	list1.insert(place, 1000);//передача нового элемента в список

	std::cout << *place << std::endl;

	place = list1.begin();
	++place;
	list1.erase(place);

	for (auto e1 : list1)
		std::cout << e1 << ' ';
	std::cout << std::endl;
	//укороченный пример цикла
	//for (auto it = list1.begin(); it != list1.cend(); ++it)
	//	std::cout << *it << ' ';
	//std::cout << std::endl;
	//длинный пример цикла
	/*for (std::list<int>::const_iterator it = list1.cbegin(); it != list1.cend(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;*/

	//Класс map
	std::pair<int, std::string> pair(11, "Hello");
	std::cout << pair.first << std::endl; //11
	std::cout << pair.second << std::endl; // Hello

	std::map<std::string, int> map1;
	map1.insert(std::pair<std::string, int>("Tom", 18));
	map1.insert(std::make_pair("Bob", 25));
	map1.emplace("Liza", 23);//самый простой способ записи
	map1["Mike"] = 50; //супер простой способ записи
	
	std::cout << map1["Bob"] << std::endl;
	std::cout << map1.find("Mike")->second << std::endl;
	map1.erase("Bob");

	map1.emplace("Tom", 20);
	map1["Tom"] = 21;

	for (auto key : map1)
		std::cout << key.first << " is " << key.second <<
		" years old " << std::endl;

	

	


	return 0;
}
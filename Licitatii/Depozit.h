#pragma once
#include <vector>
#include <memory>
template <typename T> class Depozit
{
private:
	std::vector<std::unique_ptr<T>> obiecte_primite;
	std::vector<std::unique_ptr<T>> obiecte_vandute;
public:
	void adaugaObiect(std::unique_ptr<T> obiect) {obiecte_primite.push_back(std::move(obiect)) };
	std::unique_ptr<T> scoateObiect(int id);
	marcheazaVandut(std::unique_ptr<T> obiect, int id_cumparator);
};

template<typename T>
inline std::unique_ptr<T> Depozit<T>::scoateObiect(int id)
{
	for (auto& obiect : obiecte_primite)
	{
		if (obiect->get_id() == id)
			return obiect;
	}
	return nullptr;
}

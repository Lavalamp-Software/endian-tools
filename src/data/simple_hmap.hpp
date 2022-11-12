/*
 * simple_hmap.hpp
 *
 *  Created on: 11 Nov 2022
 *      Author: mustafamalik
 */

#ifndef SRC_DATA_SIMPLE_HMAP_HPP_
#define SRC_DATA_SIMPLE_HMAP_HPP_

#include <map>
#include "../conf/config.hpp"

template<class K, class V>
class simple_hmap {
private:
	std::map<K, V> hmap;
	typename std::map<K, V>::iterator it;
#define ref this->
private:
	void clear();
public:
	explicit simple_hmap() = default;

	simple_hmap(const simple_hmap&) = delete;
	simple_hmap(simple_hmap&) = delete;

	~simple_hmap() { }

	simple_hmap operator = (const simple_hmap&) = delete;
	simple_hmap operator = (simple_hmap&) = delete;
	simple_hmap operator = (simple_hmap) = delete;
public:
	bool exists(const K& key) {
		return ref hmap.find(key) != ref hmap.end();
	}
	void append(const K& key, V& value) noexcept {
		ref hmap[key] = value;
	}
	void remove(const K& key) {
		if (ref exists(key)) {
			ref it = ref get_iter(key);
			ref hmap.erase(ref it);
		}
	}
	typename std::map<K, V>::iterator get_iter(const K& key) {
		return ref hmap.find(key);
	}

	V* get(const K& key) noexcept {
		V* res = nullptr;
		for (auto& kv : ref hmap) {
			if (kv.first == key) {
				res = &kv.second;
				break;
			}
		}
		return res;
	}
};

#endif /* SRC_DATA_SIMPLE_HMAP_HPP_ */

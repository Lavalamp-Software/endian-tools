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
	bool exists(K& key) {
		return hmap.find(key) != hmap.end();
	}
	void append(K& key, V& value) noexcept {
		hmap[key] = value;
	}
	void remove(K& key) {
		if (ref exists(key)) {
			ref it = ref get(key);
			hmap.erase(ref it);
		}
	}
	typename std::map<K, V>::iterator get(K& key) {
		return hmap.find(key);
	}
};

#endif /* SRC_DATA_SIMPLE_HMAP_HPP_ */

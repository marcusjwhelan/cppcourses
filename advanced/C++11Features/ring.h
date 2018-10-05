#ifndef C_11FEATURES_RING_H
#define C_11FEATURES_RING_H

#include <iostream>
using namespace std;

template <typename T>
class ring {

private:
    int m_pos; // position
    int m_size;
    T *m_values; // pointer to array o T's

public:
    class iterator;

public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL) {
        m_values = new T[size];
    }
    ~ring() {
        delete [] m_values;
    }
    int size() {
        return m_size;
    }
    /**
     * set up the iterator
     * @return
     */
    iterator begin() {
        return iterator(0, *this);
    }
    iterator end() {
        return iterator(m_size, *this);
    }

    void add(T value) {
        m_values[m_pos++] = value; // post fix

        if (m_pos == m_size) {
            m_pos = 0;
        }
    }
    T &get(int pos) const { // return a ref. don't copy
        return m_values[pos];
    }
};

template <typename T>
class ring<T>::iterator {
private:
    int m_pos;
    ring &m_ring; // ring is a reference
public:
    iterator(int pos, ring &ring_ref): m_pos(pos), m_ring(ring_ref) {

    }
    /**
     * post fix
     * operator iterator reference
     * @return
     */
    const iterator &operator++(int) {
        iterator old = *this;
        ++(*this);
        // then return the iterator itself
        return old;
    }
    /**
     * pre fix
     * @return
     */
    iterator &operator++() {
        ++m_pos;
        return *this;
    }
    /**
     * return the thing "T" that is being de-referenced
     * @return
     */
    T &operator*() {
        return m_ring.get(m_pos);
    }
    /**
     * implicit first param
     * @return
     */
    bool operator!=(const iterator &other) const {
        return !(*this == other);
    }
    bool operator==(const iterator &other) const {
        return m_pos == other.m_pos;
    }
};

#endif //C_11FEATURES_RING_H

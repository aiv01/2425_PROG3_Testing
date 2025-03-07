#pragma once
#include <stdexcept>
//#define NDEBUG
#include <cassert>




namespace aiv {

    template<typename T>
    class Vector {
        public:
            Vector() 
                : _size(0), _capacity(0), _data(nullptr)
            {
                //_size = 0;
                //_data = new T[1];
            }

            size_t size() const {
                return _size;
            }

            void add(const T& element) {
                resize_if_needed();
                _data[_size++] = element;
            }

            T& operator[](size_t index) const {
                assert(index < _size);
                return _data[index];
            }

            T& at(size_t index) const {
                if (index >= _size) {
                    throw std::out_of_range("Index out of range");
                } else {
                    return _data[index];
                }
            }

        private:
            void resize_if_needed() {
                if (_size < _capacity) return;

                _capacity = (_capacity == 0) ? 1 : _capacity * 2;
                T* new_data = new T[_capacity];

                for(size_t i=0; i < _size; ++i) {
                    new_data[i] = _data[i];
                }

                delete[] _data;
                _data = new_data;
            }

        private:
            size_t _size;
            size_t _capacity;
            T* _data;
    };
}
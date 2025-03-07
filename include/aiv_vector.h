#pragma once


namespace aiv {

    template<typename T>
    class Vector {
        public:
            Vector() 
                : _size(0)
            {
                //_size = 0;
                _data = new T[1];
            }

            size_t size() const {
                return _size;
            }

            void add(const T& element) {
                _data[0] = element;
                _size = 1;
            }

            T& operator[](size_t index) const {
                return _data[index];
            }

        private:
            size_t _size;
            T* _data;
    };
}
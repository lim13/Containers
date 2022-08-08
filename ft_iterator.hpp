#ifndef FT_ITERATOR
# define FT_ITERATOR

#include <iterator>

namespace ft{
    template <class Iterator> struct iterator_traits {
        typedef typename Iterator::iterator_category iterator_category;
        typedef typename Iterator::value_type value_type;
        typedef typename Iterator::difference_type difference_type;
        typedef difference_type distance_type;
        typedef typename Iterator::pointer pointer;
        typedef typename Iterator::reference reference;
    };

    template <class T> struct iterator_traits<T*> {
       typedef T value_type;
       typedef ptrdiff_t difference_type;
       typedef T* pointer;
       typedef T& reference;
       typedef random_access_iterator_tag iterator_category;
     };
}

# endif
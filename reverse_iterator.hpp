#ifndef FT_ITERATOR
# define FT_ITERATOR

#include <iterator>
#include <ft_iterator.hpp> 

namespace ft{
    
    template <class Iterator> 
    class reverse_iterator 
    {   
        public:
            typedef Iterator iterator_type;
		    typedef typename iterator_traits<Iterator>::iterator_category iterator_category;
		    typedef typename iterator_traits<Iterator>::value_type value_type;
		    typedef typename iterator_traits<Iterator>::difference_type	difference_type;
		    typedef typename iterator_traits<Iterator>::pointer pointer;
		    typedef typename iterator_traits<Iterator>::reference reference;
    };
}

# endif
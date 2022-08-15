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
   
        protected:
            iterator_type   current;


        public:
            //CONSTRUCTORS
            reverse_iterator(): current() {};
            explicit reverse_iterator(iterator_type x): current(x) {};
            
            template<class U>
		    reverse_iterator(const reverse_iterator<U> &other):	current(other.base()) {};

            //DESTRUCTOR
            ~reverse_iterator();

            //BASE () 
		    iterator_type base() const
		    {
			    return this->current;
		    };
       
            //OPERATOR "="
            template<class U>
		    reverse_iterator &operator = (const reverse_iterator<U> &other)
		    {
			    this->current = static_cast<reverse_iterator<Iterator> >(other.base());
			    return *this;
		    };

    };


}

# endif
#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP


#include <cstddef>
#include <stdexcept>
#include <vector>


namespace ariel {

class MagicalContainer {

private:

    std::vector<int> container;
    void SortedAdd(int element){};
    bool exist(int element){return false;}

public:
    
    ~MagicalContainer(){};
    MagicalContainer () noexcept{};
    void addElement(int element){};
    void removeElement( int element){};
    size_t size() const{return 0;}
    class AscendingIterator;
    class SideCrossIterator;
    class PrimeIterator;

};


class MagicalContainer::AscendingIterator {
private:
    const MagicalContainer* magic_container;
    size_t index;
   
public:
    AscendingIterator(const MagicalContainer& container){};
    AscendingIterator(const AscendingIterator& other){};
    ~AscendingIterator(){};

    AscendingIterator& operator=(const AscendingIterator& other){return *this;}
    bool operator==(const AscendingIterator& other) const{return false;}
    bool operator!=(const AscendingIterator& other) const{return false;}

    bool operator>(const AscendingIterator& other) const{return false;}
    bool operator<(const AscendingIterator& other) const{return false;}

    AscendingIterator begin() const{return *this;}
    AscendingIterator end() const{return *this;}

    int operator*() const{return 0;}
    AscendingIterator& operator++(){return *this;}

   
};


class MagicalContainer::SideCrossIterator {
private:
    const MagicalContainer* magic_container;
    size_t index;
  
public:
    SideCrossIterator(const MagicalContainer& container){};
    SideCrossIterator(const SideCrossIterator& other){};
    ~SideCrossIterator(){};

    SideCrossIterator& operator=(const SideCrossIterator& other){return *this;}
    bool operator==(const SideCrossIterator& other) const{return false;}
    bool operator!=(const SideCrossIterator& other) const{return false;}

    bool operator>(const SideCrossIterator& other) const{return false;}
    bool operator<(const SideCrossIterator& other) const{return false;}

    SideCrossIterator begin() const{return *this;}
    SideCrossIterator end() const{return *this;}
    int operator*() {return 0;}
    SideCrossIterator& operator++(){return *this;}
   
};


class MagicalContainer::PrimeIterator {
private:
    const MagicalContainer* magic_container;
    size_t index;
   
public:
    PrimeIterator(const MagicalContainer& container){};
    PrimeIterator(const PrimeIterator& other){};
    ~PrimeIterator(){};

    PrimeIterator& operator=(const PrimeIterator& other){return *this;}
    bool operator==(const PrimeIterator& other) const{return false;}
    bool operator!=(const PrimeIterator& other) const{return false;}

    bool operator>(const PrimeIterator& other) const{return false;}
    bool operator<(const PrimeIterator& other) const{return false;}

    PrimeIterator begin() const{return *this;}
    PrimeIterator end() const{return *this;}

    int operator*() const{return 0;}
    PrimeIterator& operator++(){return *this;}

};
}

#endif

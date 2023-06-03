#include <stdexcept>
#include "doctest.h"
#include "sources/MagicalContainer.hpp"



TEST_CASE("Magical Container") {
    ariel::MagicalContainer container;
    CHECK_EQ(container.size(), 0);
    container.addElement(0);
    container.addElement(1);
    CHECK_EQ(container.size(), 2);
    container.addElement(2);
    container.addElement(3);
    CHECK_EQ(container.size(), 4);
    container.addElement(4);
    container.addElement(5);
    CHECK_EQ(container.size(), 6);
    container.removeElement(4);
    CHECK_EQ(container.size(), 5);
    container.removeElement(2);
    CHECK_EQ(container.size(), 4);
    container.removeElement(3);
    CHECK_EQ(container.size(), 3);
}

TEST_CASE("Ascending Iterator") {
    ariel::MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);

    ariel::MagicalContainer::AscendingIterator Ascending(container);
    CHECK(*Ascending == 2); 
    ++Ascending;
    CHECK(*Ascending == 3);
    ++Ascending;
    CHECK(*Ascending == 9);
    ++Ascending;
    CHECK(*Ascending == 17);
    ++Ascending;
    CHECK(*Ascending == 25); 

    Ascending = Ascending.begin();
    ariel::MagicalContainer::AscendingIterator Ascending2(Ascending);

    CHECK(*Ascending == *Ascending2);
    ++Ascending;
    CHECK(*Ascending2 == 2);
    CHECK(*Ascending == 3);

    Ascending.begin();
    Ascending2.begin();

    CHECK(!(Ascending != Ascending2));
    ++Ascending2;
    CHECK(Ascending != Ascending2);

    Ascending.begin();
    Ascending2.begin();

    ++Ascending2;
    CHECK(Ascending2 > Ascending);
    CHECK(Ascending2 < Ascending);
    ++Ascending;
    CHECK(Ascending == Ascending2);

    
    
}



TEST_CASE("SideCross Iterator") {
    ariel::MagicalContainer container;
    container.addElement(22);
    container.addElement(8);
    container.addElement(31);
    container.addElement(14);
    container.addElement(11);
    container.addElement(13);
    container.addElement(33);

    ariel::MagicalContainer::SideCrossIterator SideCros(container);
    CHECK(*SideCros == 22);
    ++SideCros;
    CHECK(*SideCros == 33);
    ++SideCros;
    CHECK(*SideCros == 8); 
    ++SideCros;
    CHECK(*SideCros == 13);
    ++SideCros;
    CHECK(*SideCros == 31);
    ++SideCros; 
    CHECK(*SideCros == 11);
    ++SideCros; 
    CHECK(*SideCros == 14);

    SideCros = SideCros.begin();
    ariel::MagicalContainer::SideCrossIterator SideCros2(SideCros);

    CHECK(*SideCros == *SideCros2);
    ++SideCros;
    CHECK(*SideCros2 == 22);
    CHECK(*SideCros == 33);

    SideCros.begin();
    SideCros2.begin();

    CHECK(!(SideCros != SideCros2));
    ++SideCros2;
    CHECK(SideCros != SideCros2);

    SideCros.begin();
    SideCros2.begin();

    ++SideCros2;
    CHECK(SideCros2 > SideCros);
    CHECK(SideCros2 < SideCros);
    ++SideCros;
    CHECK(SideCros == SideCros2);

    SideCros.end();
    


}


TEST_CASE("Prime Iterator") {
    ariel::MagicalContainer container;
    container.addElement(22);
    container.addElement(8);
    container.addElement(31);
    container.addElement(14);
    container.addElement(11);
    container.addElement(13);
    container.addElement(33);

    ariel::MagicalContainer::PrimeIterator PrimeIt(container);
    CHECK(*PrimeIt == 31);
    ++PrimeIt;
    CHECK(*PrimeIt == 11);
    ++PrimeIt;
    CHECK(*PrimeIt == 13);  

    PrimeIt = PrimeIt.begin();
    ariel::MagicalContainer::PrimeIterator PrimeIt2(PrimeIt);

    CHECK(*PrimeIt == *PrimeIt2);
    ++PrimeIt;
    CHECK(*PrimeIt2 == 31);
    CHECK(*PrimeIt == 11);

    PrimeIt.begin();
    PrimeIt2.begin();

    CHECK(!(PrimeIt != PrimeIt2));
    ++PrimeIt2;
    CHECK(PrimeIt != PrimeIt2);

    PrimeIt.begin();
    PrimeIt2.begin();

    ++PrimeIt2;
    CHECK(PrimeIt2 > PrimeIt);
    CHECK(PrimeIt2 < PrimeIt);
    ++PrimeIt;
    CHECK(PrimeIt == PrimeIt2);
}
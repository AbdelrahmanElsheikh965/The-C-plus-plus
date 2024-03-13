## Virtual Keyword

A virtual function (also known as virtual methods) is a member function 
     that is declared within a base class and is re-defined (overridden) by a derived class.
     When you refer to a derived class object using a pointer or a reference to the base class, 
     you can call a virtual function for that object and execute the derived class’s version of the method.

## The rules for the virtual functions in C++ are as follows:

    1) Virtual functions cannot be static.
    2) A virtual function can be a friend function of another class.
    3) Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
    4) The prototype of virtual functions should be the same in the base as well as the derived class.
    5) They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
    6) A class may have a virtual destructor but it cannot have a virtual constructor.
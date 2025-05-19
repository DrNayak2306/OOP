# [constructor & destructor](https://github.com/DrNayak2306/DBMS_OOP/blob/main/constructor_destructor.cpp)

Empty class has size 1B (object address)

## Padding
Variables are stored at a stretch so that they can be read in a single read.
This speedup leads to some wasted memory.
class{int,char} has space 8B, not 5B

## Constructor
Constructor is used to claim the object's share of resources at the time of creation.  
Explicitly defining default copy constructor results in . (like recursion without base case)  
ex: class myClass{ myClass(myClass B){...}}  
only reference can be given as the argument type for such an explicit declaration.

## Destructor
Destructor is the last function that is called before the object is destroyed.  
Takes no params.  
Dynamically created objects are not destroyed automatically.

## Access modifiers
public - Accessible outside class
private - Accessible inside class only (default.)
protected - 
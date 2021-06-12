// C++ Templates - Introduction

/*
What are templates?

- DRY (Don't repeat yoursef)
- Generic Programming 

Syntax for Templates
--------------------

template <class T>     // template <typename T>
class Vector{
    T *arr;
    public:
        Vector(T* arr)
        {
            // code
        }
        // other methods
}

--> T can be int,float,char,etc...
--> template T represents many classes

int main(){

    Vector <int> myVec(ptr);
    Vector <float> myVec(ptr);  
}   

*/
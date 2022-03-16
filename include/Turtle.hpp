////////////////////////////////////////////////////////////////////////////////
/// @file Turtle.hpp
///
/// @author Hubert lehaiping@126.com
///
/// @brief Turtle is a drawing library
///
/// Copyright (c) 2019 XXX
/// All rights reserved
///////////////////////////////////////////////////////////////////////////////
#ifndef TURTLE_HPP
#define TURTLE_HPP

class Turtle
{
public:
    //Note that the destructor of Turtle must be virtual,
    //as is the case for all classes you intend to inherit from.
    //Otherwise the destructor of the derived class will not be called when you delete an object through a base pointer,
    //and you'll get corrupted program states like memory leaks.
    virtual ~Turtle() {};

    virtual void PenUp() = 0;
    virtual void PenDown() = 0;
    virtual void Forward(int distance) = 0;
    virtual void Turn(int degrees) = 0;
    virtual void GoTo(int x, int y) = 0;
    virtual int GetX() const = 0;
    virtual int GetY() const = 0;
};
#endif
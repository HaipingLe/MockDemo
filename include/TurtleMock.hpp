////////////////////////////////////////////////////////////////////////////////
/// @file TurtleMock.hpp
///
/// @author Hubert lehaiping@126.com
///
/// @brief The mock object of Turtle
///
/// Copyright (c) 2019 XXX
/// All rights reserved
///////////////////////////////////////////////////////////////////////////////
#include "Turtle.hpp"
#include "gmock/gmock.h"  // Brings in gMock.

class TurtleMock : public Turtle
{
public:
    //marco MOCK_METHODn, n means the count of the arguements.
    MOCK_METHOD0(PenUp, void());
    MOCK_METHOD0(PenDown, void());
    MOCK_METHOD1(Forward, void(int distance));
    MOCK_METHOD1(Turn, void(int degrees));
    MOCK_METHOD2(GoTo, void(int x, int y));
    MOCK_CONST_METHOD0(GetX, int());
    MOCK_CONST_METHOD0(GetY, int());
};
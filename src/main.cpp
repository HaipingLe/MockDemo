////////////////////////////////////////////////////////////////////////////////
/// @file Main.cpp
///
/// @author Hubert lehaiping@126.com
///
/// @brief Run the tests
///
/// Copyright (c) 2019 XXX
/// All rights reserved
///////////////////////////////////////////////////////////////////////////////
#include "TurtleMock.hpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    ::testing::InitGoogleMock(&argc, argv);

    TurtleMock turtleMock;
    EXPECT_CALL(turtleMock, PenUp())
        .Times(2);

    turtleMock.PenUp();
    return 0;
}
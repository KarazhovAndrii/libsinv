/**
 * Copyright 2015 Andrii Karazhov
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file   HuInvariants.cpp
 * @author Andrii Karazhov (karazhov.andrey@gmail.com)
 * @date   Oct 11, 2015
 * @brief  Structure represents Hu invariants.
 */

#include "HuInvariants.h"


HuInvariants::HuInvariants()
    : I1(0.0)
    , I2(0.0)
    , I3(0.0)
    , I4(0.0)
    , I5(0.0)
    , I6(0.0)
    , I7(0.0)
    , I8(0.0)
{

}


HuInvariants::HuInvariants(const HuInvariants& rhs)
    : I1(rhs.I1)
    , I2(rhs.I2)
    , I3(rhs.I3)
    , I4(rhs.I4)
    , I5(rhs.I5)
    , I6(rhs.I6)
    , I7(rhs.I7)
    , I8(rhs.I8)
{

}


HuInvariants& HuInvariants::operator= (const HuInvariants& rhs)
{
    if (this != &rhs)
    {
        I1 = rhs.I1;
        I2 = rhs.I2;
        I3 = rhs.I3;
        I4 = rhs.I4;
        I5 = rhs.I5;
        I6 = rhs.I6;
        I7 = rhs.I7;
        I8 = rhs.I8;
    }

    return *this;
}


HuInvariants::~HuInvariants()
{

}

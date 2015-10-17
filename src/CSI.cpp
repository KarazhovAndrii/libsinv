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
 * @file   CSI.cpp
 * @author Andrii Karazhov (karazhov.andrey@gmail.com)
 * @date   Oct 11, 2015
 * @brief
 */

#include "CSI.h"

CSI::CSI()
    : F1(0.0)
    , F2(0.0)
    , F3(0.0)
    , F4(0.0)
    , F5(0.0)
{

}


CSI::CSI(const CSI& rhs)
    : F1(rhs.F1)
    , F2(rhs.F2)
    , F3(rhs.F3)
    , F4(rhs.F4)
    , F5(rhs.F5)
{

}


CSI& CSI::operator= (const CSI& rhs)
{
    if (this != &rhs)
    {
        F1 = rhs.F1;
        F2 = rhs.F2;
        F3 = rhs.F3;
        F4 = rhs.F4;
        F5 = rhs.F5;
    }

    return *this;
}


CSI::~CSI()
{

}

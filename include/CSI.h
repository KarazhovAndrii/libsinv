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
 * @file   CSI.h
 * @author Andrii Karazhov (karazhov.andrey@gmail.com)
 * @date   Oct 17, 2015
 * @brief  Contour Sequence Invariants structure declaration.
 *         Structure represents Contour Sequence Invariants in accordance with:
 *         L. Gupta, M.D. Srinath, Contour sequence moments for the classification of closed planar shapes, Pattern Recognition, Volume 20, Issue 3, 1987, Pages 267-272, ISSN 0031-3203, http://dx.doi.org/10.1016/0031-3203(87)90001-X.
 */

#ifndef __CSI_H_E1BF251B_0C05_458A_9CC5_DB368FD74D14__
#define __CSI_H_E1BF251B_0C05_458A_9CC5_DB368FD74D14__

struct CSI
{
    /**
     * @brief Constructor.
     */
    CSI();

    /**
     * @brief Copying constructor.
     */
    CSI(const CSI& rhs);

    /**
     * @brief Assignment operator.
     */
    CSI& operator= (const CSI& rhs);

    /**
     * @brief Destructor.
     */
    ~CSI();

    double F1;
    double F2;
    double F3;
    double F4;
    double F5;
};

#endif /* __CSI_H_E1BF251B_0C05_458A_9CC5_DB368FD74D14__ */

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
 * @file   HuInvariants.h
 * @author Andrii Karazhov (karazhov.andrey@gmail.com)
 * @date   Oct 11, 2015
 * @brief  Hu Invariants structure declaration.
 *         Structure represents Hu invariants in accordance with ...<link>
 */

#ifndef __HUINVARIANTS_H_C6B81E4F_1E55_454B_838D_FA0F6E179D8B__
#define __HUINVARIANTS_H_C6B81E4F_1E55_454B_838D_FA0F6E179D8B__

struct HuInvariants
{
	/**
	 * @brief Constructor.
	 */
	HuInvariants();

	/**
	 * @brief Copying constructor.
	 */
	HuInvariants(const HuInvariants& rhs);

	/**
	 * @brief Assignment operator.
	 */
	HuInvariants& operator= (const HuInvariants& rhs);

	/**
	 * @brief Destructor.
	 */
	~HuInvariants();


	double I1;
	double I2;
	double I3;
	double I4;
	double I5;
	double I6;
	double I7;
	double I8;
};

#endif /* __HUINVARIANTS_H_C6B81E4F_1E55_454B_838D_FA0F6E179D8B__ */

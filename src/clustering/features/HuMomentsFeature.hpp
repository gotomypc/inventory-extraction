/*******************************************************************************
 * Copyright 2011 Sebastian Colutto
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/
#ifndef HUMOMENTSFEATURE_HPP_
#define HUMOMENTSFEATURE_HPP_

// system includes:
#include <iostream>

// boost includes:
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

// project includes:
#include "core_headers.h"
#include "image_headers.h"

// local includes:
#include "../DataStructs.hpp"
#include "ImageCharFeatureI.hpp"
#include "core/image/ImageMoments.hpp"

namespace impact_tr4
{


class HuMomentsFeature : public ImageCharFeatureI
{
public:
	HuMomentsFeature() {}
	virtual ~HuMomentsFeature() {}

	const int vectorSize() const
			{ return 7; }
	void calculateOutputVector(const GrayImage<> &image, const int rowIndex, const int colIndex, ublas::matrix<float>& outMatrix);
};

} // end of namespace impact_tr4

#endif /*HUMOMENTSFEATURE_HPP_*/

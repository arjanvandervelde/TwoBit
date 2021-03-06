/*
 Copyright 2014 Arjan van der Velde, vandervelde.ag [at] gmail

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#pragma once

#include <exception>
#include <string>

namespace TwoBit
{

// General exception.
class Exception: public std::exception
{
protected:
	const std::string what_;	// error message
public:
	Exception(const std::string s) :
			what_(s)
	{
	}
	Exception() :
			what_("Exception!")
	{
	}
	virtual ~Exception()
	{
	}
	virtual const char* what() const throw ()
	{
		return what_.c_str();
	}
};

} // namespace TwoBit

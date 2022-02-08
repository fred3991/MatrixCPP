// Copyright Keysight Technologies 2009 - 2014  
//-----------------------------------------------------------------------------------
// Copyright Keysight Technologies 2009 - 2014  
//-----------------------------------------------------------------------------------

#pragma once

#include "eresult.h"
#include "FixedPoint.h"

namespace SystemVueModelBuilder
{
	class DFFixedPointInterface
	{
	public:
		virtual ERESULT SetOutputFixedPointParameters()
		{
			return E_NOTIMPL_;
		}
	};
}

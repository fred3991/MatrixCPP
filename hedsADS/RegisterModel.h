// Copyright Keysight Technologies 2009 - 2014  
//-----------------------------------------------------------------------------------
// Copyright Keysight Technologies 2009 - 2014  
//	RegisterModel.h
//		For internal use only a C++ Data Flow model must not use any contents
//		from this header directly. 
//-----------------------------------------------------------------------------------


#pragma once
#include "DFModel.h"
#include "CommonBase.h"

namespace SystemVueModelBuilder
{
	class CRegisterModel
	{
	public:
		MODELBUILDER_API CRegisterModel(pfnDFModelCreate funcPtr, int iInterfaceVersion, const char* pLibName );
		MODELBUILDER_API ~CRegisterModel();
	private:
		void* m_pKnownListEntry;
	};

}

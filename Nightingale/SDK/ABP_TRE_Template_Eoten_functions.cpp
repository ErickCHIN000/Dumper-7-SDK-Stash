#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_TRE_Template_Eoten.ABP_TRE_Template_Eoten_C
// (None)

class UClass* UABP_TRE_Template_Eoten_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_TRE_Template_Eoten_C");

	return Clss;
}


// ABP_TRE_Template_Eoten_C ABP_TRE_Template_Eoten.Default__ABP_TRE_Template_Eoten_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_TRE_Template_Eoten_C* UABP_TRE_Template_Eoten_C::GetDefaultObj()
{
	static class UABP_TRE_Template_Eoten_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_TRE_Template_Eoten_C*>(UABP_TRE_Template_Eoten_C::StaticClass()->DefaultObject);

	return Default;
}

}



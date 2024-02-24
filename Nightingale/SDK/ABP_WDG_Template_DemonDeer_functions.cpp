#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_WDG_Template_DemonDeer.ABP_WDG_Template_DemonDeer_C
// (None)

class UClass* UABP_WDG_Template_DemonDeer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_WDG_Template_DemonDeer_C");

	return Clss;
}


// ABP_WDG_Template_DemonDeer_C ABP_WDG_Template_DemonDeer.Default__ABP_WDG_Template_DemonDeer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_WDG_Template_DemonDeer_C* UABP_WDG_Template_DemonDeer_C::GetDefaultObj()
{
	static class UABP_WDG_Template_DemonDeer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_WDG_Template_DemonDeer_C*>(UABP_WDG_Template_DemonDeer_C::StaticClass()->DefaultObject);

	return Default;
}

}



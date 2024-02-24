#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_HMB_Template_Bound_Minion.ABP_HMB_Template_Bound_Minion_C
// (None)

class UClass* UABP_HMB_Template_Bound_Minion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_HMB_Template_Bound_Minion_C");

	return Clss;
}


// ABP_HMB_Template_Bound_Minion_C ABP_HMB_Template_Bound_Minion.Default__ABP_HMB_Template_Bound_Minion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_HMB_Template_Bound_Minion_C* UABP_HMB_Template_Bound_Minion_C::GetDefaultObj()
{
	static class UABP_HMB_Template_Bound_Minion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_HMB_Template_Bound_Minion_C*>(UABP_HMB_Template_Bound_Minion_C::StaticClass()->DefaultObject);

	return Default;
}

}



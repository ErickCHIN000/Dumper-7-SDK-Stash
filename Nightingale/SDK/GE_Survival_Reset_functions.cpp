#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Survival_Reset.GE_Survival_Reset_C
// (None)

class UClass* UGE_Survival_Reset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Survival_Reset_C");

	return Clss;
}


// GE_Survival_Reset_C GE_Survival_Reset.Default__GE_Survival_Reset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Survival_Reset_C* UGE_Survival_Reset_C::GetDefaultObj()
{
	static class UGE_Survival_Reset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Survival_Reset_C*>(UGE_Survival_Reset_C::StaticClass()->DefaultObject);

	return Default;
}

}



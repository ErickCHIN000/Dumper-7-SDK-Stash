#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoT_AOE_Burn_Tail.GE_DoT_AOE_Burn_Tail_C
// (None)

class UClass* UGE_DoT_AOE_Burn_Tail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoT_AOE_Burn_Tail_C");

	return Clss;
}


// GE_DoT_AOE_Burn_Tail_C GE_DoT_AOE_Burn_Tail.Default__GE_DoT_AOE_Burn_Tail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoT_AOE_Burn_Tail_C* UGE_DoT_AOE_Burn_Tail_C::GetDefaultObj()
{
	static class UGE_DoT_AOE_Burn_Tail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoT_AOE_Burn_Tail_C*>(UGE_DoT_AOE_Burn_Tail_C::StaticClass()->DefaultObject);

	return Default;
}

}



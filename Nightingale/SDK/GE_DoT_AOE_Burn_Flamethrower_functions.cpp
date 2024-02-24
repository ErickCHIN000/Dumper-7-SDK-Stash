#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoT_AOE_Burn_Flamethrower.GE_DoT_AOE_Burn_Flamethrower_C
// (None)

class UClass* UGE_DoT_AOE_Burn_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoT_AOE_Burn_Flamethrower_C");

	return Clss;
}


// GE_DoT_AOE_Burn_Flamethrower_C GE_DoT_AOE_Burn_Flamethrower.Default__GE_DoT_AOE_Burn_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoT_AOE_Burn_Flamethrower_C* UGE_DoT_AOE_Burn_Flamethrower_C::GetDefaultObj()
{
	static class UGE_DoT_AOE_Burn_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoT_AOE_Burn_Flamethrower_C*>(UGE_DoT_AOE_Burn_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}



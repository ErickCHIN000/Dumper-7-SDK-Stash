#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_CreatureAbility_Cower.BTT_CreatureAbility_Cower_C
// (None)

class UClass* UBTT_CreatureAbility_Cower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_CreatureAbility_Cower_C");

	return Clss;
}


// BTT_CreatureAbility_Cower_C BTT_CreatureAbility_Cower.Default__BTT_CreatureAbility_Cower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_CreatureAbility_Cower_C* UBTT_CreatureAbility_Cower_C::GetDefaultObj()
{
	static class UBTT_CreatureAbility_Cower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_CreatureAbility_Cower_C*>(UBTT_CreatureAbility_Cower_C::StaticClass()->DefaultObject);

	return Default;
}

}



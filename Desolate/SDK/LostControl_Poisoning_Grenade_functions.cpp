#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Poisoning_Grenade.LostControl_Poisoning_Grenade_C
// (Actor)

class UClass* ALostControl_Poisoning_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Poisoning_Grenade_C");

	return Clss;
}


// LostControl_Poisoning_Grenade_C LostControl_Poisoning_Grenade.Default__LostControl_Poisoning_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Poisoning_Grenade_C* ALostControl_Poisoning_Grenade_C::GetDefaultObj()
{
	static class ALostControl_Poisoning_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Poisoning_Grenade_C*>(ALostControl_Poisoning_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}



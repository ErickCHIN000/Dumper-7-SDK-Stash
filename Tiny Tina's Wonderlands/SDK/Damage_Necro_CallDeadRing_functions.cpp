#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Necro_CallDeadRing.Damage_Necro_CallDeadRing_C
// (None)

class UClass* UDamage_Necro_CallDeadRing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Necro_CallDeadRing_C");

	return Clss;
}


// Damage_Necro_CallDeadRing_C Damage_Necro_CallDeadRing.Default__Damage_Necro_CallDeadRing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Necro_CallDeadRing_C* UDamage_Necro_CallDeadRing_C::GetDefaultObj()
{
	static class UDamage_Necro_CallDeadRing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Necro_CallDeadRing_C*>(UDamage_Necro_CallDeadRing_C::StaticClass()->DefaultObject);

	return Default;
}

}



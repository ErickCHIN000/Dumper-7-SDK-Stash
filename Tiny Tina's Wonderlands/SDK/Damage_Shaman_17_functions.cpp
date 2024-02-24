#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Shaman_17.Damage_Shaman_17_C
// (None)

class UClass* UDamage_Shaman_17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Shaman_17_C");

	return Clss;
}


// Damage_Shaman_17_C Damage_Shaman_17.Default__Damage_Shaman_17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Shaman_17_C* UDamage_Shaman_17_C::GetDefaultObj()
{
	static class UDamage_Shaman_17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Shaman_17_C*>(UDamage_Shaman_17_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Shield.Damage_Shield_C
// (None)

class UClass* UDamage_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Shield_C");

	return Clss;
}


// Damage_Shield_C Damage_Shield.Default__Damage_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Shield_C* UDamage_Shield_C::GetDefaultObj()
{
	static class UDamage_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Shield_C*>(UDamage_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}



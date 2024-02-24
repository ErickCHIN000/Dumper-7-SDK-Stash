#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Shield_Targeted.Damage_Shield_Targeted_C
// (None)

class UClass* UDamage_Shield_Targeted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Shield_Targeted_C");

	return Clss;
}


// Damage_Shield_Targeted_C Damage_Shield_Targeted.Default__Damage_Shield_Targeted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Shield_Targeted_C* UDamage_Shield_Targeted_C::GetDefaultObj()
{
	static class UDamage_Shield_Targeted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Shield_Targeted_C*>(UDamage_Shield_Targeted_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_AS3_FireNova.Damage_AS3_FireNova_C
// (None)

class UClass* UDamage_AS3_FireNova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_AS3_FireNova_C");

	return Clss;
}


// Damage_AS3_FireNova_C Damage_AS3_FireNova.Default__Damage_AS3_FireNova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_AS3_FireNova_C* UDamage_AS3_FireNova_C::GetDefaultObj()
{
	static class UDamage_AS3_FireNova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_AS3_FireNova_C*>(UDamage_AS3_FireNova_C::StaticClass()->DefaultObject);

	return Default;
}

}



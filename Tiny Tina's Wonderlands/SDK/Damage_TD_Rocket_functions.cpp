#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_TD_Rocket.Damage_TD_Rocket_C
// (None)

class UClass* UDamage_TD_Rocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_TD_Rocket_C");

	return Clss;
}


// Damage_TD_Rocket_C Damage_TD_Rocket.Default__Damage_TD_Rocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_TD_Rocket_C* UDamage_TD_Rocket_C::GetDefaultObj()
{
	static class UDamage_TD_Rocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_TD_Rocket_C*>(UDamage_TD_Rocket_C::StaticClass()->DefaultObject);

	return Default;
}

}



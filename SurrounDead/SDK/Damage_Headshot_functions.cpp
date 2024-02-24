#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Headshot.Damage_Headshot_C
// (None)

class UClass* UDamage_Headshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Headshot_C");

	return Clss;
}


// Damage_Headshot_C Damage_Headshot.Default__Damage_Headshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Headshot_C* UDamage_Headshot_C::GetDefaultObj()
{
	static class UDamage_Headshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Headshot_C*>(UDamage_Headshot_C::StaticClass()->DefaultObject);

	return Default;
}

}



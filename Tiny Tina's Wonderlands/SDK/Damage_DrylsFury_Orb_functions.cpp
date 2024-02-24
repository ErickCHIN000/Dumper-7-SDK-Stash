#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_DrylsFury_Orb.Damage_DrylsFury_Orb_C
// (None)

class UClass* UDamage_DrylsFury_Orb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_DrylsFury_Orb_C");

	return Clss;
}


// Damage_DrylsFury_Orb_C Damage_DrylsFury_Orb.Default__Damage_DrylsFury_Orb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_DrylsFury_Orb_C* UDamage_DrylsFury_Orb_C::GetDefaultObj()
{
	static class UDamage_DrylsFury_Orb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_DrylsFury_Orb_C*>(UDamage_DrylsFury_Orb_C::StaticClass()->DefaultObject);

	return Default;
}

}



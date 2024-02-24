#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_WepProj_DieVergent.Damage_WepProj_DieVergent_C
// (None)

class UClass* UDamage_WepProj_DieVergent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_WepProj_DieVergent_C");

	return Clss;
}


// Damage_WepProj_DieVergent_C Damage_WepProj_DieVergent.Default__Damage_WepProj_DieVergent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_WepProj_DieVergent_C* UDamage_WepProj_DieVergent_C::GetDefaultObj()
{
	static class UDamage_WepProj_DieVergent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_WepProj_DieVergent_C*>(UDamage_WepProj_DieVergent_C::StaticClass()->DefaultObject);

	return Default;
}

}



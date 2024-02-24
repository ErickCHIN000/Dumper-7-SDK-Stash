#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_Ranger_Cryonado.Damage_Ranger_Cryonado_C
// (None)

class UClass* UDamage_Ranger_Cryonado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_Ranger_Cryonado_C");

	return Clss;
}


// Damage_Ranger_Cryonado_C Damage_Ranger_Cryonado.Default__Damage_Ranger_Cryonado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_Ranger_Cryonado_C* UDamage_Ranger_Cryonado_C::GetDefaultObj()
{
	static class UDamage_Ranger_Cryonado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_Ranger_Cryonado_C*>(UDamage_Ranger_Cryonado_C::StaticClass()->DefaultObject);

	return Default;
}

}



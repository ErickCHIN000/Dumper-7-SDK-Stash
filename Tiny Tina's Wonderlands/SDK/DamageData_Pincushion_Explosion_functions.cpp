#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Pincushion_Explosion.DamageData_Pincushion_Explosion_C
// (None)

class UClass* UDamageData_Pincushion_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Pincushion_Explosion_C");

	return Clss;
}


// DamageData_Pincushion_Explosion_C DamageData_Pincushion_Explosion.Default__DamageData_Pincushion_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Pincushion_Explosion_C* UDamageData_Pincushion_Explosion_C::GetDefaultObj()
{
	static class UDamageData_Pincushion_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Pincushion_Explosion_C*>(UDamageData_Pincushion_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}



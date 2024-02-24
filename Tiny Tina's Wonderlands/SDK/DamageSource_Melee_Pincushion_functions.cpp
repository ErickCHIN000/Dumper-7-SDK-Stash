#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Melee_Pincushion.DamageSource_Melee_Pincushion_C
// (None)

class UClass* UDamageSource_Melee_Pincushion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Melee_Pincushion_C");

	return Clss;
}


// DamageSource_Melee_Pincushion_C DamageSource_Melee_Pincushion.Default__DamageSource_Melee_Pincushion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Melee_Pincushion_C* UDamageSource_Melee_Pincushion_C::GetDefaultObj()
{
	static class UDamageSource_Melee_Pincushion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Melee_Pincushion_C*>(UDamageSource_Melee_Pincushion_C::StaticClass()->DefaultObject);

	return Default;
}

}



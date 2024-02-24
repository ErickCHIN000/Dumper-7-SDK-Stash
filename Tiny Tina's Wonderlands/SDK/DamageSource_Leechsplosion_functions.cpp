#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Leechsplosion.DamageSource_Leechsplosion_C
// (None)

class UClass* UDamageSource_Leechsplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Leechsplosion_C");

	return Clss;
}


// DamageSource_Leechsplosion_C DamageSource_Leechsplosion.Default__DamageSource_Leechsplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Leechsplosion_C* UDamageSource_Leechsplosion_C::GetDefaultObj()
{
	static class UDamageSource_Leechsplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Leechsplosion_C*>(UDamageSource_Leechsplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Gear.DamageSource_Gear_C
// (None)

class UClass* UDamageSource_Gear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Gear_C");

	return Clss;
}


// DamageSource_Gear_C DamageSource_Gear.Default__DamageSource_Gear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Gear_C* UDamageSource_Gear_C::GetDefaultObj()
{
	static class UDamageSource_Gear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Gear_C*>(UDamageSource_Gear_C::StaticClass()->DefaultObject);

	return Default;
}

}



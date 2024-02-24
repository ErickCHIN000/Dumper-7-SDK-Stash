#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Vehicle.DamageSource_Vehicle_C
// (None)

class UClass* UDamageSource_Vehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Vehicle_C");

	return Clss;
}


// DamageSource_Vehicle_C DamageSource_Vehicle.Default__DamageSource_Vehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Vehicle_C* UDamageSource_Vehicle_C::GetDefaultObj()
{
	static class UDamageSource_Vehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Vehicle_C*>(UDamageSource_Vehicle_C::StaticClass()->DefaultObject);

	return Default;
}

}



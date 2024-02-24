#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Thrower_Heavy.DamageSource_Thrower_Heavy_C
// (None)

class UClass* UDamageSource_Thrower_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Thrower_Heavy_C");

	return Clss;
}


// DamageSource_Thrower_Heavy_C DamageSource_Thrower_Heavy.Default__DamageSource_Thrower_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Thrower_Heavy_C* UDamageSource_Thrower_Heavy_C::GetDefaultObj()
{
	static class UDamageSource_Thrower_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Thrower_Heavy_C*>(UDamageSource_Thrower_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}



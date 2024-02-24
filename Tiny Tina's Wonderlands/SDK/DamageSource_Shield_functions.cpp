#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Shield.DamageSource_Shield_C
// (None)

class UClass* UDamageSource_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Shield_C");

	return Clss;
}


// DamageSource_Shield_C DamageSource_Shield.Default__DamageSource_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Shield_C* UDamageSource_Shield_C::GetDefaultObj()
{
	static class UDamageSource_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Shield_C*>(UDamageSource_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Companion_Dragon.DamageSource_Companion_Dragon_C
// (None)

class UClass* UDamageSource_Companion_Dragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Companion_Dragon_C");

	return Clss;
}


// DamageSource_Companion_Dragon_C DamageSource_Companion_Dragon.Default__DamageSource_Companion_Dragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Companion_Dragon_C* UDamageSource_Companion_Dragon_C::GetDefaultObj()
{
	static class UDamageSource_Companion_Dragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Companion_Dragon_C*>(UDamageSource_Companion_Dragon_C::StaticClass()->DefaultObject);

	return Default;
}

}



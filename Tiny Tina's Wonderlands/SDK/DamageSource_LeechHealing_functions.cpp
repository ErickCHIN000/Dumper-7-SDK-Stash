#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_LeechHealing.DamageSource_LeechHealing_C
// (None)

class UClass* UDamageSource_LeechHealing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_LeechHealing_C");

	return Clss;
}


// DamageSource_LeechHealing_C DamageSource_LeechHealing.Default__DamageSource_LeechHealing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_LeechHealing_C* UDamageSource_LeechHealing_C::GetDefaultObj()
{
	static class UDamageSource_LeechHealing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_LeechHealing_C*>(UDamageSource_LeechHealing_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Companion_DemiLich.DamageSource_Companion_DemiLich_C
// (None)

class UClass* UDamageSource_Companion_DemiLich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Companion_DemiLich_C");

	return Clss;
}


// DamageSource_Companion_DemiLich_C DamageSource_Companion_DemiLich.Default__DamageSource_Companion_DemiLich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Companion_DemiLich_C* UDamageSource_Companion_DemiLich_C::GetDefaultObj()
{
	static class UDamageSource_Companion_DemiLich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Companion_DemiLich_C*>(UDamageSource_Companion_DemiLich_C::StaticClass()->DefaultObject);

	return Default;
}

}



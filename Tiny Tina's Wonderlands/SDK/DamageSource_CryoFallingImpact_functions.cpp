#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_CryoFallingImpact.DamageSource_CryoFallingImpact_C
// (None)

class UClass* UDamageSource_CryoFallingImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_CryoFallingImpact_C");

	return Clss;
}


// DamageSource_CryoFallingImpact_C DamageSource_CryoFallingImpact.Default__DamageSource_CryoFallingImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_CryoFallingImpact_C* UDamageSource_CryoFallingImpact_C::GetDefaultObj()
{
	static class UDamageSource_CryoFallingImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_CryoFallingImpact_C*>(UDamageSource_CryoFallingImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}



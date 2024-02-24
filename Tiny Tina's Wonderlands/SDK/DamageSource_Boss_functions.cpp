#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Boss.DamageSource_Boss_C
// (None)

class UClass* UDamageSource_Boss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Boss_C");

	return Clss;
}


// DamageSource_Boss_C DamageSource_Boss.Default__DamageSource_Boss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Boss_C* UDamageSource_Boss_C::GetDefaultObj()
{
	static class UDamageSource_Boss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Boss_C*>(UDamageSource_Boss_C::StaticClass()->DefaultObject);

	return Default;
}

}



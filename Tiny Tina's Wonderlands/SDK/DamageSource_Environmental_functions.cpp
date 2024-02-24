#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Environmental.DamageSource_Environmental_C
// (None)

class UClass* UDamageSource_Environmental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Environmental_C");

	return Clss;
}


// DamageSource_Environmental_C DamageSource_Environmental.Default__DamageSource_Environmental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Environmental_C* UDamageSource_Environmental_C::GetDefaultObj()
{
	static class UDamageSource_Environmental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Environmental_C*>(UDamageSource_Environmental_C::StaticClass()->DefaultObject);

	return Default;
}

}



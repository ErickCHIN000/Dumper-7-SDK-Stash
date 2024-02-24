#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Self.DamageSource_Self_C
// (None)

class UClass* UDamageSource_Self_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Self_C");

	return Clss;
}


// DamageSource_Self_C DamageSource_Self.Default__DamageSource_Self_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Self_C* UDamageSource_Self_C::GetDefaultObj()
{
	static class UDamageSource_Self_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Self_C*>(UDamageSource_Self_C::StaticClass()->DefaultObject);

	return Default;
}

}



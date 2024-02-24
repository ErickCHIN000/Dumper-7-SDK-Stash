#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_NowWeSlass.DamageSource_NowWeSlass_C
// (None)

class UClass* UDamageSource_NowWeSlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_NowWeSlass_C");

	return Clss;
}


// DamageSource_NowWeSlass_C DamageSource_NowWeSlass.Default__DamageSource_NowWeSlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_NowWeSlass_C* UDamageSource_NowWeSlass_C::GetDefaultObj()
{
	static class UDamageSource_NowWeSlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_NowWeSlass_C*>(UDamageSource_NowWeSlass_C::StaticClass()->DefaultObject);

	return Default;
}

}



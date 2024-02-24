#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Crush.DamageSource_Crush_C
// (None)

class UClass* UDamageSource_Crush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Crush_C");

	return Clss;
}


// DamageSource_Crush_C DamageSource_Crush.Default__DamageSource_Crush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Crush_C* UDamageSource_Crush_C::GetDefaultObj()
{
	static class UDamageSource_Crush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Crush_C*>(UDamageSource_Crush_C::StaticClass()->DefaultObject);

	return Default;
}

}



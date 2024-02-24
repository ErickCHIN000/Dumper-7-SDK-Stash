#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Companion_Mushroom.DamageSource_Companion_Mushroom_C
// (None)

class UClass* UDamageSource_Companion_Mushroom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Companion_Mushroom_C");

	return Clss;
}


// DamageSource_Companion_Mushroom_C DamageSource_Companion_Mushroom.Default__DamageSource_Companion_Mushroom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Companion_Mushroom_C* UDamageSource_Companion_Mushroom_C::GetDefaultObj()
{
	static class UDamageSource_Companion_Mushroom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Companion_Mushroom_C*>(UDamageSource_Companion_Mushroom_C::StaticClass()->DefaultObject);

	return Default;
}

}



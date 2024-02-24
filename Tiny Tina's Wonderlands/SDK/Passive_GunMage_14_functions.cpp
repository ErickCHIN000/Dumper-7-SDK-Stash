#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_GunMage_14.Passive_GunMage_14_C
// (None)

class UClass* UPassive_GunMage_14_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_GunMage_14_C");

	return Clss;
}


// Passive_GunMage_14_C Passive_GunMage_14.Default__Passive_GunMage_14_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_GunMage_14_C* UPassive_GunMage_14_C::GetDefaultObj()
{
	static class UPassive_GunMage_14_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_GunMage_14_C*>(UPassive_GunMage_14_C::StaticClass()->DefaultObject);

	return Default;
}

}



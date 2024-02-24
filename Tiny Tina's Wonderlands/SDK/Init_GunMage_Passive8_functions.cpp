#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_GunMage_Passive8.Init_GunMage_Passive8_C
// (None)

class UClass* UInit_GunMage_Passive8_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_GunMage_Passive8_C");

	return Clss;
}


// Init_GunMage_Passive8_C Init_GunMage_Passive8.Default__Init_GunMage_Passive8_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_GunMage_Passive8_C* UInit_GunMage_Passive8_C::GetDefaultObj()
{
	static class UInit_GunMage_Passive8_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_GunMage_Passive8_C*>(UInit_GunMage_Passive8_C::StaticClass()->DefaultObject);

	return Default;
}

}



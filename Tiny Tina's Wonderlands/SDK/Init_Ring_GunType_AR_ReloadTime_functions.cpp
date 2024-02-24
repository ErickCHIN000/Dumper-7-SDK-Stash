#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ring_GunType_AR_ReloadTime.Init_Ring_GunType_AR_ReloadTime_C
// (None)

class UClass* UInit_Ring_GunType_AR_ReloadTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ring_GunType_AR_ReloadTime_C");

	return Clss;
}


// Init_Ring_GunType_AR_ReloadTime_C Init_Ring_GunType_AR_ReloadTime.Default__Init_Ring_GunType_AR_ReloadTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ring_GunType_AR_ReloadTime_C* UInit_Ring_GunType_AR_ReloadTime_C::GetDefaultObj()
{
	static class UInit_Ring_GunType_AR_ReloadTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ring_GunType_AR_ReloadTime_C*>(UInit_Ring_GunType_AR_ReloadTime_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ring_GunType_PS_CritDmg.Init_Ring_GunType_PS_CritDmg_C
// (None)

class UClass* UInit_Ring_GunType_PS_CritDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ring_GunType_PS_CritDmg_C");

	return Clss;
}


// Init_Ring_GunType_PS_CritDmg_C Init_Ring_GunType_PS_CritDmg.Default__Init_Ring_GunType_PS_CritDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ring_GunType_PS_CritDmg_C* UInit_Ring_GunType_PS_CritDmg_C::GetDefaultObj()
{
	static class UInit_Ring_GunType_PS_CritDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ring_GunType_PS_CritDmg_C*>(UInit_Ring_GunType_PS_CritDmg_C::StaticClass()->DefaultObject);

	return Default;
}

}



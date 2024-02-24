#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookReloading.BP_XPBookReloading_C
// (Actor)

class UClass* ABP_XPBookReloading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookReloading_C");

	return Clss;
}


// BP_XPBookReloading_C BP_XPBookReloading.Default__BP_XPBookReloading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookReloading_C* ABP_XPBookReloading_C::GetDefaultObj()
{
	static class ABP_XPBookReloading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookReloading_C*>(ABP_XPBookReloading_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineReloading.BP_MagazineReloading_C
// (Actor)

class UClass* ABP_MagazineReloading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineReloading_C");

	return Clss;
}


// BP_MagazineReloading_C BP_MagazineReloading.Default__BP_MagazineReloading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineReloading_C* ABP_MagazineReloading_C::GetDefaultObj()
{
	static class ABP_MagazineReloading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineReloading_C*>(ABP_MagazineReloading_C::StaticClass()->DefaultObject);

	return Default;
}

}



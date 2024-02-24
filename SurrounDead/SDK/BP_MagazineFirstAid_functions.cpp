#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineFirstAid.BP_MagazineFirstAid_C
// (Actor)

class UClass* ABP_MagazineFirstAid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineFirstAid_C");

	return Clss;
}


// BP_MagazineFirstAid_C BP_MagazineFirstAid.Default__BP_MagazineFirstAid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineFirstAid_C* ABP_MagazineFirstAid_C::GetDefaultObj()
{
	static class ABP_MagazineFirstAid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineFirstAid_C*>(ABP_MagazineFirstAid_C::StaticClass()->DefaultObject);

	return Default;
}

}



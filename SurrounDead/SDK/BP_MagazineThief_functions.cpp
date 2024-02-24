#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineThief.BP_MagazineThief_C
// (Actor)

class UClass* ABP_MagazineThief_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineThief_C");

	return Clss;
}


// BP_MagazineThief_C BP_MagazineThief.Default__BP_MagazineThief_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineThief_C* ABP_MagazineThief_C::GetDefaultObj()
{
	static class ABP_MagazineThief_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineThief_C*>(ABP_MagazineThief_C::StaticClass()->DefaultObject);

	return Default;
}

}



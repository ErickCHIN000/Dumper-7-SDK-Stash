#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SawnOffShotgun.BP_SawnOffShotgun_C
// (Actor)

class UClass* ABP_SawnOffShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SawnOffShotgun_C");

	return Clss;
}


// BP_SawnOffShotgun_C BP_SawnOffShotgun.Default__BP_SawnOffShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SawnOffShotgun_C* ABP_SawnOffShotgun_C::GetDefaultObj()
{
	static class ABP_SawnOffShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SawnOffShotgun_C*>(ABP_SawnOffShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}



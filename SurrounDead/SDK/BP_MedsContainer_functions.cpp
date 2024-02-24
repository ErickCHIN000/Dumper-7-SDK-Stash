#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MedsContainer.BP_MedsContainer_C
// (Actor)

class UClass* ABP_MedsContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MedsContainer_C");

	return Clss;
}


// BP_MedsContainer_C BP_MedsContainer.Default__BP_MedsContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MedsContainer_C* ABP_MedsContainer_C::GetDefaultObj()
{
	static class ABP_MedsContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MedsContainer_C*>(ABP_MedsContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}



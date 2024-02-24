#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_45mmRounds.BP_45mmRounds_C
// (Actor)

class UClass* ABP_45mmRounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_45mmRounds_C");

	return Clss;
}


// BP_45mmRounds_C BP_45mmRounds.Default__BP_45mmRounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_45mmRounds_C* ABP_45mmRounds_C::GetDefaultObj()
{
	static class ABP_45mmRounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_45mmRounds_C*>(ABP_45mmRounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



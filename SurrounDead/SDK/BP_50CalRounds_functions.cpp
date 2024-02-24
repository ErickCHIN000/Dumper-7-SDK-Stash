#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_50CalRounds.BP_50CalRounds_C
// (Actor)

class UClass* ABP_50CalRounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_50CalRounds_C");

	return Clss;
}


// BP_50CalRounds_C BP_50CalRounds.Default__BP_50CalRounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_50CalRounds_C* ABP_50CalRounds_C::GetDefaultObj()
{
	static class ABP_50CalRounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_50CalRounds_C*>(ABP_50CalRounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



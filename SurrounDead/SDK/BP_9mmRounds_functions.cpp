#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_9mmRounds.BP_9mmRounds_C
// (Actor)

class UClass* ABP_9mmRounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_9mmRounds_C");

	return Clss;
}


// BP_9mmRounds_C BP_9mmRounds.Default__BP_9mmRounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_9mmRounds_C* ABP_9mmRounds_C::GetDefaultObj()
{
	static class ABP_9mmRounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_9mmRounds_C*>(ABP_9mmRounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



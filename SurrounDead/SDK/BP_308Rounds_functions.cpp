#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_308Rounds.BP_308Rounds_C
// (Actor)

class UClass* ABP_308Rounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_308Rounds_C");

	return Clss;
}


// BP_308Rounds_C BP_308Rounds.Default__BP_308Rounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_308Rounds_C* ABP_308Rounds_C::GetDefaultObj()
{
	static class ABP_308Rounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_308Rounds_C*>(ABP_308Rounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



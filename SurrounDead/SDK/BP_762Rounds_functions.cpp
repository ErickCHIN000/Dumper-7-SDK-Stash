#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_762Rounds.BP_762Rounds_C
// (Actor)

class UClass* ABP_762Rounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_762Rounds_C");

	return Clss;
}


// BP_762Rounds_C BP_762Rounds.Default__BP_762Rounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_762Rounds_C* ABP_762Rounds_C::GetDefaultObj()
{
	static class ABP_762Rounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_762Rounds_C*>(ABP_762Rounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



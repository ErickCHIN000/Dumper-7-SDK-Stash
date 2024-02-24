#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_300WinchesterRounds.BP_300WinchesterRounds_C
// (Actor)

class UClass* ABP_300WinchesterRounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_300WinchesterRounds_C");

	return Clss;
}


// BP_300WinchesterRounds_C BP_300WinchesterRounds.Default__BP_300WinchesterRounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_300WinchesterRounds_C* ABP_300WinchesterRounds_C::GetDefaultObj()
{
	static class ABP_300WinchesterRounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_300WinchesterRounds_C*>(ABP_300WinchesterRounds_C::StaticClass()->DefaultObject);

	return Default;
}

}



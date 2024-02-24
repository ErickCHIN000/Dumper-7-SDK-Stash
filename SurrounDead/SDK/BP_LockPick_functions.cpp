#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LockPick.BP_LockPick_C
// (Actor)

class UClass* ABP_LockPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LockPick_C");

	return Clss;
}


// BP_LockPick_C BP_LockPick.Default__BP_LockPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LockPick_C* ABP_LockPick_C::GetDefaultObj()
{
	static class ABP_LockPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LockPick_C*>(ABP_LockPick_C::StaticClass()->DefaultObject);

	return Default;
}

}



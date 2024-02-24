#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBoss_Military.BP_ZombieBoss_Military_C
// (Actor, Pawn)

class UClass* ABP_ZombieBoss_Military_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBoss_Military_C");

	return Clss;
}


// BP_ZombieBoss_Military_C BP_ZombieBoss_Military.Default__BP_ZombieBoss_Military_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBoss_Military_C* ABP_ZombieBoss_Military_C::GetDefaultObj()
{
	static class ABP_ZombieBoss_Military_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBoss_Military_C*>(ABP_ZombieBoss_Military_C::StaticClass()->DefaultObject);

	return Default;
}

}



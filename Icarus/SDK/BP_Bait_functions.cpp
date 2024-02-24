#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bait.BP_Bait_C
// (Actor)

class UClass* ABP_Bait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bait_C");

	return Clss;
}


// BP_Bait_C BP_Bait.Default__BP_Bait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bait_C* ABP_Bait_C::GetDefaultObj()
{
	static class ABP_Bait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bait_C*>(ABP_Bait_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianRedDot.BP_GuardianRedDot_C
// (Actor)

class UClass* ABP_GuardianRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianRedDot_C");

	return Clss;
}


// BP_GuardianRedDot_C BP_GuardianRedDot.Default__BP_GuardianRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianRedDot_C* ABP_GuardianRedDot_C::GetDefaultObj()
{
	static class ABP_GuardianRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianRedDot_C*>(ABP_GuardianRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}



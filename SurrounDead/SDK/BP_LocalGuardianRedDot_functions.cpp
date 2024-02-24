#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianRedDot.BP_LocalGuardianRedDot_C
// (Actor)

class UClass* ABP_LocalGuardianRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianRedDot_C");

	return Clss;
}


// BP_LocalGuardianRedDot_C BP_LocalGuardianRedDot.Default__BP_LocalGuardianRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianRedDot_C* ABP_LocalGuardianRedDot_C::GetDefaultObj()
{
	static class ABP_LocalGuardianRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianRedDot_C*>(ABP_LocalGuardianRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}



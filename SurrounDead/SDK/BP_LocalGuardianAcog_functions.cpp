#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianAcog.BP_LocalGuardianAcog_C
// (Actor)

class UClass* ABP_LocalGuardianAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianAcog_C");

	return Clss;
}


// BP_LocalGuardianAcog_C BP_LocalGuardianAcog.Default__BP_LocalGuardianAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianAcog_C* ABP_LocalGuardianAcog_C::GetDefaultObj()
{
	static class ABP_LocalGuardianAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianAcog_C*>(ABP_LocalGuardianAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}



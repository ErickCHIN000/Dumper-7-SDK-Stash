#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianAcog.BP_GuardianAcog_C
// (Actor)

class UClass* ABP_GuardianAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianAcog_C");

	return Clss;
}


// BP_GuardianAcog_C BP_GuardianAcog.Default__BP_GuardianAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianAcog_C* ABP_GuardianAcog_C::GetDefaultObj()
{
	static class ABP_GuardianAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianAcog_C*>(ABP_GuardianAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}



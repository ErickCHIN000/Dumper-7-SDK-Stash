#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLM_R.BaseMissionaryLM_R_C
// (None)

class UClass* UBaseMissionaryLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLM_R_C");

	return Clss;
}


// BaseMissionaryLM_R_C BaseMissionaryLM_R.Default__BaseMissionaryLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLM_R_C* UBaseMissionaryLM_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLM_R_C*>(UBaseMissionaryLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



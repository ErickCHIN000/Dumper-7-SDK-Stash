#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMM_R.BaseMissionaryMM_R_C
// (None)

class UClass* UBaseMissionaryMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMM_R_C");

	return Clss;
}


// BaseMissionaryMM_R_C BaseMissionaryMM_R.Default__BaseMissionaryMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMM_R_C* UBaseMissionaryMM_R_C::GetDefaultObj()
{
	static class UBaseMissionaryMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMM_R_C*>(UBaseMissionaryMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



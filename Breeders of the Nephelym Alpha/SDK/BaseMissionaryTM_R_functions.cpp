#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTM_R.BaseMissionaryTM_R_C
// (None)

class UClass* UBaseMissionaryTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTM_R_C");

	return Clss;
}


// BaseMissionaryTM_R_C BaseMissionaryTM_R.Default__BaseMissionaryTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTM_R_C* UBaseMissionaryTM_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTM_R_C*>(UBaseMissionaryTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



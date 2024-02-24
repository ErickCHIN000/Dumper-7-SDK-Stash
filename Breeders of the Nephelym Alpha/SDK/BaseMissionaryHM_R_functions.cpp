#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHM_R.BaseMissionaryHM_R_C
// (None)

class UClass* UBaseMissionaryHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHM_R_C");

	return Clss;
}


// BaseMissionaryHM_R_C BaseMissionaryHM_R.Default__BaseMissionaryHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHM_R_C* UBaseMissionaryHM_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHM_R_C*>(UBaseMissionaryHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



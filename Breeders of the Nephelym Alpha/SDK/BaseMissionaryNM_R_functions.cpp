#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNM_R.BaseMissionaryNM_R_C
// (None)

class UClass* UBaseMissionaryNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNM_R_C");

	return Clss;
}


// BaseMissionaryNM_R_C BaseMissionaryNM_R.Default__BaseMissionaryNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNM_R_C* UBaseMissionaryNM_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNM_R_C*>(UBaseMissionaryNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



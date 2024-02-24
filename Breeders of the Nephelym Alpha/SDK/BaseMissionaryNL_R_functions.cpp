#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNL_R.BaseMissionaryNL_R_C
// (None)

class UClass* UBaseMissionaryNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNL_R_C");

	return Clss;
}


// BaseMissionaryNL_R_C BaseMissionaryNL_R.Default__BaseMissionaryNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNL_R_C* UBaseMissionaryNL_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNL_R_C*>(UBaseMissionaryNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



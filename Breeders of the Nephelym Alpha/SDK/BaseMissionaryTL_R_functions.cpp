#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTL_R.BaseMissionaryTL_R_C
// (None)

class UClass* UBaseMissionaryTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTL_R_C");

	return Clss;
}


// BaseMissionaryTL_R_C BaseMissionaryTL_R.Default__BaseMissionaryTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTL_R_C* UBaseMissionaryTL_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTL_R_C*>(UBaseMissionaryTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



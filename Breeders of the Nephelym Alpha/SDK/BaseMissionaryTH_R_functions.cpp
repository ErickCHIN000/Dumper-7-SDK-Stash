#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTH_R.BaseMissionaryTH_R_C
// (None)

class UClass* UBaseMissionaryTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTH_R_C");

	return Clss;
}


// BaseMissionaryTH_R_C BaseMissionaryTH_R.Default__BaseMissionaryTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTH_R_C* UBaseMissionaryTH_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTH_R_C*>(UBaseMissionaryTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



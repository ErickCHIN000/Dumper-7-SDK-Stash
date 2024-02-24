#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLH_R.BaseMissionaryLH_R_C
// (None)

class UClass* UBaseMissionaryLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLH_R_C");

	return Clss;
}


// BaseMissionaryLH_R_C BaseMissionaryLH_R.Default__BaseMissionaryLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLH_R_C* UBaseMissionaryLH_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLH_R_C*>(UBaseMissionaryLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



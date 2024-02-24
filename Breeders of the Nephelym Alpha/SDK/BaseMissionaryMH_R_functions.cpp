#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMH_R.BaseMissionaryMH_R_C
// (None)

class UClass* UBaseMissionaryMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMH_R_C");

	return Clss;
}


// BaseMissionaryMH_R_C BaseMissionaryMH_R.Default__BaseMissionaryMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMH_R_C* UBaseMissionaryMH_R_C::GetDefaultObj()
{
	static class UBaseMissionaryMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMH_R_C*>(UBaseMissionaryMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



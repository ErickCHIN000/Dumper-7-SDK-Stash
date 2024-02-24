#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNH_R.BaseMissionaryNH_R_C
// (None)

class UClass* UBaseMissionaryNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNH_R_C");

	return Clss;
}


// BaseMissionaryNH_R_C BaseMissionaryNH_R.Default__BaseMissionaryNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNH_R_C* UBaseMissionaryNH_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNH_R_C*>(UBaseMissionaryNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



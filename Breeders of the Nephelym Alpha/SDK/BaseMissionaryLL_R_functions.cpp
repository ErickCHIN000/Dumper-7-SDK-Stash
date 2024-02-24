#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLL_R.BaseMissionaryLL_R_C
// (None)

class UClass* UBaseMissionaryLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLL_R_C");

	return Clss;
}


// BaseMissionaryLL_R_C BaseMissionaryLL_R.Default__BaseMissionaryLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLL_R_C* UBaseMissionaryLL_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLL_R_C*>(UBaseMissionaryLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTN_R.BaseMissionaryTN_R_C
// (None)

class UClass* UBaseMissionaryTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTN_R_C");

	return Clss;
}


// BaseMissionaryTN_R_C BaseMissionaryTN_R.Default__BaseMissionaryTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTN_R_C* UBaseMissionaryTN_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTN_R_C*>(UBaseMissionaryTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



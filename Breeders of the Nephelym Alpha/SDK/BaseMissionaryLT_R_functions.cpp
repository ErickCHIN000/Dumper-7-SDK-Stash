#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLT_R.BaseMissionaryLT_R_C
// (None)

class UClass* UBaseMissionaryLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLT_R_C");

	return Clss;
}


// BaseMissionaryLT_R_C BaseMissionaryLT_R.Default__BaseMissionaryLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLT_R_C* UBaseMissionaryLT_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLT_R_C*>(UBaseMissionaryLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



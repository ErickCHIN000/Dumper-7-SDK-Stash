#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLN_R.BaseMissionaryLN_R_C
// (None)

class UClass* UBaseMissionaryLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLN_R_C");

	return Clss;
}


// BaseMissionaryLN_R_C BaseMissionaryLN_R.Default__BaseMissionaryLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLN_R_C* UBaseMissionaryLN_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLN_R_C*>(UBaseMissionaryLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



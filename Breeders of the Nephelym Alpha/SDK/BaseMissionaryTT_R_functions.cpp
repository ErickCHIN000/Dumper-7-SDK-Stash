#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTT_R.BaseMissionaryTT_R_C
// (None)

class UClass* UBaseMissionaryTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTT_R_C");

	return Clss;
}


// BaseMissionaryTT_R_C BaseMissionaryTT_R.Default__BaseMissionaryTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTT_R_C* UBaseMissionaryTT_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTT_R_C*>(UBaseMissionaryTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



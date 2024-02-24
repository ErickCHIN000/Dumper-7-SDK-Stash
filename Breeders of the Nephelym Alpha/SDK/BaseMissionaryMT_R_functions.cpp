#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMT_R.BaseMissionaryMT_R_C
// (None)

class UClass* UBaseMissionaryMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMT_R_C");

	return Clss;
}


// BaseMissionaryMT_R_C BaseMissionaryMT_R.Default__BaseMissionaryMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMT_R_C* UBaseMissionaryMT_R_C::GetDefaultObj()
{
	static class UBaseMissionaryMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMT_R_C*>(UBaseMissionaryMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



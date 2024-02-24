#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryML_R.BaseMissionaryML_R_C
// (None)

class UClass* UBaseMissionaryML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryML_R_C");

	return Clss;
}


// BaseMissionaryML_R_C BaseMissionaryML_R.Default__BaseMissionaryML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryML_R_C* UBaseMissionaryML_R_C::GetDefaultObj()
{
	static class UBaseMissionaryML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryML_R_C*>(UBaseMissionaryML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHN_R.BaseMissionaryHN_R_C
// (None)

class UClass* UBaseMissionaryHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHN_R_C");

	return Clss;
}


// BaseMissionaryHN_R_C BaseMissionaryHN_R.Default__BaseMissionaryHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHN_R_C* UBaseMissionaryHN_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHN_R_C*>(UBaseMissionaryHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



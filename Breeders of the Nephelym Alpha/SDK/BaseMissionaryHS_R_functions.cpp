#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHS_R.BaseMissionaryHS_R_C
// (None)

class UClass* UBaseMissionaryHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHS_R_C");

	return Clss;
}


// BaseMissionaryHS_R_C BaseMissionaryHS_R.Default__BaseMissionaryHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHS_R_C* UBaseMissionaryHS_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHS_R_C*>(UBaseMissionaryHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



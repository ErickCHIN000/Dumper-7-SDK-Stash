#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMS_R.BaseMissionaryMS_R_C
// (None)

class UClass* UBaseMissionaryMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMS_R_C");

	return Clss;
}


// BaseMissionaryMS_R_C BaseMissionaryMS_R.Default__BaseMissionaryMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMS_R_C* UBaseMissionaryMS_R_C::GetDefaultObj()
{
	static class UBaseMissionaryMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMS_R_C*>(UBaseMissionaryMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



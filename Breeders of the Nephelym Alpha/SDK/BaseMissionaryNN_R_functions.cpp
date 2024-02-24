#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNN_R.BaseMissionaryNN_R_C
// (None)

class UClass* UBaseMissionaryNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNN_R_C");

	return Clss;
}


// BaseMissionaryNN_R_C BaseMissionaryNN_R.Default__BaseMissionaryNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNN_R_C* UBaseMissionaryNN_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNN_R_C*>(UBaseMissionaryNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



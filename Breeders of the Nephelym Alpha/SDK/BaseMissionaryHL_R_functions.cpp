#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHL_R.BaseMissionaryHL_R_C
// (None)

class UClass* UBaseMissionaryHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHL_R_C");

	return Clss;
}


// BaseMissionaryHL_R_C BaseMissionaryHL_R.Default__BaseMissionaryHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHL_R_C* UBaseMissionaryHL_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHL_R_C*>(UBaseMissionaryHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



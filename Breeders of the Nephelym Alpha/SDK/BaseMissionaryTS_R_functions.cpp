#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTS_R.BaseMissionaryTS_R_C
// (None)

class UClass* UBaseMissionaryTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTS_R_C");

	return Clss;
}


// BaseMissionaryTS_R_C BaseMissionaryTS_R.Default__BaseMissionaryTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTS_R_C* UBaseMissionaryTS_R_C::GetDefaultObj()
{
	static class UBaseMissionaryTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTS_R_C*>(UBaseMissionaryTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



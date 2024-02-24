#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNT_R.BaseMissionaryNT_R_C
// (None)

class UClass* UBaseMissionaryNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNT_R_C");

	return Clss;
}


// BaseMissionaryNT_R_C BaseMissionaryNT_R.Default__BaseMissionaryNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNT_R_C* UBaseMissionaryNT_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNT_R_C*>(UBaseMissionaryNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



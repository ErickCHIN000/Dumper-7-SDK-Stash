#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNS_R.BaseMissionaryNS_R_C
// (None)

class UClass* UBaseMissionaryNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNS_R_C");

	return Clss;
}


// BaseMissionaryNS_R_C BaseMissionaryNS_R.Default__BaseMissionaryNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNS_R_C* UBaseMissionaryNS_R_C::GetDefaultObj()
{
	static class UBaseMissionaryNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNS_R_C*>(UBaseMissionaryNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHH_R.BaseMissionaryHH_R_C
// (None)

class UClass* UBaseMissionaryHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHH_R_C");

	return Clss;
}


// BaseMissionaryHH_R_C BaseMissionaryHH_R.Default__BaseMissionaryHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHH_R_C* UBaseMissionaryHH_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHH_R_C*>(UBaseMissionaryHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



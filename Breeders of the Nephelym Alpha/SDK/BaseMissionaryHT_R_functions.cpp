#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHT_R.BaseMissionaryHT_R_C
// (None)

class UClass* UBaseMissionaryHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHT_R_C");

	return Clss;
}


// BaseMissionaryHT_R_C BaseMissionaryHT_R.Default__BaseMissionaryHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHT_R_C* UBaseMissionaryHT_R_C::GetDefaultObj()
{
	static class UBaseMissionaryHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHT_R_C*>(UBaseMissionaryHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



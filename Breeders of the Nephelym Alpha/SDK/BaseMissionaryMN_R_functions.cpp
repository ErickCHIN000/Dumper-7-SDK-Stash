#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMN_R.BaseMissionaryMN_R_C
// (None)

class UClass* UBaseMissionaryMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMN_R_C");

	return Clss;
}


// BaseMissionaryMN_R_C BaseMissionaryMN_R.Default__BaseMissionaryMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMN_R_C* UBaseMissionaryMN_R_C::GetDefaultObj()
{
	static class UBaseMissionaryMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMN_R_C*>(UBaseMissionaryMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



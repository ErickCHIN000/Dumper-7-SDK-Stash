#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLS_R.BaseMissionaryLS_R_C
// (None)

class UClass* UBaseMissionaryLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLS_R_C");

	return Clss;
}


// BaseMissionaryLS_R_C BaseMissionaryLS_R.Default__BaseMissionaryLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLS_R_C* UBaseMissionaryLS_R_C::GetDefaultObj()
{
	static class UBaseMissionaryLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLS_R_C*>(UBaseMissionaryLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



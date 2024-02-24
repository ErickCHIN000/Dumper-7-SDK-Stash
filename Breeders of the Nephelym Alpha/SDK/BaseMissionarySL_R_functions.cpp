#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySL_R.BaseMissionarySL_R_C
// (None)

class UClass* UBaseMissionarySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySL_R_C");

	return Clss;
}


// BaseMissionarySL_R_C BaseMissionarySL_R.Default__BaseMissionarySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySL_R_C* UBaseMissionarySL_R_C::GetDefaultObj()
{
	static class UBaseMissionarySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySL_R_C*>(UBaseMissionarySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



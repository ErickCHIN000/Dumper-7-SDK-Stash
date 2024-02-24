#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySM_R.BaseMissionarySM_R_C
// (None)

class UClass* UBaseMissionarySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySM_R_C");

	return Clss;
}


// BaseMissionarySM_R_C BaseMissionarySM_R.Default__BaseMissionarySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySM_R_C* UBaseMissionarySM_R_C::GetDefaultObj()
{
	static class UBaseMissionarySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySM_R_C*>(UBaseMissionarySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



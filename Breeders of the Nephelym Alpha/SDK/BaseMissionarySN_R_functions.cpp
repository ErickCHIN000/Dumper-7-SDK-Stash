#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySN_R.BaseMissionarySN_R_C
// (None)

class UClass* UBaseMissionarySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySN_R_C");

	return Clss;
}


// BaseMissionarySN_R_C BaseMissionarySN_R.Default__BaseMissionarySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySN_R_C* UBaseMissionarySN_R_C::GetDefaultObj()
{
	static class UBaseMissionarySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySN_R_C*>(UBaseMissionarySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



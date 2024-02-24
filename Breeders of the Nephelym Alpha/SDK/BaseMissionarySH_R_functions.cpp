#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySH_R.BaseMissionarySH_R_C
// (None)

class UClass* UBaseMissionarySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySH_R_C");

	return Clss;
}


// BaseMissionarySH_R_C BaseMissionarySH_R.Default__BaseMissionarySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySH_R_C* UBaseMissionarySH_R_C::GetDefaultObj()
{
	static class UBaseMissionarySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySH_R_C*>(UBaseMissionarySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



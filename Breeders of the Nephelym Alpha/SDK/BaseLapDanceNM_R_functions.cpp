#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNM_R.BaseLapDanceNM_R_C
// (None)

class UClass* UBaseLapDanceNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNM_R_C");

	return Clss;
}


// BaseLapDanceNM_R_C BaseLapDanceNM_R.Default__BaseLapDanceNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNM_R_C* UBaseLapDanceNM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNM_R_C*>(UBaseLapDanceNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



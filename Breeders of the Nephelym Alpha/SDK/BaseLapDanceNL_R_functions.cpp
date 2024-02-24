#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNL_R.BaseLapDanceNL_R_C
// (None)

class UClass* UBaseLapDanceNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNL_R_C");

	return Clss;
}


// BaseLapDanceNL_R_C BaseLapDanceNL_R.Default__BaseLapDanceNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNL_R_C* UBaseLapDanceNL_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNL_R_C*>(UBaseLapDanceNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



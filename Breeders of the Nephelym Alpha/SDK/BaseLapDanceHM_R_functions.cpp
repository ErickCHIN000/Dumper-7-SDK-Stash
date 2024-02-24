#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceHM_R.BaseLapDanceHM_R_C
// (None)

class UClass* UBaseLapDanceHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceHM_R_C");

	return Clss;
}


// BaseLapDanceHM_R_C BaseLapDanceHM_R.Default__BaseLapDanceHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceHM_R_C* UBaseLapDanceHM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceHM_R_C*>(UBaseLapDanceHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



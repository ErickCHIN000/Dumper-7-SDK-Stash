#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceMM_R.BaseLapDanceMM_R_C
// (None)

class UClass* UBaseLapDanceMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceMM_R_C");

	return Clss;
}


// BaseLapDanceMM_R_C BaseLapDanceMM_R.Default__BaseLapDanceMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceMM_R_C* UBaseLapDanceMM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceMM_R_C*>(UBaseLapDanceMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


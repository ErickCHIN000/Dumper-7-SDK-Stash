#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSM_R.BaseLapDanceSM_R_C
// (None)

class UClass* UBaseLapDanceSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSM_R_C");

	return Clss;
}


// BaseLapDanceSM_R_C BaseLapDanceSM_R.Default__BaseLapDanceSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSM_R_C* UBaseLapDanceSM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSM_R_C*>(UBaseLapDanceSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



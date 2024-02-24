#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSL_R.BaseLapDanceSL_R_C
// (None)

class UClass* UBaseLapDanceSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSL_R_C");

	return Clss;
}


// BaseLapDanceSL_R_C BaseLapDanceSL_R.Default__BaseLapDanceSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSL_R_C* UBaseLapDanceSL_R_C::GetDefaultObj()
{
	static class UBaseLapDanceSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSL_R_C*>(UBaseLapDanceSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



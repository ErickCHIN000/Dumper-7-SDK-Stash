#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSS_R.BaseLapDanceSS_R_C
// (None)

class UClass* UBaseLapDanceSS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSS_R_C");

	return Clss;
}


// BaseLapDanceSS_R_C BaseLapDanceSS_R.Default__BaseLapDanceSS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSS_R_C* UBaseLapDanceSS_R_C::GetDefaultObj()
{
	static class UBaseLapDanceSS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSS_R_C*>(UBaseLapDanceSS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNH_R.BaseLapDanceNH_R_C
// (None)

class UClass* UBaseLapDanceNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNH_R_C");

	return Clss;
}


// BaseLapDanceNH_R_C BaseLapDanceNH_R.Default__BaseLapDanceNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNH_R_C* UBaseLapDanceNH_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNH_R_C*>(UBaseLapDanceNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



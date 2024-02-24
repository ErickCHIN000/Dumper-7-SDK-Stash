#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceHH_R.BaseLapDanceHH_R_C
// (None)

class UClass* UBaseLapDanceHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceHH_R_C");

	return Clss;
}


// BaseLapDanceHH_R_C BaseLapDanceHH_R.Default__BaseLapDanceHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceHH_R_C* UBaseLapDanceHH_R_C::GetDefaultObj()
{
	static class UBaseLapDanceHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceHH_R_C*>(UBaseLapDanceHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



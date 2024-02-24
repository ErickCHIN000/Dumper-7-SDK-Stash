#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTL_R.BaseLapDanceTL_R_C
// (None)

class UClass* UBaseLapDanceTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTL_R_C");

	return Clss;
}


// BaseLapDanceTL_R_C BaseLapDanceTL_R.Default__BaseLapDanceTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTL_R_C* UBaseLapDanceTL_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTL_R_C*>(UBaseLapDanceTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



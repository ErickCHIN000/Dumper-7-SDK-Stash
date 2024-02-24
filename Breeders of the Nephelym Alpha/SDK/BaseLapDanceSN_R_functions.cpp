#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSN_R.BaseLapDanceSN_R_C
// (None)

class UClass* UBaseLapDanceSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSN_R_C");

	return Clss;
}


// BaseLapDanceSN_R_C BaseLapDanceSN_R.Default__BaseLapDanceSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSN_R_C* UBaseLapDanceSN_R_C::GetDefaultObj()
{
	static class UBaseLapDanceSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSN_R_C*>(UBaseLapDanceSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



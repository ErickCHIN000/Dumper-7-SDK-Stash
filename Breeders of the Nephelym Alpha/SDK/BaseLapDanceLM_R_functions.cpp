#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLM_R.BaseLapDanceLM_R_C
// (None)

class UClass* UBaseLapDanceLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLM_R_C");

	return Clss;
}


// BaseLapDanceLM_R_C BaseLapDanceLM_R.Default__BaseLapDanceLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLM_R_C* UBaseLapDanceLM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLM_R_C*>(UBaseLapDanceLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



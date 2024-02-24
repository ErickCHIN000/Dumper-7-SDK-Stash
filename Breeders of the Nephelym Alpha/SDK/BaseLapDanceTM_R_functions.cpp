#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTM_R.BaseLapDanceTM_R_C
// (None)

class UClass* UBaseLapDanceTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTM_R_C");

	return Clss;
}


// BaseLapDanceTM_R_C BaseLapDanceTM_R.Default__BaseLapDanceTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTM_R_C* UBaseLapDanceTM_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTM_R_C*>(UBaseLapDanceTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



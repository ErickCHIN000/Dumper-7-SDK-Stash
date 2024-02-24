#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTN_R.BaseLapDanceTN_R_C
// (None)

class UClass* UBaseLapDanceTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTN_R_C");

	return Clss;
}


// BaseLapDanceTN_R_C BaseLapDanceTN_R.Default__BaseLapDanceTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTN_R_C* UBaseLapDanceTN_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTN_R_C*>(UBaseLapDanceTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



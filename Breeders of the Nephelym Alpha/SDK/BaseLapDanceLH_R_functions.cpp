#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLH_R.BaseLapDanceLH_R_C
// (None)

class UClass* UBaseLapDanceLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLH_R_C");

	return Clss;
}


// BaseLapDanceLH_R_C BaseLapDanceLH_R.Default__BaseLapDanceLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLH_R_C* UBaseLapDanceLH_R_C::GetDefaultObj()
{
	static class UBaseLapDanceLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLH_R_C*>(UBaseLapDanceLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



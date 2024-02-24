#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTH_R.BaseLapDanceTH_R_C
// (None)

class UClass* UBaseLapDanceTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTH_R_C");

	return Clss;
}


// BaseLapDanceTH_R_C BaseLapDanceTH_R.Default__BaseLapDanceTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTH_R_C* UBaseLapDanceTH_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTH_R_C*>(UBaseLapDanceTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



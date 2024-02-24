#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSH_R.BaseLapDanceSH_R_C
// (None)

class UClass* UBaseLapDanceSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSH_R_C");

	return Clss;
}


// BaseLapDanceSH_R_C BaseLapDanceSH_R.Default__BaseLapDanceSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSH_R_C* UBaseLapDanceSH_R_C::GetDefaultObj()
{
	static class UBaseLapDanceSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSH_R_C*>(UBaseLapDanceSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTT_R.BaseLapDanceTT_R_C
// (None)

class UClass* UBaseLapDanceTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTT_R_C");

	return Clss;
}


// BaseLapDanceTT_R_C BaseLapDanceTT_R.Default__BaseLapDanceTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTT_R_C* UBaseLapDanceTT_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTT_R_C*>(UBaseLapDanceTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNT_R.BaseLapDanceNT_R_C
// (None)

class UClass* UBaseLapDanceNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNT_R_C");

	return Clss;
}


// BaseLapDanceNT_R_C BaseLapDanceNT_R.Default__BaseLapDanceNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNT_R_C* UBaseLapDanceNT_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNT_R_C*>(UBaseLapDanceNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



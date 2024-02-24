#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNS_R.BaseLapDanceNS_R_C
// (None)

class UClass* UBaseLapDanceNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNS_R_C");

	return Clss;
}


// BaseLapDanceNS_R_C BaseLapDanceNS_R.Default__BaseLapDanceNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNS_R_C* UBaseLapDanceNS_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNS_R_C*>(UBaseLapDanceNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



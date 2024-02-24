#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTS_R.BaseLapDanceTS_R_C
// (None)

class UClass* UBaseLapDanceTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTS_R_C");

	return Clss;
}


// BaseLapDanceTS_R_C BaseLapDanceTS_R.Default__BaseLapDanceTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTS_R_C* UBaseLapDanceTS_R_C::GetDefaultObj()
{
	static class UBaseLapDanceTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTS_R_C*>(UBaseLapDanceTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



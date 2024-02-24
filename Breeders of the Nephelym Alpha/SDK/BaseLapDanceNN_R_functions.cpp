#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNN_R.BaseLapDanceNN_R_C
// (None)

class UClass* UBaseLapDanceNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNN_R_C");

	return Clss;
}


// BaseLapDanceNN_R_C BaseLapDanceNN_R.Default__BaseLapDanceNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNN_R_C* UBaseLapDanceNN_R_C::GetDefaultObj()
{
	static class UBaseLapDanceNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNN_R_C*>(UBaseLapDanceNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



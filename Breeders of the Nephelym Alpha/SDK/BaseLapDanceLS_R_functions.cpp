#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLS_R.BaseLapDanceLS_R_C
// (None)

class UClass* UBaseLapDanceLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLS_R_C");

	return Clss;
}


// BaseLapDanceLS_R_C BaseLapDanceLS_R.Default__BaseLapDanceLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLS_R_C* UBaseLapDanceLS_R_C::GetDefaultObj()
{
	static class UBaseLapDanceLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLS_R_C*>(UBaseLapDanceLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



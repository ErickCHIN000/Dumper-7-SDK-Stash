#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLL_R.BaseLapDanceLL_R_C
// (None)

class UClass* UBaseLapDanceLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLL_R_C");

	return Clss;
}


// BaseLapDanceLL_R_C BaseLapDanceLL_R.Default__BaseLapDanceLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLL_R_C* UBaseLapDanceLL_R_C::GetDefaultObj()
{
	static class UBaseLapDanceLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLL_R_C*>(UBaseLapDanceLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



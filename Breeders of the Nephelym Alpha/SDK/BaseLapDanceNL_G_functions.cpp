#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNL_G.BaseLapDanceNL_G_C
// (None)

class UClass* UBaseLapDanceNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNL_G_C");

	return Clss;
}


// BaseLapDanceNL_G_C BaseLapDanceNL_G.Default__BaseLapDanceNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNL_G_C* UBaseLapDanceNL_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNL_G_C*>(UBaseLapDanceNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



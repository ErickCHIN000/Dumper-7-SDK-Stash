#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNM_G.BaseLapDanceNM_G_C
// (None)

class UClass* UBaseLapDanceNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNM_G_C");

	return Clss;
}


// BaseLapDanceNM_G_C BaseLapDanceNM_G.Default__BaseLapDanceNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNM_G_C* UBaseLapDanceNM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNM_G_C*>(UBaseLapDanceNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



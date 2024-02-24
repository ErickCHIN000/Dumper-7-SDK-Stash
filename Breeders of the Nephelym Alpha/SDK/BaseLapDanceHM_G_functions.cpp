#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceHM_G.BaseLapDanceHM_G_C
// (None)

class UClass* UBaseLapDanceHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceHM_G_C");

	return Clss;
}


// BaseLapDanceHM_G_C BaseLapDanceHM_G.Default__BaseLapDanceHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceHM_G_C* UBaseLapDanceHM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceHM_G_C*>(UBaseLapDanceHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



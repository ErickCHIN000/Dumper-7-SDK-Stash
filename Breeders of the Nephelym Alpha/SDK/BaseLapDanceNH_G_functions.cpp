#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNH_G.BaseLapDanceNH_G_C
// (None)

class UClass* UBaseLapDanceNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNH_G_C");

	return Clss;
}


// BaseLapDanceNH_G_C BaseLapDanceNH_G.Default__BaseLapDanceNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNH_G_C* UBaseLapDanceNH_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNH_G_C*>(UBaseLapDanceNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



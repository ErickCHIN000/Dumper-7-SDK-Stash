#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceHH_G.BaseLapDanceHH_G_C
// (None)

class UClass* UBaseLapDanceHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceHH_G_C");

	return Clss;
}


// BaseLapDanceHH_G_C BaseLapDanceHH_G.Default__BaseLapDanceHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceHH_G_C* UBaseLapDanceHH_G_C::GetDefaultObj()
{
	static class UBaseLapDanceHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceHH_G_C*>(UBaseLapDanceHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



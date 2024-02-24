#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSL_G.BaseLapDanceSL_G_C
// (None)

class UClass* UBaseLapDanceSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSL_G_C");

	return Clss;
}


// BaseLapDanceSL_G_C BaseLapDanceSL_G.Default__BaseLapDanceSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSL_G_C* UBaseLapDanceSL_G_C::GetDefaultObj()
{
	static class UBaseLapDanceSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSL_G_C*>(UBaseLapDanceSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



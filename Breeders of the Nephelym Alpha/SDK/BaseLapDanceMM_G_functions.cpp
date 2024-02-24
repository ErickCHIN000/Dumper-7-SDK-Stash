#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceMM_G.BaseLapDanceMM_G_C
// (None)

class UClass* UBaseLapDanceMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceMM_G_C");

	return Clss;
}


// BaseLapDanceMM_G_C BaseLapDanceMM_G.Default__BaseLapDanceMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceMM_G_C* UBaseLapDanceMM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceMM_G_C*>(UBaseLapDanceMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



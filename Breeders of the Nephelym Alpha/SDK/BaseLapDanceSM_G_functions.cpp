#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSM_G.BaseLapDanceSM_G_C
// (None)

class UClass* UBaseLapDanceSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSM_G_C");

	return Clss;
}


// BaseLapDanceSM_G_C BaseLapDanceSM_G.Default__BaseLapDanceSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSM_G_C* UBaseLapDanceSM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSM_G_C*>(UBaseLapDanceSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



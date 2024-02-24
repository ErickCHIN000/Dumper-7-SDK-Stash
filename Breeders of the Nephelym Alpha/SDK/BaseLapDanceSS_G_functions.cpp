#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSS_G.BaseLapDanceSS_G_C
// (None)

class UClass* UBaseLapDanceSS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSS_G_C");

	return Clss;
}


// BaseLapDanceSS_G_C BaseLapDanceSS_G.Default__BaseLapDanceSS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSS_G_C* UBaseLapDanceSS_G_C::GetDefaultObj()
{
	static class UBaseLapDanceSS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSS_G_C*>(UBaseLapDanceSS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



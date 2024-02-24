#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNS_G.BaseLapDanceNS_G_C
// (None)

class UClass* UBaseLapDanceNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNS_G_C");

	return Clss;
}


// BaseLapDanceNS_G_C BaseLapDanceNS_G.Default__BaseLapDanceNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNS_G_C* UBaseLapDanceNS_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNS_G_C*>(UBaseLapDanceNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



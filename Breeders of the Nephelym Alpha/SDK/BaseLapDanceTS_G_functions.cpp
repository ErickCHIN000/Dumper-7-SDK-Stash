#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTS_G.BaseLapDanceTS_G_C
// (None)

class UClass* UBaseLapDanceTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTS_G_C");

	return Clss;
}


// BaseLapDanceTS_G_C BaseLapDanceTS_G.Default__BaseLapDanceTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTS_G_C* UBaseLapDanceTS_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTS_G_C*>(UBaseLapDanceTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



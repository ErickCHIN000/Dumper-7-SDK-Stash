#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNT_G.BaseLapDanceNT_G_C
// (None)

class UClass* UBaseLapDanceNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNT_G_C");

	return Clss;
}


// BaseLapDanceNT_G_C BaseLapDanceNT_G.Default__BaseLapDanceNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNT_G_C* UBaseLapDanceNT_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNT_G_C*>(UBaseLapDanceNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



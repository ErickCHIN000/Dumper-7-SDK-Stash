#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLL_G.BaseLapDanceLL_G_C
// (None)

class UClass* UBaseLapDanceLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLL_G_C");

	return Clss;
}


// BaseLapDanceLL_G_C BaseLapDanceLL_G.Default__BaseLapDanceLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLL_G_C* UBaseLapDanceLL_G_C::GetDefaultObj()
{
	static class UBaseLapDanceLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLL_G_C*>(UBaseLapDanceLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



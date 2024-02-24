#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLS_G.BaseLapDanceLS_G_C
// (None)

class UClass* UBaseLapDanceLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLS_G_C");

	return Clss;
}


// BaseLapDanceLS_G_C BaseLapDanceLS_G.Default__BaseLapDanceLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLS_G_C* UBaseLapDanceLS_G_C::GetDefaultObj()
{
	static class UBaseLapDanceLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLS_G_C*>(UBaseLapDanceLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceNN_G.BaseLapDanceNN_G_C
// (None)

class UClass* UBaseLapDanceNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceNN_G_C");

	return Clss;
}


// BaseLapDanceNN_G_C BaseLapDanceNN_G.Default__BaseLapDanceNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceNN_G_C* UBaseLapDanceNN_G_C::GetDefaultObj()
{
	static class UBaseLapDanceNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceNN_G_C*>(UBaseLapDanceNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



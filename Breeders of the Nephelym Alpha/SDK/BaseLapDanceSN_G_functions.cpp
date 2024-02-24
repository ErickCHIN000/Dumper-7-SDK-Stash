#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSN_G.BaseLapDanceSN_G_C
// (None)

class UClass* UBaseLapDanceSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSN_G_C");

	return Clss;
}


// BaseLapDanceSN_G_C BaseLapDanceSN_G.Default__BaseLapDanceSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSN_G_C* UBaseLapDanceSN_G_C::GetDefaultObj()
{
	static class UBaseLapDanceSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSN_G_C*>(UBaseLapDanceSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



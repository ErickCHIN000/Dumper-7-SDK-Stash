#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLH_G.BaseLapDanceLH_G_C
// (None)

class UClass* UBaseLapDanceLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLH_G_C");

	return Clss;
}


// BaseLapDanceLH_G_C BaseLapDanceLH_G.Default__BaseLapDanceLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLH_G_C* UBaseLapDanceLH_G_C::GetDefaultObj()
{
	static class UBaseLapDanceLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLH_G_C*>(UBaseLapDanceLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



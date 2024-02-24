#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTL_G.BaseLapDanceTL_G_C
// (None)

class UClass* UBaseLapDanceTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTL_G_C");

	return Clss;
}


// BaseLapDanceTL_G_C BaseLapDanceTL_G.Default__BaseLapDanceTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTL_G_C* UBaseLapDanceTL_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTL_G_C*>(UBaseLapDanceTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



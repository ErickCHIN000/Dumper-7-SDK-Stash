#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTT_G.BaseLapDanceTT_G_C
// (None)

class UClass* UBaseLapDanceTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTT_G_C");

	return Clss;
}


// BaseLapDanceTT_G_C BaseLapDanceTT_G.Default__BaseLapDanceTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTT_G_C* UBaseLapDanceTT_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTT_G_C*>(UBaseLapDanceTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



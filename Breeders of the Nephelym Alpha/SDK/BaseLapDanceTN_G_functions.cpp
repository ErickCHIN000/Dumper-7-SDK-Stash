#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTN_G.BaseLapDanceTN_G_C
// (None)

class UClass* UBaseLapDanceTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTN_G_C");

	return Clss;
}


// BaseLapDanceTN_G_C BaseLapDanceTN_G.Default__BaseLapDanceTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTN_G_C* UBaseLapDanceTN_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTN_G_C*>(UBaseLapDanceTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



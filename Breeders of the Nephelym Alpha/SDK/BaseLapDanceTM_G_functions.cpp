#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTM_G.BaseLapDanceTM_G_C
// (None)

class UClass* UBaseLapDanceTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTM_G_C");

	return Clss;
}


// BaseLapDanceTM_G_C BaseLapDanceTM_G.Default__BaseLapDanceTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTM_G_C* UBaseLapDanceTM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTM_G_C*>(UBaseLapDanceTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLM_G.BaseLapDanceLM_G_C
// (None)

class UClass* UBaseLapDanceLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLM_G_C");

	return Clss;
}


// BaseLapDanceLM_G_C BaseLapDanceLM_G.Default__BaseLapDanceLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLM_G_C* UBaseLapDanceLM_G_C::GetDefaultObj()
{
	static class UBaseLapDanceLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLM_G_C*>(UBaseLapDanceLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



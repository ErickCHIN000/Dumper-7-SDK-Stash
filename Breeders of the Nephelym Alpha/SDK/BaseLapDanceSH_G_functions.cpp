#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceSH_G.BaseLapDanceSH_G_C
// (None)

class UClass* UBaseLapDanceSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceSH_G_C");

	return Clss;
}


// BaseLapDanceSH_G_C BaseLapDanceSH_G.Default__BaseLapDanceSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceSH_G_C* UBaseLapDanceSH_G_C::GetDefaultObj()
{
	static class UBaseLapDanceSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceSH_G_C*>(UBaseLapDanceSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



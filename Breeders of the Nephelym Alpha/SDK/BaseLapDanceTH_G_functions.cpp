#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceTH_G.BaseLapDanceTH_G_C
// (None)

class UClass* UBaseLapDanceTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceTH_G_C");

	return Clss;
}


// BaseLapDanceTH_G_C BaseLapDanceTH_G.Default__BaseLapDanceTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceTH_G_C* UBaseLapDanceTH_G_C::GetDefaultObj()
{
	static class UBaseLapDanceTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceTH_G_C*>(UBaseLapDanceTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



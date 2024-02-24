#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceLN_G.BaseLapDanceLN_G_C
// (None)

class UClass* UBaseLapDanceLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceLN_G_C");

	return Clss;
}


// BaseLapDanceLN_G_C BaseLapDanceLN_G.Default__BaseLapDanceLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceLN_G_C* UBaseLapDanceLN_G_C::GetDefaultObj()
{
	static class UBaseLapDanceLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceLN_G_C*>(UBaseLapDanceLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



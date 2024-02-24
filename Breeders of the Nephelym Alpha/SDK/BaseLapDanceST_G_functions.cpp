#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLapDanceST_G.BaseLapDanceST_G_C
// (None)

class UClass* UBaseLapDanceST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLapDanceST_G_C");

	return Clss;
}


// BaseLapDanceST_G_C BaseLapDanceST_G.Default__BaseLapDanceST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLapDanceST_G_C* UBaseLapDanceST_G_C::GetDefaultObj()
{
	static class UBaseLapDanceST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLapDanceST_G_C*>(UBaseLapDanceST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



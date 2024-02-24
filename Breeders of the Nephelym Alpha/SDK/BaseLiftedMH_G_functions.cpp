#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMH_G.BaseLiftedMH_G_C
// (None)

class UClass* UBaseLiftedMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMH_G_C");

	return Clss;
}


// BaseLiftedMH_G_C BaseLiftedMH_G.Default__BaseLiftedMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMH_G_C* UBaseLiftedMH_G_C::GetDefaultObj()
{
	static class UBaseLiftedMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMH_G_C*>(UBaseLiftedMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMH_G.BaseButterflyMH_G_C
// (None)

class UClass* UBaseButterflyMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMH_G_C");

	return Clss;
}


// BaseButterflyMH_G_C BaseButterflyMH_G.Default__BaseButterflyMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMH_G_C* UBaseButterflyMH_G_C::GetDefaultObj()
{
	static class UBaseButterflyMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMH_G_C*>(UBaseButterflyMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


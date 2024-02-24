#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHM_G.BaseButterflyHM_G_C
// (None)

class UClass* UBaseButterflyHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHM_G_C");

	return Clss;
}


// BaseButterflyHM_G_C BaseButterflyHM_G.Default__BaseButterflyHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHM_G_C* UBaseButterflyHM_G_C::GetDefaultObj()
{
	static class UBaseButterflyHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHM_G_C*>(UBaseButterflyHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



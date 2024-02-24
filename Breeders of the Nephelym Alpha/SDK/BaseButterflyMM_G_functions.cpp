#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMM_G.BaseButterflyMM_G_C
// (None)

class UClass* UBaseButterflyMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMM_G_C");

	return Clss;
}


// BaseButterflyMM_G_C BaseButterflyMM_G.Default__BaseButterflyMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMM_G_C* UBaseButterflyMM_G_C::GetDefaultObj()
{
	static class UBaseButterflyMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMM_G_C*>(UBaseButterflyMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



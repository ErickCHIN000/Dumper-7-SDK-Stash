#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTM_G.BaseButterflyTM_G_C
// (None)

class UClass* UBaseButterflyTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTM_G_C");

	return Clss;
}


// BaseButterflyTM_G_C BaseButterflyTM_G.Default__BaseButterflyTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTM_G_C* UBaseButterflyTM_G_C::GetDefaultObj()
{
	static class UBaseButterflyTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTM_G_C*>(UBaseButterflyTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



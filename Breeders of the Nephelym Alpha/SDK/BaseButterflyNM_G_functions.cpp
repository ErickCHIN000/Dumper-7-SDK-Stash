#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNM_G.BaseButterflyNM_G_C
// (None)

class UClass* UBaseButterflyNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNM_G_C");

	return Clss;
}


// BaseButterflyNM_G_C BaseButterflyNM_G.Default__BaseButterflyNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNM_G_C* UBaseButterflyNM_G_C::GetDefaultObj()
{
	static class UBaseButterflyNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNM_G_C*>(UBaseButterflyNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



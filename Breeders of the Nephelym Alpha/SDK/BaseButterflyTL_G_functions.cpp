#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTL_G.BaseButterflyTL_G_C
// (None)

class UClass* UBaseButterflyTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTL_G_C");

	return Clss;
}


// BaseButterflyTL_G_C BaseButterflyTL_G.Default__BaseButterflyTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTL_G_C* UBaseButterflyTL_G_C::GetDefaultObj()
{
	static class UBaseButterflyTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTL_G_C*>(UBaseButterflyTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



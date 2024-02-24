#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTH_G.BaseButterflyTH_G_C
// (None)

class UClass* UBaseButterflyTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTH_G_C");

	return Clss;
}


// BaseButterflyTH_G_C BaseButterflyTH_G.Default__BaseButterflyTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTH_G_C* UBaseButterflyTH_G_C::GetDefaultObj()
{
	static class UBaseButterflyTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTH_G_C*>(UBaseButterflyTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



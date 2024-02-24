#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTT_G.BaseButterflyTT_G_C
// (None)

class UClass* UBaseButterflyTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTT_G_C");

	return Clss;
}


// BaseButterflyTT_G_C BaseButterflyTT_G.Default__BaseButterflyTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTT_G_C* UBaseButterflyTT_G_C::GetDefaultObj()
{
	static class UBaseButterflyTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTT_G_C*>(UBaseButterflyTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



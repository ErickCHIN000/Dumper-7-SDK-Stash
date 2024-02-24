#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHS_G.BaseButterflyHS_G_C
// (None)

class UClass* UBaseButterflyHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHS_G_C");

	return Clss;
}


// BaseButterflyHS_G_C BaseButterflyHS_G.Default__BaseButterflyHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHS_G_C* UBaseButterflyHS_G_C::GetDefaultObj()
{
	static class UBaseButterflyHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHS_G_C*>(UBaseButterflyHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



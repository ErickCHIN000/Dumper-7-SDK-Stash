#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHT_G.BaseButterflyHT_G_C
// (None)

class UClass* UBaseButterflyHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHT_G_C");

	return Clss;
}


// BaseButterflyHT_G_C BaseButterflyHT_G.Default__BaseButterflyHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHT_G_C* UBaseButterflyHT_G_C::GetDefaultObj()
{
	static class UBaseButterflyHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHT_G_C*>(UBaseButterflyHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



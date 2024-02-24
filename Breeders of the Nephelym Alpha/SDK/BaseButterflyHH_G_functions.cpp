#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHH_G.BaseButterflyHH_G_C
// (None)

class UClass* UBaseButterflyHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHH_G_C");

	return Clss;
}


// BaseButterflyHH_G_C BaseButterflyHH_G.Default__BaseButterflyHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHH_G_C* UBaseButterflyHH_G_C::GetDefaultObj()
{
	static class UBaseButterflyHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHH_G_C*>(UBaseButterflyHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLH_G.BaseButterflyLH_G_C
// (None)

class UClass* UBaseButterflyLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLH_G_C");

	return Clss;
}


// BaseButterflyLH_G_C BaseButterflyLH_G.Default__BaseButterflyLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLH_G_C* UBaseButterflyLH_G_C::GetDefaultObj()
{
	static class UBaseButterflyLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLH_G_C*>(UBaseButterflyLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNH_G.BaseButterflyNH_G_C
// (None)

class UClass* UBaseButterflyNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNH_G_C");

	return Clss;
}


// BaseButterflyNH_G_C BaseButterflyNH_G.Default__BaseButterflyNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNH_G_C* UBaseButterflyNH_G_C::GetDefaultObj()
{
	static class UBaseButterflyNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNH_G_C*>(UBaseButterflyNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



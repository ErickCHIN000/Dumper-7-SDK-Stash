#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHN_G.BaseButterflyHN_G_C
// (None)

class UClass* UBaseButterflyHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHN_G_C");

	return Clss;
}


// BaseButterflyHN_G_C BaseButterflyHN_G.Default__BaseButterflyHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHN_G_C* UBaseButterflyHN_G_C::GetDefaultObj()
{
	static class UBaseButterflyHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHN_G_C*>(UBaseButterflyHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



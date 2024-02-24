#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLL_G.BaseButterflyLL_G_C
// (None)

class UClass* UBaseButterflyLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLL_G_C");

	return Clss;
}


// BaseButterflyLL_G_C BaseButterflyLL_G.Default__BaseButterflyLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLL_G_C* UBaseButterflyLL_G_C::GetDefaultObj()
{
	static class UBaseButterflyLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLL_G_C*>(UBaseButterflyLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



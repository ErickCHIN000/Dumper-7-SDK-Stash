#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMT_G.BaseButterflyMT_G_C
// (None)

class UClass* UBaseButterflyMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMT_G_C");

	return Clss;
}


// BaseButterflyMT_G_C BaseButterflyMT_G.Default__BaseButterflyMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMT_G_C* UBaseButterflyMT_G_C::GetDefaultObj()
{
	static class UBaseButterflyMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMT_G_C*>(UBaseButterflyMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



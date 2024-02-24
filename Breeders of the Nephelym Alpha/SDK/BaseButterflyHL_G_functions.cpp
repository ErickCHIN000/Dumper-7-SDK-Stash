#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHL_G.BaseButterflyHL_G_C
// (None)

class UClass* UBaseButterflyHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHL_G_C");

	return Clss;
}


// BaseButterflyHL_G_C BaseButterflyHL_G.Default__BaseButterflyHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHL_G_C* UBaseButterflyHL_G_C::GetDefaultObj()
{
	static class UBaseButterflyHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHL_G_C*>(UBaseButterflyHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMS_G.BaseButterflyMS_G_C
// (None)

class UClass* UBaseButterflyMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMS_G_C");

	return Clss;
}


// BaseButterflyMS_G_C BaseButterflyMS_G.Default__BaseButterflyMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMS_G_C* UBaseButterflyMS_G_C::GetDefaultObj()
{
	static class UBaseButterflyMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMS_G_C*>(UBaseButterflyMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



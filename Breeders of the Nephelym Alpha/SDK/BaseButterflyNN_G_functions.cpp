#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNN_G.BaseButterflyNN_G_C
// (None)

class UClass* UBaseButterflyNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNN_G_C");

	return Clss;
}


// BaseButterflyNN_G_C BaseButterflyNN_G.Default__BaseButterflyNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNN_G_C* UBaseButterflyNN_G_C::GetDefaultObj()
{
	static class UBaseButterflyNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNN_G_C*>(UBaseButterflyNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



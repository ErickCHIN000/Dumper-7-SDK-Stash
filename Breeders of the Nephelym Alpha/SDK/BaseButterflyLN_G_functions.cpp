#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLN_G.BaseButterflyLN_G_C
// (None)

class UClass* UBaseButterflyLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLN_G_C");

	return Clss;
}


// BaseButterflyLN_G_C BaseButterflyLN_G.Default__BaseButterflyLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLN_G_C* UBaseButterflyLN_G_C::GetDefaultObj()
{
	static class UBaseButterflyLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLN_G_C*>(UBaseButterflyLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



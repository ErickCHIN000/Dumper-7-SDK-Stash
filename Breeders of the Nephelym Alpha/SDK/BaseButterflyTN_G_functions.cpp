#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTN_G.BaseButterflyTN_G_C
// (None)

class UClass* UBaseButterflyTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTN_G_C");

	return Clss;
}


// BaseButterflyTN_G_C BaseButterflyTN_G.Default__BaseButterflyTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTN_G_C* UBaseButterflyTN_G_C::GetDefaultObj()
{
	static class UBaseButterflyTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTN_G_C*>(UBaseButterflyTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



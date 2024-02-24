#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLT_G.BaseButterflyLT_G_C
// (None)

class UClass* UBaseButterflyLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLT_G_C");

	return Clss;
}


// BaseButterflyLT_G_C BaseButterflyLT_G.Default__BaseButterflyLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLT_G_C* UBaseButterflyLT_G_C::GetDefaultObj()
{
	static class UBaseButterflyLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLT_G_C*>(UBaseButterflyLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



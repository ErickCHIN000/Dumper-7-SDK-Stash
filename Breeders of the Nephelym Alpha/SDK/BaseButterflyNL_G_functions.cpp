#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNL_G.BaseButterflyNL_G_C
// (None)

class UClass* UBaseButterflyNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNL_G_C");

	return Clss;
}


// BaseButterflyNL_G_C BaseButterflyNL_G.Default__BaseButterflyNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNL_G_C* UBaseButterflyNL_G_C::GetDefaultObj()
{
	static class UBaseButterflyNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNL_G_C*>(UBaseButterflyNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



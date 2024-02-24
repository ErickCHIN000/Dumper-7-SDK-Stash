#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTM_G.BaseDoggyTM_G_C
// (None)

class UClass* UBaseDoggyTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTM_G_C");

	return Clss;
}


// BaseDoggyTM_G_C BaseDoggyTM_G.Default__BaseDoggyTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTM_G_C* UBaseDoggyTM_G_C::GetDefaultObj()
{
	static class UBaseDoggyTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTM_G_C*>(UBaseDoggyTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



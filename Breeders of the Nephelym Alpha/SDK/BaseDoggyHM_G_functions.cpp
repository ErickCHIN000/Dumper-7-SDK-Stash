#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHM_G.BaseDoggyHM_G_C
// (None)

class UClass* UBaseDoggyHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHM_G_C");

	return Clss;
}


// BaseDoggyHM_G_C BaseDoggyHM_G.Default__BaseDoggyHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHM_G_C* UBaseDoggyHM_G_C::GetDefaultObj()
{
	static class UBaseDoggyHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHM_G_C*>(UBaseDoggyHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLL_G.BaseDoggyLL_G_C
// (None)

class UClass* UBaseDoggyLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLL_G_C");

	return Clss;
}


// BaseDoggyLL_G_C BaseDoggyLL_G.Default__BaseDoggyLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLL_G_C* UBaseDoggyLL_G_C::GetDefaultObj()
{
	static class UBaseDoggyLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLL_G_C*>(UBaseDoggyLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



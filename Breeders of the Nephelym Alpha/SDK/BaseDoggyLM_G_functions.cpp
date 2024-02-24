#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLM_G.BaseDoggyLM_G_C
// (None)

class UClass* UBaseDoggyLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLM_G_C");

	return Clss;
}


// BaseDoggyLM_G_C BaseDoggyLM_G.Default__BaseDoggyLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLM_G_C* UBaseDoggyLM_G_C::GetDefaultObj()
{
	static class UBaseDoggyLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLM_G_C*>(UBaseDoggyLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



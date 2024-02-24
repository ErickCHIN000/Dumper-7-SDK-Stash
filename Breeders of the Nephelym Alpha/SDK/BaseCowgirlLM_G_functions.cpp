#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLM_G.BaseCowgirlLM_G_C
// (None)

class UClass* UBaseCowgirlLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLM_G_C");

	return Clss;
}


// BaseCowgirlLM_G_C BaseCowgirlLM_G.Default__BaseCowgirlLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLM_G_C* UBaseCowgirlLM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLM_G_C*>(UBaseCowgirlLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



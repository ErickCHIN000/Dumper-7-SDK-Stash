#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSH_G.BaseCowgirlSH_G_C
// (None)

class UClass* UBaseCowgirlSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSH_G_C");

	return Clss;
}


// BaseCowgirlSH_G_C BaseCowgirlSH_G.Default__BaseCowgirlSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSH_G_C* UBaseCowgirlSH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSH_G_C*>(UBaseCowgirlSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



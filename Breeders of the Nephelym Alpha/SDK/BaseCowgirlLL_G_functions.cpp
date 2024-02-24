#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLL_G.BaseCowgirlLL_G_C
// (None)

class UClass* UBaseCowgirlLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLL_G_C");

	return Clss;
}


// BaseCowgirlLL_G_C BaseCowgirlLL_G.Default__BaseCowgirlLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLL_G_C* UBaseCowgirlLL_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLL_G_C*>(UBaseCowgirlLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



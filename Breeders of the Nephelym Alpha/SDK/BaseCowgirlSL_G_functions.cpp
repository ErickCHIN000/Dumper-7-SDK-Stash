#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSL_G.BaseCowgirlSL_G_C
// (None)

class UClass* UBaseCowgirlSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSL_G_C");

	return Clss;
}


// BaseCowgirlSL_G_C BaseCowgirlSL_G.Default__BaseCowgirlSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSL_G_C* UBaseCowgirlSL_G_C::GetDefaultObj()
{
	static class UBaseCowgirlSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSL_G_C*>(UBaseCowgirlSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



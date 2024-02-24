#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlST_G.BaseCowgirlST_G_C
// (None)

class UClass* UBaseCowgirlST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlST_G_C");

	return Clss;
}


// BaseCowgirlST_G_C BaseCowgirlST_G.Default__BaseCowgirlST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlST_G_C* UBaseCowgirlST_G_C::GetDefaultObj()
{
	static class UBaseCowgirlST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlST_G_C*>(UBaseCowgirlST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSN_G.BaseCowgirlSN_G_C
// (None)

class UClass* UBaseCowgirlSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSN_G_C");

	return Clss;
}


// BaseCowgirlSN_G_C BaseCowgirlSN_G.Default__BaseCowgirlSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSN_G_C* UBaseCowgirlSN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSN_G_C*>(UBaseCowgirlSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSS_G.BaseCowgirlSS_G_C
// (None)

class UClass* UBaseCowgirlSS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSS_G_C");

	return Clss;
}


// BaseCowgirlSS_G_C BaseCowgirlSS_G.Default__BaseCowgirlSS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSS_G_C* UBaseCowgirlSS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlSS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSS_G_C*>(UBaseCowgirlSS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNS_G.BaseCowgirlNS_G_C
// (None)

class UClass* UBaseCowgirlNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNS_G_C");

	return Clss;
}


// BaseCowgirlNS_G_C BaseCowgirlNS_G.Default__BaseCowgirlNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNS_G_C* UBaseCowgirlNS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNS_G_C*>(UBaseCowgirlNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



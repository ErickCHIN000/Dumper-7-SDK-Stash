#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMT_G.BaseCowgirlMT_G_C
// (None)

class UClass* UBaseCowgirlMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMT_G_C");

	return Clss;
}


// BaseCowgirlMT_G_C BaseCowgirlMT_G.Default__BaseCowgirlMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMT_G_C* UBaseCowgirlMT_G_C::GetDefaultObj()
{
	static class UBaseCowgirlMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMT_G_C*>(UBaseCowgirlMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



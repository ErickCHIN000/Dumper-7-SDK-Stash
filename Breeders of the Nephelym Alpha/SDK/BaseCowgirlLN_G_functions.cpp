#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLN_G.BaseCowgirlLN_G_C
// (None)

class UClass* UBaseCowgirlLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLN_G_C");

	return Clss;
}


// BaseCowgirlLN_G_C BaseCowgirlLN_G.Default__BaseCowgirlLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLN_G_C* UBaseCowgirlLN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLN_G_C*>(UBaseCowgirlLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



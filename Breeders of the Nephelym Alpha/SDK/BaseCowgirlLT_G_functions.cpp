#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLT_G.BaseCowgirlLT_G_C
// (None)

class UClass* UBaseCowgirlLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLT_G_C");

	return Clss;
}


// BaseCowgirlLT_G_C BaseCowgirlLT_G.Default__BaseCowgirlLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLT_G_C* UBaseCowgirlLT_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLT_G_C*>(UBaseCowgirlLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



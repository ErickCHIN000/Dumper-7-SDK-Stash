#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLS_G.BaseCowgirlLS_G_C
// (None)

class UClass* UBaseCowgirlLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLS_G_C");

	return Clss;
}


// BaseCowgirlLS_G_C BaseCowgirlLS_G.Default__BaseCowgirlLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLS_G_C* UBaseCowgirlLS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLS_G_C*>(UBaseCowgirlLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



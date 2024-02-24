#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTL_G.BaseCowgirlTL_G_C
// (None)

class UClass* UBaseCowgirlTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTL_G_C");

	return Clss;
}


// BaseCowgirlTL_G_C BaseCowgirlTL_G.Default__BaseCowgirlTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTL_G_C* UBaseCowgirlTL_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTL_G_C*>(UBaseCowgirlTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



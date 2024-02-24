#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTT_G.BaseCowgirlTT_G_C
// (None)

class UClass* UBaseCowgirlTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTT_G_C");

	return Clss;
}


// BaseCowgirlTT_G_C BaseCowgirlTT_G.Default__BaseCowgirlTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTT_G_C* UBaseCowgirlTT_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTT_G_C*>(UBaseCowgirlTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



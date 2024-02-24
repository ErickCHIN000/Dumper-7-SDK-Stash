#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTH_G.BaseCowgirlTH_G_C
// (None)

class UClass* UBaseCowgirlTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTH_G_C");

	return Clss;
}


// BaseCowgirlTH_G_C BaseCowgirlTH_G.Default__BaseCowgirlTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTH_G_C* UBaseCowgirlTH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTH_G_C*>(UBaseCowgirlTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



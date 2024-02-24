#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTM_G.BaseCowgirlTM_G_C
// (None)

class UClass* UBaseCowgirlTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTM_G_C");

	return Clss;
}


// BaseCowgirlTM_G_C BaseCowgirlTM_G.Default__BaseCowgirlTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTM_G_C* UBaseCowgirlTM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTM_G_C*>(UBaseCowgirlTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



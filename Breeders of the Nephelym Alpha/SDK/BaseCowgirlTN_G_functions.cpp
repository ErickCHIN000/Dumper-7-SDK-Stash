#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTN_G.BaseCowgirlTN_G_C
// (None)

class UClass* UBaseCowgirlTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTN_G_C");

	return Clss;
}


// BaseCowgirlTN_G_C BaseCowgirlTN_G.Default__BaseCowgirlTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTN_G_C* UBaseCowgirlTN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTN_G_C*>(UBaseCowgirlTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



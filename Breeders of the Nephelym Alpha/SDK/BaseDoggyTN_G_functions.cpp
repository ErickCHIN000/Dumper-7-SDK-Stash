#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTN_G.BaseDoggyTN_G_C
// (None)

class UClass* UBaseDoggyTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTN_G_C");

	return Clss;
}


// BaseDoggyTN_G_C BaseDoggyTN_G.Default__BaseDoggyTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTN_G_C* UBaseDoggyTN_G_C::GetDefaultObj()
{
	static class UBaseDoggyTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTN_G_C*>(UBaseDoggyTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



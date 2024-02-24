#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLN_G.BaseDoggyLN_G_C
// (None)

class UClass* UBaseDoggyLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLN_G_C");

	return Clss;
}


// BaseDoggyLN_G_C BaseDoggyLN_G.Default__BaseDoggyLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLN_G_C* UBaseDoggyLN_G_C::GetDefaultObj()
{
	static class UBaseDoggyLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLN_G_C*>(UBaseDoggyLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



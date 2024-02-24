#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLH_G.BaseDoggyLH_G_C
// (None)

class UClass* UBaseDoggyLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLH_G_C");

	return Clss;
}


// BaseDoggyLH_G_C BaseDoggyLH_G.Default__BaseDoggyLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLH_G_C* UBaseDoggyLH_G_C::GetDefaultObj()
{
	static class UBaseDoggyLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLH_G_C*>(UBaseDoggyLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



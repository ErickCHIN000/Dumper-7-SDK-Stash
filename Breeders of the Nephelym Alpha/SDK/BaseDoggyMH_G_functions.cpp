#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMH_G.BaseDoggyMH_G_C
// (None)

class UClass* UBaseDoggyMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMH_G_C");

	return Clss;
}


// BaseDoggyMH_G_C BaseDoggyMH_G.Default__BaseDoggyMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMH_G_C* UBaseDoggyMH_G_C::GetDefaultObj()
{
	static class UBaseDoggyMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMH_G_C*>(UBaseDoggyMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



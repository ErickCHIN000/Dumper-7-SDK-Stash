#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMM_G.BaseDoggyMM_G_C
// (None)

class UClass* UBaseDoggyMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMM_G_C");

	return Clss;
}


// BaseDoggyMM_G_C BaseDoggyMM_G.Default__BaseDoggyMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMM_G_C* UBaseDoggyMM_G_C::GetDefaultObj()
{
	static class UBaseDoggyMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMM_G_C*>(UBaseDoggyMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



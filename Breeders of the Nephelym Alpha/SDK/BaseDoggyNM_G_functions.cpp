#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNM_G.BaseDoggyNM_G_C
// (None)

class UClass* UBaseDoggyNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNM_G_C");

	return Clss;
}


// BaseDoggyNM_G_C BaseDoggyNM_G.Default__BaseDoggyNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNM_G_C* UBaseDoggyNM_G_C::GetDefaultObj()
{
	static class UBaseDoggyNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNM_G_C*>(UBaseDoggyNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



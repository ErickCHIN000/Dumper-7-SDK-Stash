#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNL_G.BaseDoggyNL_G_C
// (None)

class UClass* UBaseDoggyNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNL_G_C");

	return Clss;
}


// BaseDoggyNL_G_C BaseDoggyNL_G.Default__BaseDoggyNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNL_G_C* UBaseDoggyNL_G_C::GetDefaultObj()
{
	static class UBaseDoggyNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNL_G_C*>(UBaseDoggyNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



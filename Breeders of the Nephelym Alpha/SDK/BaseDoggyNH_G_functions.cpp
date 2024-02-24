#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNH_G.BaseDoggyNH_G_C
// (None)

class UClass* UBaseDoggyNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNH_G_C");

	return Clss;
}


// BaseDoggyNH_G_C BaseDoggyNH_G.Default__BaseDoggyNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNH_G_C* UBaseDoggyNH_G_C::GetDefaultObj()
{
	static class UBaseDoggyNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNH_G_C*>(UBaseDoggyNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



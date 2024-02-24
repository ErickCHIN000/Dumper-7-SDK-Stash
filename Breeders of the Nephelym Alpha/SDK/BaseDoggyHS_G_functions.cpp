#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHS_G.BaseDoggyHS_G_C
// (None)

class UClass* UBaseDoggyHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHS_G_C");

	return Clss;
}


// BaseDoggyHS_G_C BaseDoggyHS_G.Default__BaseDoggyHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHS_G_C* UBaseDoggyHS_G_C::GetDefaultObj()
{
	static class UBaseDoggyHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHS_G_C*>(UBaseDoggyHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



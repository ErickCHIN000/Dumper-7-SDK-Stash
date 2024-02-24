#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTS_G.BaseDoggyTS_G_C
// (None)

class UClass* UBaseDoggyTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTS_G_C");

	return Clss;
}


// BaseDoggyTS_G_C BaseDoggyTS_G.Default__BaseDoggyTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTS_G_C* UBaseDoggyTS_G_C::GetDefaultObj()
{
	static class UBaseDoggyTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTS_G_C*>(UBaseDoggyTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



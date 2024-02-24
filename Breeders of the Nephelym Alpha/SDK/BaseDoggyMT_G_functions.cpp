#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMT_G.BaseDoggyMT_G_C
// (None)

class UClass* UBaseDoggyMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMT_G_C");

	return Clss;
}


// BaseDoggyMT_G_C BaseDoggyMT_G.Default__BaseDoggyMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMT_G_C* UBaseDoggyMT_G_C::GetDefaultObj()
{
	static class UBaseDoggyMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMT_G_C*>(UBaseDoggyMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



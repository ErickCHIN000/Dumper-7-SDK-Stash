#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNN_G.BaseDoggyNN_G_C
// (None)

class UClass* UBaseDoggyNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNN_G_C");

	return Clss;
}


// BaseDoggyNN_G_C BaseDoggyNN_G.Default__BaseDoggyNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNN_G_C* UBaseDoggyNN_G_C::GetDefaultObj()
{
	static class UBaseDoggyNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNN_G_C*>(UBaseDoggyNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



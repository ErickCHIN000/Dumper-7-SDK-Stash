#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLT_G.BaseDoggyLT_G_C
// (None)

class UClass* UBaseDoggyLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLT_G_C");

	return Clss;
}


// BaseDoggyLT_G_C BaseDoggyLT_G.Default__BaseDoggyLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLT_G_C* UBaseDoggyLT_G_C::GetDefaultObj()
{
	static class UBaseDoggyLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLT_G_C*>(UBaseDoggyLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



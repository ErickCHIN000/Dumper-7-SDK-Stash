#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLS_G.BaseDoggyLS_G_C
// (None)

class UClass* UBaseDoggyLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLS_G_C");

	return Clss;
}


// BaseDoggyLS_G_C BaseDoggyLS_G.Default__BaseDoggyLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLS_G_C* UBaseDoggyLS_G_C::GetDefaultObj()
{
	static class UBaseDoggyLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLS_G_C*>(UBaseDoggyLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



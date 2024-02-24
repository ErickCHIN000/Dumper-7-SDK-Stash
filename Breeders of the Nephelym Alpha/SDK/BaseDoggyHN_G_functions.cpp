#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHN_G.BaseDoggyHN_G_C
// (None)

class UClass* UBaseDoggyHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHN_G_C");

	return Clss;
}


// BaseDoggyHN_G_C BaseDoggyHN_G.Default__BaseDoggyHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHN_G_C* UBaseDoggyHN_G_C::GetDefaultObj()
{
	static class UBaseDoggyHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHN_G_C*>(UBaseDoggyHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



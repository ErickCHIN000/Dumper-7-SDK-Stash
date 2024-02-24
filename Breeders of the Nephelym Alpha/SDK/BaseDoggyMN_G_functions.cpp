#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMN_G.BaseDoggyMN_G_C
// (None)

class UClass* UBaseDoggyMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMN_G_C");

	return Clss;
}


// BaseDoggyMN_G_C BaseDoggyMN_G.Default__BaseDoggyMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMN_G_C* UBaseDoggyMN_G_C::GetDefaultObj()
{
	static class UBaseDoggyMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMN_G_C*>(UBaseDoggyMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



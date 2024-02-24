#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHT_G.BaseDoggyHT_G_C
// (None)

class UClass* UBaseDoggyHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHT_G_C");

	return Clss;
}


// BaseDoggyHT_G_C BaseDoggyHT_G.Default__BaseDoggyHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHT_G_C* UBaseDoggyHT_G_C::GetDefaultObj()
{
	static class UBaseDoggyHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHT_G_C*>(UBaseDoggyHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



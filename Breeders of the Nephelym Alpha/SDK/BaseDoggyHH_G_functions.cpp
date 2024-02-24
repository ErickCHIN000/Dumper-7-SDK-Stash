#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHH_G.BaseDoggyHH_G_C
// (None)

class UClass* UBaseDoggyHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHH_G_C");

	return Clss;
}


// BaseDoggyHH_G_C BaseDoggyHH_G.Default__BaseDoggyHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHH_G_C* UBaseDoggyHH_G_C::GetDefaultObj()
{
	static class UBaseDoggyHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHH_G_C*>(UBaseDoggyHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



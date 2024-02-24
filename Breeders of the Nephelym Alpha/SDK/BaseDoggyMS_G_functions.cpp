#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMS_G.BaseDoggyMS_G_C
// (None)

class UClass* UBaseDoggyMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMS_G_C");

	return Clss;
}


// BaseDoggyMS_G_C BaseDoggyMS_G.Default__BaseDoggyMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMS_G_C* UBaseDoggyMS_G_C::GetDefaultObj()
{
	static class UBaseDoggyMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMS_G_C*>(UBaseDoggyMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMS_G.BaseCowgirlMS_G_C
// (None)

class UClass* UBaseCowgirlMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMS_G_C");

	return Clss;
}


// BaseCowgirlMS_G_C BaseCowgirlMS_G.Default__BaseCowgirlMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMS_G_C* UBaseCowgirlMS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMS_G_C*>(UBaseCowgirlMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHL_G.BaseCowgirlHL_G_C
// (None)

class UClass* UBaseCowgirlHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHL_G_C");

	return Clss;
}


// BaseCowgirlHL_G_C BaseCowgirlHL_G.Default__BaseCowgirlHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHL_G_C* UBaseCowgirlHL_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHL_G_C*>(UBaseCowgirlHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNN_G.BaseCowgirlNN_G_C
// (None)

class UClass* UBaseCowgirlNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNN_G_C");

	return Clss;
}


// BaseCowgirlNN_G_C BaseCowgirlNN_G.Default__BaseCowgirlNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNN_G_C* UBaseCowgirlNN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNN_G_C*>(UBaseCowgirlNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



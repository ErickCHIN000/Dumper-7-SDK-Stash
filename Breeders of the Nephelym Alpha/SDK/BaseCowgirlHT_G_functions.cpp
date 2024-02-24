#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHT_G.BaseCowgirlHT_G_C
// (None)

class UClass* UBaseCowgirlHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHT_G_C");

	return Clss;
}


// BaseCowgirlHT_G_C BaseCowgirlHT_G.Default__BaseCowgirlHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHT_G_C* UBaseCowgirlHT_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHT_G_C*>(UBaseCowgirlHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



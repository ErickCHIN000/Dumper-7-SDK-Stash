#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHN_G.BaseCowgirlHN_G_C
// (None)

class UClass* UBaseCowgirlHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHN_G_C");

	return Clss;
}


// BaseCowgirlHN_G_C BaseCowgirlHN_G.Default__BaseCowgirlHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHN_G_C* UBaseCowgirlHN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHN_G_C*>(UBaseCowgirlHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



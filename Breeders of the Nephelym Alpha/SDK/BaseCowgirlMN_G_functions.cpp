#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMN_G.BaseCowgirlMN_G_C
// (None)

class UClass* UBaseCowgirlMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMN_G_C");

	return Clss;
}


// BaseCowgirlMN_G_C BaseCowgirlMN_G.Default__BaseCowgirlMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMN_G_C* UBaseCowgirlMN_G_C::GetDefaultObj()
{
	static class UBaseCowgirlMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMN_G_C*>(UBaseCowgirlMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



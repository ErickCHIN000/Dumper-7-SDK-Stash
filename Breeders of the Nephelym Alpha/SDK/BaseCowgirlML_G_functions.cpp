#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlML_G.BaseCowgirlML_G_C
// (None)

class UClass* UBaseCowgirlML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlML_G_C");

	return Clss;
}


// BaseCowgirlML_G_C BaseCowgirlML_G.Default__BaseCowgirlML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlML_G_C* UBaseCowgirlML_G_C::GetDefaultObj()
{
	static class UBaseCowgirlML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlML_G_C*>(UBaseCowgirlML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



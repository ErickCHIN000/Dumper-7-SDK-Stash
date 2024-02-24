#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTS_G.BaseCowgirlTS_G_C
// (None)

class UClass* UBaseCowgirlTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTS_G_C");

	return Clss;
}


// BaseCowgirlTS_G_C BaseCowgirlTS_G.Default__BaseCowgirlTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTS_G_C* UBaseCowgirlTS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTS_G_C*>(UBaseCowgirlTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



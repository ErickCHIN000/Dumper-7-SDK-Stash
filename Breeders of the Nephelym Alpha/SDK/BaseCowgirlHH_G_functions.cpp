#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHH_G.BaseCowgirlHH_G_C
// (None)

class UClass* UBaseCowgirlHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHH_G_C");

	return Clss;
}


// BaseCowgirlHH_G_C BaseCowgirlHH_G.Default__BaseCowgirlHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHH_G_C* UBaseCowgirlHH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHH_G_C*>(UBaseCowgirlHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



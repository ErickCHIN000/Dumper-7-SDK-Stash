#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHN_G.BaseLiftedHN_G_C
// (None)

class UClass* UBaseLiftedHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHN_G_C");

	return Clss;
}


// BaseLiftedHN_G_C BaseLiftedHN_G.Default__BaseLiftedHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHN_G_C* UBaseLiftedHN_G_C::GetDefaultObj()
{
	static class UBaseLiftedHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHN_G_C*>(UBaseLiftedHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



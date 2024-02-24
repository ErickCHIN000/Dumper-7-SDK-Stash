#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHT_G.BaseLiftedHT_G_C
// (None)

class UClass* UBaseLiftedHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHT_G_C");

	return Clss;
}


// BaseLiftedHT_G_C BaseLiftedHT_G.Default__BaseLiftedHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHT_G_C* UBaseLiftedHT_G_C::GetDefaultObj()
{
	static class UBaseLiftedHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHT_G_C*>(UBaseLiftedHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



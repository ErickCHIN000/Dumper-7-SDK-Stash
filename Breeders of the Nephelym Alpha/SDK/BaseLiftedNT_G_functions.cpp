#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedNT_G.BaseLiftedNT_G_C
// (None)

class UClass* UBaseLiftedNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedNT_G_C");

	return Clss;
}


// BaseLiftedNT_G_C BaseLiftedNT_G.Default__BaseLiftedNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedNT_G_C* UBaseLiftedNT_G_C::GetDefaultObj()
{
	static class UBaseLiftedNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedNT_G_C*>(UBaseLiftedNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



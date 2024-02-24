#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedLT_G.BaseLiftedLT_G_C
// (None)

class UClass* UBaseLiftedLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedLT_G_C");

	return Clss;
}


// BaseLiftedLT_G_C BaseLiftedLT_G.Default__BaseLiftedLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedLT_G_C* UBaseLiftedLT_G_C::GetDefaultObj()
{
	static class UBaseLiftedLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedLT_G_C*>(UBaseLiftedLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



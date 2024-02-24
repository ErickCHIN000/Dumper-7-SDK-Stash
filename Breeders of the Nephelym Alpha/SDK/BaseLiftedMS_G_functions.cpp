#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMS_G.BaseLiftedMS_G_C
// (None)

class UClass* UBaseLiftedMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMS_G_C");

	return Clss;
}


// BaseLiftedMS_G_C BaseLiftedMS_G.Default__BaseLiftedMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMS_G_C* UBaseLiftedMS_G_C::GetDefaultObj()
{
	static class UBaseLiftedMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMS_G_C*>(UBaseLiftedMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



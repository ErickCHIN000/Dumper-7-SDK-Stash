#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNM_G.BaseMilkNM_G_C
// (None)

class UClass* UBaseMilkNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNM_G_C");

	return Clss;
}


// BaseMilkNM_G_C BaseMilkNM_G.Default__BaseMilkNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNM_G_C* UBaseMilkNM_G_C::GetDefaultObj()
{
	static class UBaseMilkNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNM_G_C*>(UBaseMilkNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



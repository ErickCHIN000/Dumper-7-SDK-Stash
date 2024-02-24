#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNL_G.BaseMilkNL_G_C
// (None)

class UClass* UBaseMilkNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNL_G_C");

	return Clss;
}


// BaseMilkNL_G_C BaseMilkNL_G.Default__BaseMilkNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNL_G_C* UBaseMilkNL_G_C::GetDefaultObj()
{
	static class UBaseMilkNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNL_G_C*>(UBaseMilkNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



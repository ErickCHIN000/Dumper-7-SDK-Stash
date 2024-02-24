#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNH_G.BaseMilkNH_G_C
// (None)

class UClass* UBaseMilkNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNH_G_C");

	return Clss;
}


// BaseMilkNH_G_C BaseMilkNH_G.Default__BaseMilkNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNH_G_C* UBaseMilkNH_G_C::GetDefaultObj()
{
	static class UBaseMilkNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNH_G_C*>(UBaseMilkNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNT_G.BaseMilkNT_G_C
// (None)

class UClass* UBaseMilkNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNT_G_C");

	return Clss;
}


// BaseMilkNT_G_C BaseMilkNT_G.Default__BaseMilkNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNT_G_C* UBaseMilkNT_G_C::GetDefaultObj()
{
	static class UBaseMilkNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNT_G_C*>(UBaseMilkNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



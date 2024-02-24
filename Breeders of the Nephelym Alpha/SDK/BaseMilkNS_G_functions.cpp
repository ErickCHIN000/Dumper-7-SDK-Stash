#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNS_G.BaseMilkNS_G_C
// (None)

class UClass* UBaseMilkNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNS_G_C");

	return Clss;
}


// BaseMilkNS_G_C BaseMilkNS_G.Default__BaseMilkNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNS_G_C* UBaseMilkNS_G_C::GetDefaultObj()
{
	static class UBaseMilkNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNS_G_C*>(UBaseMilkNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



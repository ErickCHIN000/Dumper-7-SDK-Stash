#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNL_03_G.MilkNL_03_G_C
// (None)

class UClass* UMilkNL_03_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNL_03_G_C");

	return Clss;
}


// MilkNL_03_G_C MilkNL_03_G.Default__MilkNL_03_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNL_03_G_C* UMilkNL_03_G_C::GetDefaultObj()
{
	static class UMilkNL_03_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNL_03_G_C*>(UMilkNL_03_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



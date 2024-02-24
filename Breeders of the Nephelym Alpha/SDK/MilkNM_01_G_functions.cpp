#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNM_01_G.MilkNM_01_G_C
// (None)

class UClass* UMilkNM_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNM_01_G_C");

	return Clss;
}


// MilkNM_01_G_C MilkNM_01_G.Default__MilkNM_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNM_01_G_C* UMilkNM_01_G_C::GetDefaultObj()
{
	static class UMilkNM_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNM_01_G_C*>(UMilkNM_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



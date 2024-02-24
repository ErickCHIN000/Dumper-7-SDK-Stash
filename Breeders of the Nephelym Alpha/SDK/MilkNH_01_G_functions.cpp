#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNH_01_G.MilkNH_01_G_C
// (None)

class UClass* UMilkNH_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNH_01_G_C");

	return Clss;
}


// MilkNH_01_G_C MilkNH_01_G.Default__MilkNH_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNH_01_G_C* UMilkNH_01_G_C::GetDefaultObj()
{
	static class UMilkNH_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNH_01_G_C*>(UMilkNH_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



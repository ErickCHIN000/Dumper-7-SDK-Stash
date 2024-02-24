#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNH_02_G.MilkNH_02_G_C
// (None)

class UClass* UMilkNH_02_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNH_02_G_C");

	return Clss;
}


// MilkNH_02_G_C MilkNH_02_G.Default__MilkNH_02_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNH_02_G_C* UMilkNH_02_G_C::GetDefaultObj()
{
	static class UMilkNH_02_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNH_02_G_C*>(UMilkNH_02_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



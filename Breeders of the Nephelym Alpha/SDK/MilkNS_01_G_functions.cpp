#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNS_01_G.MilkNS_01_G_C
// (None)

class UClass* UMilkNS_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNS_01_G_C");

	return Clss;
}


// MilkNS_01_G_C MilkNS_01_G.Default__MilkNS_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNS_01_G_C* UMilkNS_01_G_C::GetDefaultObj()
{
	static class UMilkNS_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNS_01_G_C*>(UMilkNS_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



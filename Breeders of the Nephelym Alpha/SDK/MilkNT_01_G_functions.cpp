#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNT_01_G.MilkNT_01_G_C
// (None)

class UClass* UMilkNT_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNT_01_G_C");

	return Clss;
}


// MilkNT_01_G_C MilkNT_01_G.Default__MilkNT_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNT_01_G_C* UMilkNT_01_G_C::GetDefaultObj()
{
	static class UMilkNT_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNT_01_G_C*>(UMilkNT_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



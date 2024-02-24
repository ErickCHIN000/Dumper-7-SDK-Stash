#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNT_01_R.MilkNT_01_R_C
// (None)

class UClass* UMilkNT_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNT_01_R_C");

	return Clss;
}


// MilkNT_01_R_C MilkNT_01_R.Default__MilkNT_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNT_01_R_C* UMilkNT_01_R_C::GetDefaultObj()
{
	static class UMilkNT_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNT_01_R_C*>(UMilkNT_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



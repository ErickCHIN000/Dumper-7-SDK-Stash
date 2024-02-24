#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNS_01_R.MilkNS_01_R_C
// (None)

class UClass* UMilkNS_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNS_01_R_C");

	return Clss;
}


// MilkNS_01_R_C MilkNS_01_R.Default__MilkNS_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNS_01_R_C* UMilkNS_01_R_C::GetDefaultObj()
{
	static class UMilkNS_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNS_01_R_C*>(UMilkNS_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



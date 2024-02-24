#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNN_01_R.MilkNN_01_R_C
// (None)

class UClass* UMilkNN_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNN_01_R_C");

	return Clss;
}


// MilkNN_01_R_C MilkNN_01_R.Default__MilkNN_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNN_01_R_C* UMilkNN_01_R_C::GetDefaultObj()
{
	static class UMilkNN_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNN_01_R_C*>(UMilkNN_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



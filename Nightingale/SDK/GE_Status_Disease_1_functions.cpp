#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Disease_1.GE_Status_Disease_1_C
// (None)

class UClass* UGE_Status_Disease_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Disease_1_C");

	return Clss;
}


// GE_Status_Disease_1_C GE_Status_Disease_1.Default__GE_Status_Disease_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Disease_1_C* UGE_Status_Disease_1_C::GetDefaultObj()
{
	static class UGE_Status_Disease_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Disease_1_C*>(UGE_Status_Disease_1_C::StaticClass()->DefaultObject);

	return Default;
}

}



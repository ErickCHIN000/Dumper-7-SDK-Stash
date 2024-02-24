#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Disease_2.GE_Status_Disease_2_C
// (None)

class UClass* UGE_Status_Disease_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Disease_2_C");

	return Clss;
}


// GE_Status_Disease_2_C GE_Status_Disease_2.Default__GE_Status_Disease_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Disease_2_C* UGE_Status_Disease_2_C::GetDefaultObj()
{
	static class UGE_Status_Disease_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Disease_2_C*>(UGE_Status_Disease_2_C::StaticClass()->DefaultObject);

	return Default;
}

}



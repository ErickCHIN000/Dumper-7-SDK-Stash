#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Hot.GE_Status_Hot_C
// (None)

class UClass* UGE_Status_Hot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Hot_C");

	return Clss;
}


// GE_Status_Hot_C GE_Status_Hot.Default__GE_Status_Hot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Hot_C* UGE_Status_Hot_C::GetDefaultObj()
{
	static class UGE_Status_Hot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Hot_C*>(UGE_Status_Hot_C::StaticClass()->DefaultObject);

	return Default;
}

}



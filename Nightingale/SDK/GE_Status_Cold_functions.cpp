#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Cold.GE_Status_Cold_C
// (None)

class UClass* UGE_Status_Cold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Cold_C");

	return Clss;
}


// GE_Status_Cold_C GE_Status_Cold.Default__GE_Status_Cold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Cold_C* UGE_Status_Cold_C::GetDefaultObj()
{
	static class UGE_Status_Cold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Cold_C*>(UGE_Status_Cold_C::StaticClass()->DefaultObject);

	return Default;
}

}



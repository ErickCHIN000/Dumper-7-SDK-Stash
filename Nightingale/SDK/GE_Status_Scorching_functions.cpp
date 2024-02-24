#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Scorching.GE_Status_Scorching_C
// (None)

class UClass* UGE_Status_Scorching_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Scorching_C");

	return Clss;
}


// GE_Status_Scorching_C GE_Status_Scorching.Default__GE_Status_Scorching_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Scorching_C* UGE_Status_Scorching_C::GetDefaultObj()
{
	static class UGE_Status_Scorching_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Scorching_C*>(UGE_Status_Scorching_C::StaticClass()->DefaultObject);

	return Default;
}

}



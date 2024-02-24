#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ClimbingCost.GE_ClimbingCost_C
// (None)

class UClass* UGE_ClimbingCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ClimbingCost_C");

	return Clss;
}


// GE_ClimbingCost_C GE_ClimbingCost.Default__GE_ClimbingCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ClimbingCost_C* UGE_ClimbingCost_C::GetDefaultObj()
{
	static class UGE_ClimbingCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ClimbingCost_C*>(UGE_ClimbingCost_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RangedFireFeedback.GE_RangedFireFeedback_C
// (None)

class UClass* UGE_RangedFireFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RangedFireFeedback_C");

	return Clss;
}


// GE_RangedFireFeedback_C GE_RangedFireFeedback.Default__GE_RangedFireFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RangedFireFeedback_C* UGE_RangedFireFeedback_C::GetDefaultObj()
{
	static class UGE_RangedFireFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RangedFireFeedback_C*>(UGE_RangedFireFeedback_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WispSummoned.GE_WispSummoned_C
// (None)

class UClass* UGE_WispSummoned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WispSummoned_C");

	return Clss;
}


// GE_WispSummoned_C GE_WispSummoned.Default__GE_WispSummoned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WispSummoned_C* UGE_WispSummoned_C::GetDefaultObj()
{
	static class UGE_WispSummoned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WispSummoned_C*>(UGE_WispSummoned_C::StaticClass()->DefaultObject);

	return Default;
}

}



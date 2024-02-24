#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyWadingState.GE_ApplyWadingState_C
// (None)

class UClass* UGE_ApplyWadingState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyWadingState_C");

	return Clss;
}


// GE_ApplyWadingState_C GE_ApplyWadingState.Default__GE_ApplyWadingState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyWadingState_C* UGE_ApplyWadingState_C::GetDefaultObj()
{
	static class UGE_ApplyWadingState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyWadingState_C*>(UGE_ApplyWadingState_C::StaticClass()->DefaultObject);

	return Default;
}

}



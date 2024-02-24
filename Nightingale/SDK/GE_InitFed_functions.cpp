#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InitFed.GE_InitFed_C
// (None)

class UClass* UGE_InitFed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InitFed_C");

	return Clss;
}


// GE_InitFed_C GE_InitFed.Default__GE_InitFed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InitFed_C* UGE_InitFed_C::GetDefaultObj()
{
	static class UGE_InitFed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InitFed_C*>(UGE_InitFed_C::StaticClass()->DefaultObject);

	return Default;
}

}



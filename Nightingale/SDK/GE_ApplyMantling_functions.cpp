#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyMantling.GE_ApplyMantling_C
// (None)

class UClass* UGE_ApplyMantling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyMantling_C");

	return Clss;
}


// GE_ApplyMantling_C GE_ApplyMantling.Default__GE_ApplyMantling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyMantling_C* UGE_ApplyMantling_C::GetDefaultObj()
{
	static class UGE_ApplyMantling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyMantling_C*>(UGE_ApplyMantling_C::StaticClass()->DefaultObject);

	return Default;
}

}



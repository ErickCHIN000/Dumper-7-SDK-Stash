#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ExposeWeakness.GE_ExposeWeakness_C
// (None)

class UClass* UGE_ExposeWeakness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ExposeWeakness_C");

	return Clss;
}


// GE_ExposeWeakness_C GE_ExposeWeakness.Default__GE_ExposeWeakness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ExposeWeakness_C* UGE_ExposeWeakness_C::GetDefaultObj()
{
	static class UGE_ExposeWeakness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ExposeWeakness_C*>(UGE_ExposeWeakness_C::StaticClass()->DefaultObject);

	return Default;
}

}



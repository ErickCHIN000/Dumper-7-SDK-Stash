#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyMounting.GE_ApplyMounting_C
// (None)

class UClass* UGE_ApplyMounting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyMounting_C");

	return Clss;
}


// GE_ApplyMounting_C GE_ApplyMounting.Default__GE_ApplyMounting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyMounting_C* UGE_ApplyMounting_C::GetDefaultObj()
{
	static class UGE_ApplyMounting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyMounting_C*>(UGE_ApplyMounting_C::StaticClass()->DefaultObject);

	return Default;
}

}



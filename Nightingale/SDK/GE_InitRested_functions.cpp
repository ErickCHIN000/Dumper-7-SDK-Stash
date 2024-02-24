#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InitRested.GE_InitRested_C
// (None)

class UClass* UGE_InitRested_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InitRested_C");

	return Clss;
}


// GE_InitRested_C GE_InitRested.Default__GE_InitRested_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InitRested_C* UGE_InitRested_C::GetDefaultObj()
{
	static class UGE_InitRested_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InitRested_C*>(UGE_InitRested_C::StaticClass()->DefaultObject);

	return Default;
}

}



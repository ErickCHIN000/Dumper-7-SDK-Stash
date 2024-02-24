#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDildo_BreederF.MonarchDildo_BreederF_C
// (None)

class UClass* UMonarchDildo_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDildo_BreederF_C");

	return Clss;
}


// MonarchDildo_BreederF_C MonarchDildo_BreederF.Default__MonarchDildo_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDildo_BreederF_C* UMonarchDildo_BreederF_C::GetDefaultObj()
{
	static class UMonarchDildo_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDildo_BreederF_C*>(UMonarchDildo_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



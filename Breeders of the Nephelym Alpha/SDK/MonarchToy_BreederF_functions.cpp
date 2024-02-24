#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchToy_BreederF.MonarchToy_BreederF_C
// (None)

class UClass* UMonarchToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchToy_BreederF_C");

	return Clss;
}


// MonarchToy_BreederF_C MonarchToy_BreederF.Default__MonarchToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchToy_BreederF_C* UMonarchToy_BreederF_C::GetDefaultObj()
{
	static class UMonarchToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchToy_BreederF_C*>(UMonarchToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchToy_BreederT.MonarchToy_BreederT_C
// (None)

class UClass* UMonarchToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchToy_BreederT_C");

	return Clss;
}


// MonarchToy_BreederT_C MonarchToy_BreederT.Default__MonarchToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchToy_BreederT_C* UMonarchToy_BreederT_C::GetDefaultObj()
{
	static class UMonarchToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchToy_BreederT_C*>(UMonarchToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



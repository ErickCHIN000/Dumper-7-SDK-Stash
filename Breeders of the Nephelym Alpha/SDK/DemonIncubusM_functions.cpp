#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonIncubusM.DemonIncubusM_C
// (None)

class UClass* UDemonIncubusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonIncubusM_C");

	return Clss;
}


// DemonIncubusM_C DemonIncubusM.Default__DemonIncubusM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonIncubusM_C* UDemonIncubusM_C::GetDefaultObj()
{
	static class UDemonIncubusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonIncubusM_C*>(UDemonIncubusM_C::StaticClass()->DefaultObject);

	return Default;
}

}



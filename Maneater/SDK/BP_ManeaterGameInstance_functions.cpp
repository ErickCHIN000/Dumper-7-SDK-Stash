#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ManeaterGameInstance.BP_ManeaterGameInstance_C
// (None)

class UClass* UBP_ManeaterGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ManeaterGameInstance_C");

	return Clss;
}


// BP_ManeaterGameInstance_C BP_ManeaterGameInstance.Default__BP_ManeaterGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ManeaterGameInstance_C* UBP_ManeaterGameInstance_C::GetDefaultObj()
{
	static class UBP_ManeaterGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ManeaterGameInstance_C*>(UBP_ManeaterGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}

}



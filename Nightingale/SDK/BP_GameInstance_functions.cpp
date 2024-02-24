#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// (None)

class UClass* UBP_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameInstance_C");

	return Clss;
}


// BP_GameInstance_C BP_GameInstance.Default__BP_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GameInstance_C* UBP_GameInstance_C::GetDefaultObj()
{
	static class UBP_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GameInstance_C*>(UBP_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AoePayload_Dispellable_Acid_GiantNova.BP_AoePayload_Dispellable_Acid_GiantNova_C
// (Actor)

class UClass* ABP_AoePayload_Dispellable_Acid_GiantNova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AoePayload_Dispellable_Acid_GiantNova_C");

	return Clss;
}


// BP_AoePayload_Dispellable_Acid_GiantNova_C BP_AoePayload_Dispellable_Acid_GiantNova.Default__BP_AoePayload_Dispellable_Acid_GiantNova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AoePayload_Dispellable_Acid_GiantNova_C* ABP_AoePayload_Dispellable_Acid_GiantNova_C::GetDefaultObj()
{
	static class ABP_AoePayload_Dispellable_Acid_GiantNova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AoePayload_Dispellable_Acid_GiantNova_C*>(ABP_AoePayload_Dispellable_Acid_GiantNova_C::StaticClass()->DefaultObject);

	return Default;
}

}



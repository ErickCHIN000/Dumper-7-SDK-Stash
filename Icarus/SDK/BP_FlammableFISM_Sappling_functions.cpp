#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableFISM_Sappling.BP_FlammableFISM_Sappling_C
// (None)

class UClass* UBP_FlammableFISM_Sappling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableFISM_Sappling_C");

	return Clss;
}


// BP_FlammableFISM_Sappling_C BP_FlammableFISM_Sappling.Default__BP_FlammableFISM_Sappling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FlammableFISM_Sappling_C* UBP_FlammableFISM_Sappling_C::GetDefaultObj()
{
	static class UBP_FlammableFISM_Sappling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FlammableFISM_Sappling_C*>(UBP_FlammableFISM_Sappling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableFISM_Sappling.BP_FlammableFISM_Sappling_C.CombustingExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Sappling_C::CombustingExit(class UFlammableInstanceFLOD* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Sappling_C", "CombustingExit");

	Params::UBP_FlammableFISM_Sappling_C_CombustingExit_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM_Sappling.BP_FlammableFISM_Sappling_C.CombustingEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_Sappling_C::CombustingEnter(class UFlammableInstanceFLOD* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_Sappling_C", "CombustingEnter");

	Params::UBP_FlammableFISM_Sappling_C_CombustingEnter_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}



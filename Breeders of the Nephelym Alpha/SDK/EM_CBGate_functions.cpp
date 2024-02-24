#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_CBGate.EM_CBGate_C
// (Actor)

class UClass* AEM_CBGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_CBGate_C");

	return Clss;
}


// EM_CBGate_C EM_CBGate.Default__EM_CBGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_CBGate_C* AEM_CBGate_C::GetDefaultObj()
{
	static class AEM_CBGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_CBGate_C*>(AEM_CBGate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_CBGate.EM_CBGate_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_CBGate_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_CBGate_C", "OnTrigger");

	Params::AEM_CBGate_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_CBGate.EM_CBGate_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_CBGate_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_CBGate_C", "OnBlock");

	Params::AEM_CBGate_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_CBGate.EM_CBGate_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_CBGate_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_CBGate_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_CBGate.EM_CBGate_C.ExecuteUbergraph_EM_CBGate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_CBGate_C::ExecuteUbergraph_EM_CBGate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, enum class EMoveComponentAction Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class EMoveComponentAction Temp_byte_Variable_1, bool CallFunc_CheckGameFlags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_CBGate_C", "ExecuteUbergraph_EM_CBGate");

	Params::AEM_CBGate_C_ExecuteUbergraph_EM_CBGate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



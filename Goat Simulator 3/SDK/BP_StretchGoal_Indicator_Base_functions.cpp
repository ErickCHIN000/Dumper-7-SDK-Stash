#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C
// (Actor)

class UClass* ABP_StretchGoal_Indicator_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StretchGoal_Indicator_Base_C");

	return Clss;
}


// BP_StretchGoal_Indicator_Base_C BP_StretchGoal_Indicator_Base.Default__BP_StretchGoal_Indicator_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StretchGoal_Indicator_Base_C* ABP_StretchGoal_Indicator_Base_C::GetDefaultObj()
{
	static class ABP_StretchGoal_Indicator_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StretchGoal_Indicator_Base_C*>(ABP_StretchGoal_Indicator_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.Update Ring Material Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TokenCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicRingMaterial_RingMaterial                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Indicator_Base_C::Update_Ring_Material_Value(int32 TokenCount, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicRingMaterial_RingMaterial, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "Update Ring Material Value");

	Params::ABP_StretchGoal_Indicator_Base_C_Update_Ring_Material_Value_Params Parms{};

	Parms.TokenCount = TokenCount;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateDynamicRingMaterial_RingMaterial = CallFunc_CreateDynamicRingMaterial_RingMaterial;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.CreateDynamicRingMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    RingMaterial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Indicator_Base_C::CreateDynamicRingMaterial(class UMaterialInstanceDynamic** RingMaterial, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "CreateDynamicRingMaterial");

	Params::ABP_StretchGoal_Indicator_Base_C_CreateDynamicRingMaterial_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RingMaterial != nullptr)
		*RingMaterial = Parms.RingMaterial;

}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.ActivateGoalStateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStretchGoalStates      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Indicator_Base_C::ActivateGoalStateEffects(enum class EStretchGoalStates State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "ActivateGoalStateEffects");

	Params::ABP_StretchGoal_Indicator_Base_C_ActivateGoalStateEffects_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Indicator_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.TotalChaosChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalChaos                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Indicator_Base_C::TotalChaosChanged(int32 TotalChaos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "TotalChaosChanged");

	Params::ABP_StretchGoal_Indicator_Base_C_TotalChaosChanged_Params Parms{};

	Parms.TotalChaos = TotalChaos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C.ExecuteUbergraph_BP_StretchGoal_Indicator_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EStretchGoalStates      K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TotalChaos                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalWorldChaosAcquired_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Indicator_Base_C::ExecuteUbergraph_BP_StretchGoal_Indicator_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EStretchGoalStates K2Node_CustomEvent_State, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, int32 K2Node_CustomEvent_TotalChaos, int32 CallFunc_GetTotalWorldChaosAcquired_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Indicator_Base_C", "ExecuteUbergraph_BP_StretchGoal_Indicator_Base");

	Params::ABP_StretchGoal_Indicator_Base_C_ExecuteUbergraph_BP_StretchGoal_Indicator_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.K2Node_CustomEvent_TotalChaos = K2Node_CustomEvent_TotalChaos;
	Parms.CallFunc_GetTotalWorldChaosAcquired_ReturnValue = CallFunc_GetTotalWorldChaosAcquired_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



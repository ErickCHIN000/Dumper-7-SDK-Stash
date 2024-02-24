#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C
// (Actor)

class UClass* ABP_PS_BlackStalkerProjectile_01_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PS_BlackStalkerProjectile_01_01_C");

	return Clss;
}


// BP_PS_BlackStalkerProjectile_01_01_C BP_PS_BlackStalkerProjectile_01_01.Default__BP_PS_BlackStalkerProjectile_01_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PS_BlackStalkerProjectile_01_01_C* ABP_PS_BlackStalkerProjectile_01_01_C::GetDefaultObj()
{
	static class ABP_PS_BlackStalkerProjectile_01_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PS_BlackStalkerProjectile_01_01_C*>(ABP_PS_BlackStalkerProjectile_01_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor, UObjectWrapper)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (UObjectWrapper)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (UObjectWrapper)

void ABP_PS_BlackStalkerProjectile_01_01_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "UserConstructionScript");

	Params::ABP_PS_BlackStalkerProjectile_01_01_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_01_01_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_01_01_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_01_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PS_BlackStalkerProjectile_01_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "ReceiveTick");

	Params::ABP_PS_BlackStalkerProjectile_01_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.TurnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectile_01_01_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "TurnOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor, UObjectWrapper)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PS_BlackStalkerProjectile_01_01_C::ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectile_01_01_C", "ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01");

	Params::ABP_PS_BlackStalkerProjectile_01_01_C_ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



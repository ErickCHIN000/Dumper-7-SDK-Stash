#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C
// (None)

class UClass* UGA_Crafting_Step_Activation_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Activation_Base_C");

	return Clss;
}


// GA_Crafting_Step_Activation_Base_C GA_Crafting_Step_Activation_Base.Default__GA_Crafting_Step_Activation_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Activation_Base_C* UGA_Crafting_Step_Activation_Base_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Activation_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Activation_Base_C*>(UGA_Crafting_Step_Activation_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.FireStepStartedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StepActivatedSuccessfully                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CraftingComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CraftingController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::FireStepStartedDelegate(bool StepActivatedSuccessfully, class UBP_CraftingStationComponent_C* CraftingStationComponent, class UBP_CraftingComponent_C* CraftingComponent, class AController* CraftingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "FireStepStartedDelegate");

	Params::UGA_Crafting_Step_Activation_Base_C_FireStepStartedDelegate_Params Parms{};

	Parms.StepActivatedSuccessfully = StepActivatedSuccessfully;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.CraftingComponent = CraftingComponent;
	Parms.CraftingController = CraftingController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.OnPostActivation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::OnPostActivation(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "OnPostActivation");

	Params::UGA_Crafting_Step_Activation_Base_C_OnPostActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.DoEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCancelled                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::DoEndAbility(bool IsCancelled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "DoEndAbility");

	Params::UGA_Crafting_Step_Activation_Base_C_DoEndAbility_Params Parms{};

	Parms.IsCancelled = IsCancelled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::OnAbilityEnd(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "OnAbilityEnd");

	Params::UGA_Crafting_Step_Activation_Base_C_OnAbilityEnd_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.OnActivation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CraftIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCraftStatusByID_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::OnActivation(bool* Success, int32 CraftIndex, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_SetCraftStatusByID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "OnActivation");

	Params::UGA_Crafting_Step_Activation_Base_C_OnActivation_Params Parms{};

	Parms.CraftIndex = CraftIndex;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SetCraftStatusByID_Success = CallFunc_SetCraftStatusByID_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.SetStepData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStepData_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::SetStepData(bool* Success, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_SetStepData_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "SetStepData");

	Params::UGA_Crafting_Step_Activation_Base_C_SetStepData_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_SetStepData_Success = CallFunc_SetStepData_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.GenerateStepData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        K2Node_MakeStruct_DynamicTypedStructs                            (None)

void UGA_Crafting_Step_Activation_Base_C::GenerateStepData(bool* Success, const struct FDynamicTypedStructs& K2Node_MakeStruct_DynamicTypedStructs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "GenerateStepData");

	Params::UGA_Crafting_Step_Activation_Base_C_GenerateStepData_Params Parms{};

	Parms.K2Node_MakeStruct_DynamicTypedStructs = K2Node_MakeStruct_DynamicTypedStructs;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "K2_OnEndAbility");

	Params::UGA_Crafting_Step_Activation_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Activation_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Crafting_Step_Activation_Base_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.Activation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Activation_Base_C::Activation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "Activation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.PreActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Activation_Base_C::PreActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "PreActivation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.PostActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Activation_Base_C::PostActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "PostActivation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.Initialization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Activation_Base_C::Initialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "Initialization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Activation_Base_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C.ExecuteUbergraph_GA_Crafting_Step_Activation_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_GenerateStepData_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStepData_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActivation_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPostActivation_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDrainingFuel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Activation_Base_C::ExecuteUbergraph_GA_Crafting_Step_Activation_Base(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_GenerateStepData_Success, bool CallFunc_SetStepData_Success, bool CallFunc_OnActivation_Success, bool CallFunc_OnPostActivation_Success, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_InitializeAbilityFromEvent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, bool CallFunc_IsDrainingFuel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Activation_Base_C", "ExecuteUbergraph_GA_Crafting_Step_Activation_Base");

	Params::UGA_Crafting_Step_Activation_Base_C_ExecuteUbergraph_GA_Crafting_Step_Activation_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GenerateStepData_Success = CallFunc_GenerateStepData_Success;
	Parms.CallFunc_SetStepData_Success = CallFunc_SetStepData_Success;
	Parms.CallFunc_OnActivation_Success = CallFunc_OnActivation_Success;
	Parms.CallFunc_OnPostActivation_Success = CallFunc_OnPostActivation_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_IsDrainingFuel_ReturnValue = CallFunc_IsDrainingFuel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



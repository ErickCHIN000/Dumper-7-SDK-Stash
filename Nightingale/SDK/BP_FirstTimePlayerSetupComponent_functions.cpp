#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C
// (None)

class UClass* UBP_FirstTimePlayerSetupComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FirstTimePlayerSetupComponent_C");

	return Clss;
}


// BP_FirstTimePlayerSetupComponent_C BP_FirstTimePlayerSetupComponent.Default__BP_FirstTimePlayerSetupComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FirstTimePlayerSetupComponent_C* UBP_FirstTimePlayerSetupComponent_C::GetDefaultObj()
{
	static class UBP_FirstTimePlayerSetupComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FirstTimePlayerSetupComponent_C*>(UBP_FirstTimePlayerSetupComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.GetInitialItemsGranted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ItemsGranted                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::GetInitialItemsGranted(bool* ItemsGranted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "GetInitialItemsGranted");

	Params::UBP_FirstTimePlayerSetupComponent_C_GetInitialItemsGranted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemsGranted != nullptr)
		*ItemsGranted = Parms.ItemsGranted;

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.GrantStartingLoadout
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference StartingLoadout                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FPlayerLoadout              CallFunc_TryGetPlayerLoadoutData_OutLoadoutData                  (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetPlayerLoadoutData_OutBranches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference CallFunc_GetStartingLoadout_ReturnValue                          (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::GrantStartingLoadout(const struct FPlayerLoadoutDataReference& StartingLoadout, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, const struct FPlayerLoadoutDataReference& CallFunc_GetStartingLoadout_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "GrantStartingLoadout");

	Params::UBP_FirstTimePlayerSetupComponent_C_GrantStartingLoadout_Params Parms{};

	Parms.StartingLoadout = StartingLoadout;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutLoadoutData = CallFunc_TryGetPlayerLoadoutData_OutLoadoutData;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutBranches = CallFunc_TryGetPlayerLoadoutData_OutBranches;
	Parms.CallFunc_GetStartingLoadout_ReturnValue = CallFunc_GetStartingLoadout_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.GetStartingLoadout
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerLoadoutDataReference ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference ServerSlamLoadout                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout        (HasGetValueTypeHash)

struct FPlayerLoadoutDataReference UBP_FirstTimePlayerSetupComponent_C::GetStartingLoadout(const struct FPlayerLoadoutDataReference& ServerSlamLoadout, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FPlayerLoadoutDataReference& CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "GetStartingLoadout");

	Params::UBP_FirstTimePlayerSetupComponent_C_GetStartingLoadout_Params Parms{};

	Parms.ServerSlamLoadout = ServerSlamLoadout;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout = CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.DEBUG_SetLastGrantedLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference NewLoadout                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::DEBUG_SetLastGrantedLoadout(const struct FPlayerLoadoutDataReference& NewLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "DEBUG_SetLastGrantedLoadout");

	Params::UBP_FirstTimePlayerSetupComponent_C_DEBUG_SetLastGrantedLoadout_Params Parms{};

	Parms.NewLoadout = NewLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.DEBUG_GetLastGrantedLoadout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerLoadoutDataReference ActiveLoadout                                                    (Parm, OutParm, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::DEBUG_GetLastGrantedLoadout(struct FPlayerLoadoutDataReference* ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "DEBUG_GetLastGrantedLoadout");

	Params::UBP_FirstTimePlayerSetupComponent_C_DEBUG_GetLastGrantedLoadout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActiveLoadout != nullptr)
		*ActiveLoadout = std::move(Parms.ActiveLoadout);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.SetupLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FirstTimePlayerSetupComponent_C::SetupLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "SetupLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.SetupLoadout_InventoryReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::SetupLoadout_InventoryReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "SetupLoadout_InventoryReady");

	Params::UBP_FirstTimePlayerSetupComponent_C_SetupLoadout_InventoryReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.SetupLoadout_PawnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::SetupLoadout_PawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "SetupLoadout_PawnChanged");

	Params::UBP_FirstTimePlayerSetupComponent_C_SetupLoadout_PawnChanged_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FirstTimePlayerSetupComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FirstTimePlayerSetupComponent.BP_FirstTimePlayerSetupComponent_C.ExecuteUbergraph_BP_FirstTimePlayerSetupComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference CallFunc_GetStartingLoadout_ReturnValue                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FirstTimePlayerSetupComponent_C::ExecuteUbergraph_BP_FirstTimePlayerSetupComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* K2Node_CustomEvent_OldPawn, class APawn* K2Node_CustomEvent_NewPawn, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class AActor* CallFunc_GetOwner_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AController* K2Node_DynamicCast_AsController_1, bool K2Node_DynamicCast_bSuccess_2, const struct FPlayerLoadoutDataReference& CallFunc_GetStartingLoadout_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimePlayerSetupComponent_C", "ExecuteUbergraph_BP_FirstTimePlayerSetupComponent");

	Params::UBP_FirstTimePlayerSetupComponent_C_ExecuteUbergraph_BP_FirstTimePlayerSetupComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsController_1 = K2Node_DynamicCast_AsController_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetStartingLoadout_ReturnValue = CallFunc_GetStartingLoadout_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



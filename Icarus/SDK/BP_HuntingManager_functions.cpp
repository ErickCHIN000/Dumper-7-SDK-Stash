#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingManager.BP_HuntingManager_C
// (None)

class UClass* UBP_HuntingManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingManager_C");

	return Clss;
}


// BP_HuntingManager_C BP_HuntingManager.Default__BP_HuntingManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HuntingManager_C* UBP_HuntingManager_C::GetDefaultObj()
{
	static class UBP_HuntingManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HuntingManager_C*>(UBP_HuntingManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HuntingManager.BP_HuntingManager_C.UpdatePerceptionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DidChange                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewTooltips                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewFootprints                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HuntingManager_C::UpdatePerceptionState(bool DidChange, bool NewTooltips, bool NewFootprints, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "UpdatePerceptionState");

	Params::UBP_HuntingManager_C_UpdatePerceptionState_Params Parms{};

	Parms.DidChange = DidChange;
	Parms.NewTooltips = NewTooltips;
	Parms.NewFootprints = NewFootprints;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingManager.BP_HuntingManager_C.OnRep_HuntingFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HuntingManager_C::OnRep_HuntingFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "OnRep_HuntingFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingManager.BP_HuntingManager_C.SetHuntingFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewFocus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HuntingManager_C::SetHuntingFocus(class AActor* NewFocus, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "SetHuntingFocus");

	Params::UBP_HuntingManager_C_SetHuntingFocus_Params Parms{};

	Parms.NewFocus = NewFocus;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingManager.BP_HuntingManager_C.SERVER_RequestSplineLocations
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Clue                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HuntingManager_C::SERVER_RequestSplineLocations(class AActor* Clue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "SERVER_RequestSplineLocations");

	Params::UBP_HuntingManager_C_SERVER_RequestSplineLocations_Params Parms{};

	Parms.Clue = Clue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingManager.BP_HuntingManager_C.CLIENT_SendSplineLocations
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Clue                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             Locations                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HuntingManager_C::CLIENT_SendSplineLocations(class AActor* Clue, TArray<struct FVector>& Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "CLIENT_SendSplineLocations");

	Params::UBP_HuntingManager_C_CLIENT_SendSplineLocations_Params Parms{};

	Parms.Clue = Clue;
	Parms.Locations = Locations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingManager.BP_HuntingManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_HuntingManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingManager.BP_HuntingManager_C.ExecuteUbergraph_BP_HuntingManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Clue_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Clue                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_CustomEvent_Locations                                     (ConstParm, ReferenceParm)
// TScriptInterface<class IIHuntingInterface_C>K2Node_DynamicCast_AsIHunting_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIHuntingInterface_C>K2Node_DynamicCast_AsIHunting_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GatherSplineLocations_Return                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>             CallFunc_GatherSplineLocations_Locations                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HuntingManager_C::ExecuteUbergraph_BP_HuntingManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Clue_1, class AActor* K2Node_CustomEvent_Clue, TArray<struct FVector>& K2Node_CustomEvent_Locations, TScriptInterface<class IIHuntingInterface_C> K2Node_DynamicCast_AsIHunting_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIHuntingInterface_C> K2Node_DynamicCast_AsIHunting_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GatherSplineLocations_Return, TArray<struct FVector>& CallFunc_GatherSplineLocations_Locations, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "ExecuteUbergraph_BP_HuntingManager");

	Params::UBP_HuntingManager_C_ExecuteUbergraph_BP_HuntingManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Clue_1 = K2Node_CustomEvent_Clue_1;
	Parms.K2Node_CustomEvent_Clue = K2Node_CustomEvent_Clue;
	Parms.K2Node_CustomEvent_Locations = K2Node_CustomEvent_Locations;
	Parms.K2Node_DynamicCast_AsIHunting_Interface = K2Node_DynamicCast_AsIHunting_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIHunting_Interface_1 = K2Node_DynamicCast_AsIHunting_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GatherSplineLocations_Return = CallFunc_GatherSplineLocations_Return;
	Parms.CallFunc_GatherSplineLocations_Locations = CallFunc_GatherSplineLocations_Locations;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingManager.BP_HuntingManager_C.PerceptionStateUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HuntingManager_C::PerceptionStateUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "PerceptionStateUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingManager.BP_HuntingManager_C.FocusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HuntingManager_C::FocusUpdated__DelegateSignature(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingManager_C", "FocusUpdated__DelegateSignature");

	Params::UBP_HuntingManager_C_FocusUpdated__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}



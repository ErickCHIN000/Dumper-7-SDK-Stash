#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Flow_Title.Flow_Title_C
// (Actor)

class UClass* AFlow_Title_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flow_Title_C");

	return Clss;
}


// Flow_Title_C Flow_Title.Default__Flow_Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlow_Title_C* AFlow_Title_C::GetDefaultObj()
{
	static class AFlow_Title_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlow_Title_C*>(AFlow_Title_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Flow_Title.Flow_Title_C.OnInputRepeatAction_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEActionType         ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlow_Title_C::OnInputRepeatAction_(enum class ETTLEActionType ActionType, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "OnInputRepeatAction_");

	Params::AFlow_Title_C_OnInputRepeatAction__Params Parms{};

	Parms.ActionType = ActionType;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flow_Title.Flow_Title_C.OnInputAction_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEActionType         ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlow_Title_C::OnInputAction_(enum class ETTLEActionType ActionType, bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "OnInputAction_");

	Params::AFlow_Title_C_OnInputAction__Params Parms{};

	Parms.ActionType = ActionType;
	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flow_Title.Flow_Title_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlow_Title_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "ReceiveEndPlay");

	Params::AFlow_Title_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flow_Title.Flow_Title_C.StartNewGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlow_Title_C::StartNewGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "StartNewGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Flow_Title.Flow_Title_C.StartContinueGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlow_Title_C::StartContinueGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "StartContinueGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Flow_Title.Flow_Title_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlow_Title_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "ReceiveTick");

	Params::AFlow_Title_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flow_Title.Flow_Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFlow_Title_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Flow_Title.Flow_Title_C.OnLocalClassLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class AActor>        LoadedClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        NextAction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlow_Title_C::OnLocalClassLoaded(TSoftClassPtr<class AActor> LoadedClass, class FName NextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "OnLocalClassLoaded");

	Params::AFlow_Title_C_OnLocalClassLoaded_Params Parms{};

	Parms.LoadedClass = LoadedClass;
	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flow_Title.Flow_Title_C.StartForceSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlow_Title_C::StartForceSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "StartForceSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Flow_Title.Flow_Title_C.ExecuteUbergraph_Flow_Title
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLLocalClassLoader*        CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEActionType         K2Node_CustomEvent_ActionType1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Count                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEActionType         K2Node_CustomEvent_ActionType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPressed                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEMenuSceneState     CallFunc_GetState_OutState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLPlayerController*        K2Node_DynamicCast_AsTTLPlayer_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// TSoftClassPtr<class AActor>        K2Node_CustomEvent_LoadedClass                                   (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NextAction                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLMenu_Scene_Base                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLMenuSceneBase*           CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlow_Title_C::ExecuteUbergraph_Flow_Title(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ACameraActor* CallFunc_FinishSpawningActor_ReturnValue, class ATTLLocalClassLoader* CallFunc_FinishSpawningActor_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class ETTLEActionType K2Node_CustomEvent_ActionType1, int32 K2Node_CustomEvent_Count, enum class ETTLEActionType K2Node_CustomEvent_ActionType, bool K2Node_CustomEvent_IsPressed, bool CallFunc_IsValid_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue2, enum class ETTLEMenuSceneState CallFunc_GetState_OutState, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, TSoftClassPtr<class AActor> K2Node_CustomEvent_LoadedClass, class FName K2Node_CustomEvent_NextAction, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTTLMenu_Scene_Base, bool K2Node_ClassDynamicCast_bSuccess1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class ATTLMenuSceneBase* CallFunc_FinishSpawningActor_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flow_Title_C", "ExecuteUbergraph_Flow_Title");

	Params::AFlow_Title_C_ExecuteUbergraph_Flow_Title_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_ActionType1 = K2Node_CustomEvent_ActionType1;
	Parms.K2Node_CustomEvent_Count = K2Node_CustomEvent_Count;
	Parms.K2Node_CustomEvent_ActionType = K2Node_CustomEvent_ActionType;
	Parms.K2Node_CustomEvent_IsPressed = K2Node_CustomEvent_IsPressed;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetState_OutState = CallFunc_GetState_OutState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLPlayer_Controller = K2Node_DynamicCast_AsTTLPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_LoadedClass = K2Node_CustomEvent_LoadedClass;
	Parms.K2Node_CustomEvent_NextAction = K2Node_CustomEvent_NextAction;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsTTLMenu_Scene_Base = K2Node_ClassDynamicCast_AsTTLMenu_Scene_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}



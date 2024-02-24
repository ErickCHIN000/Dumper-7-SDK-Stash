#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Map_MainMenu.Map_MainMenu_C
// (Actor)

class UClass* AMap_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Map_MainMenu_C");

	return Clss;
}


// Map_MainMenu_C Map_MainMenu.Default__Map_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMap_MainMenu_C* AMap_MainMenu_C::GetDefaultObj()
{
	static class AMap_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMap_MainMenu_C*>(AMap_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Map_MainMenu.Map_MainMenu_C.IncreaseWackySeqWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMap_MainMenu_C::IncreaseWackySeqWeight(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "IncreaseWackySeqWeight");

	Params::AMap_MainMenu_C_IncreaseWackySeqWeight_Params Parms{};

	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_MainMenu.Map_MainMenu_C.GetRandomSequence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGLevelSequenceActor*       SequenceToPlay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGLevelSequenceActor*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGLevelSequenceActor*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AGGLevelSequenceActor*>K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGLevelSequenceActor*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMap_MainMenu_C::GetRandomSequence(class AGGLevelSequenceActor** SequenceToPlay, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AGGLevelSequenceActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AGGLevelSequenceActor* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, TArray<class AGGLevelSequenceActor*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_4, class AGGLevelSequenceActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "GetRandomSequence");

	Params::AMap_MainMenu_C_GetRandomSequence_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SequenceToPlay != nullptr)
		*SequenceToPlay = Parms.SequenceToPlay;

}


// Function Map_MainMenu.Map_MainMenu_C.PlayNextBackgroundSeq
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::PlayNextBackgroundSeq()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "PlayNextBackgroundSeq");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.CurrentSeq_OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::CurrentSeq_OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "CurrentSeq_OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.StartIncreasingWackySeqWeigth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::StartIncreasingWackySeqWeigth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "StartIncreasingWackySeqWeigth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.ClearRecentlyPlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::ClearRecentlyPlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "ClearRecentlyPlayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMap_MainMenu_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "ReceiveEndPlay");

	Params::AMap_MainMenu_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_MainMenu.Map_MainMenu_C.StartMainMenuFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::StartMainMenuFlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "StartMainMenuFlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.OnStartupFlowFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::OnStartupFlowFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "OnStartupFlowFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.On Constrain Aspect Ratio Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGGGameSetting              ChangedSetting                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FString                      NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AMap_MainMenu_C::On_Constrain_Aspect_Ratio_Changed(struct FGGGameSetting& ChangedSetting, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "On Constrain Aspect Ratio Changed");

	Params::AMap_MainMenu_C_On_Constrain_Aspect_Ratio_Changed_Params Parms{};

	Parms.ChangedSetting = ChangedSetting;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_MainMenu.Map_MainMenu_C.OnWalkInSequenceFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::OnWalkInSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "OnWalkInSequenceFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMap_MainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_MainMenu.Map_MainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMap_MainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "ReceiveTick");

	Params::AMap_MainMenu_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MenuPlayerController_C*  K2Node_DynamicCast_AsBP_Menu_Player_Controller                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGameInstance*             K2Node_DynamicCast_AsGGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_RequestMenuNavigation_OutWidget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestMenuNavigation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayStartupFlow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MenuPlayerController_C*  K2Node_DynamicCast_AsBP_Menu_Player_Controller_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_RequestMenuNavigation_OutWidget_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestMenuNavigation_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_LoadingScreenStartup_C* K2Node_DynamicCast_AsUMG_Loading_Screen_Startup                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGLevelSequenceActor*       CallFunc_GetRandomSequence_SequenceToPlay                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGGGameSetting              K2Node_CustomEvent_ChangedSetting                                (ConstParm, ContainsInstancedReference)
// class FString                      K2Node_CustomEvent_NewValue                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StringToBool_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMusicManager*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGMusicManager*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMusicManager*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGGDelegateHandleWrapper    CallFunc_BindDelegateToOnSettingApplied_ReturnValue              (NoDestructor)
// class UGGGameInstance*             K2Node_DynamicCast_AsGGGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGNewsFeed*                 CallFunc_GetNewsFeedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void AMap_MainMenu_C::ExecuteUbergraph_Map_MainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_RequestMenuNavigation_OutWidget, bool CallFunc_RequestMenuNavigation_ReturnValue, bool CallFunc_ShouldPlayStartupFlow_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_2, class UUserWidget* CallFunc_RequestMenuNavigation_OutWidget_1, bool CallFunc_RequestMenuNavigation_ReturnValue_1, class UUMG_LoadingScreenStartup_C* K2Node_DynamicCast_AsUMG_Loading_Screen_Startup, bool K2Node_DynamicCast_bSuccess_3, class AGGLevelSequenceActor* CallFunc_GetRandomSequence_SequenceToPlay, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGGGameSetting& K2Node_CustomEvent_ChangedSetting, const class FString& K2Node_CustomEvent_NewValue, bool CallFunc_StringToBool_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const struct FGGDelegateHandleWrapper& CallFunc_BindDelegateToOnSettingApplied_ReturnValue, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_4, class AGGNewsFeed* CallFunc_GetNewsFeedActor_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_MainMenu_C", "ExecuteUbergraph_Map_MainMenu");

	Params::AMap_MainMenu_C_ExecuteUbergraph_Map_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Player_Controller = K2Node_DynamicCast_AsBP_Menu_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGGGame_Instance = K2Node_DynamicCast_AsGGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RequestMenuNavigation_OutWidget = CallFunc_RequestMenuNavigation_OutWidget;
	Parms.CallFunc_RequestMenuNavigation_ReturnValue = CallFunc_RequestMenuNavigation_ReturnValue;
	Parms.CallFunc_ShouldPlayStartupFlow_ReturnValue = CallFunc_ShouldPlayStartupFlow_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_1 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Menu_Player_Controller_1 = K2Node_DynamicCast_AsBP_Menu_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_2 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_2;
	Parms.CallFunc_RequestMenuNavigation_OutWidget_1 = CallFunc_RequestMenuNavigation_OutWidget_1;
	Parms.CallFunc_RequestMenuNavigation_ReturnValue_1 = CallFunc_RequestMenuNavigation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Loading_Screen_Startup = K2Node_DynamicCast_AsUMG_Loading_Screen_Startup;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetRandomSequence_SequenceToPlay = CallFunc_GetRandomSequence_SequenceToPlay;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_ChangedSetting = K2Node_CustomEvent_ChangedSetting;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_StringToBool_ReturnValue = CallFunc_StringToBool_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_BindDelegateToOnSettingApplied_ReturnValue = CallFunc_BindDelegateToOnSettingApplied_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGame_Instance_1 = K2Node_DynamicCast_AsGGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetNewsFeedActor_ReturnValue = CallFunc_GetNewsFeedActor_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}



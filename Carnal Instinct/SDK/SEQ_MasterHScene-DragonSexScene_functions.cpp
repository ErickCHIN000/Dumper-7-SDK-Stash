#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C
// (Actor)

class UClass* ASEQ_MasterHSceneMinusDragonSexScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_MasterHScene-DragonSexScene_C");

	return Clss;
}


// SEQ_MasterHScene-DragonSexScene_C SEQ_MasterHScene-DragonSexScene.Default__SEQ_MasterHScene-DragonSexScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_MasterHSceneMinusDragonSexScene_C* ASEQ_MasterHSceneMinusDragonSexScene_C::GetDefaultObj()
{
	static class ASEQ_MasterHSceneMinusDragonSexScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_MasterHSceneMinusDragonSexScene_C*>(ASEQ_MasterHSceneMinusDragonSexScene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.ProgressSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusDragonSexScene_C::ProgressSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "ProgressSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusDragonSexScene_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.KillSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusDragonSexScene_C::KillSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "KillSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusDragonSexScene_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusDragonSexScene_C::One()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-DragonSexScene.SEQ_MasterHScene-DragonSexScene_C.ExecuteUbergraph_SEQ_MasterHScene-DragonSexScene
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DragonSexScene_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayer_dragon_placeholder_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASEQ_MasterHSceneMinusDragonSexScene_C::ExecuteUbergraph_SEQ_MasterHSceneMinusDragonSexScene(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_DragonSexScene_C* CallFunc_Create_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWB_Fade_C* CallFunc_Create_ReturnValue_1, class APlayer_dragon_placeholder_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-DragonSexScene_C", "ExecuteUbergraph_SEQ_MasterHScene-DragonSexScene");

	Params::ASEQ_MasterHSceneMinusDragonSexScene_C_ExecuteUbergraph_SEQ_MasterHSceneMinusDragonSexScene_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



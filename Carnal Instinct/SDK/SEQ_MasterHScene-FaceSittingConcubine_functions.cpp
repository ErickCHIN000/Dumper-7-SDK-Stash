#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C
// (Actor)

class UClass* ASEQ_MasterHSceneMinusFaceSittingConcubine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_MasterHScene-FaceSittingConcubine_C");

	return Clss;
}


// SEQ_MasterHScene-FaceSittingConcubine_C SEQ_MasterHScene-FaceSittingConcubine.Default__SEQ_MasterHScene-FaceSittingConcubine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_MasterHSceneMinusFaceSittingConcubine_C* ASEQ_MasterHSceneMinusFaceSittingConcubine_C::GetDefaultObj()
{
	static class ASEQ_MasterHSceneMinusFaceSittingConcubine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_MasterHSceneMinusFaceSittingConcubine_C*>(ASEQ_MasterHSceneMinusFaceSittingConcubine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C.ProgressSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusFaceSittingConcubine_C::ProgressSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-FaceSittingConcubine_C", "ProgressSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusFaceSittingConcubine_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-FaceSittingConcubine_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C.KillSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusFaceSittingConcubine_C::KillSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-FaceSittingConcubine_C", "KillSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusFaceSittingConcubine_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-FaceSittingConcubine_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-FaceSittingConcubine.SEQ_MasterHScene-FaceSittingConcubine_C.ExecuteUbergraph_SEQ_MasterHScene-FaceSittingConcubine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HSceneMinusFaceSittingConcubine_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASEQ_MasterHSceneMinusFaceSittingConcubine_C::ExecuteUbergraph_SEQ_MasterHSceneMinusFaceSittingConcubine(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_HSceneMinusFaceSittingConcubine_C* CallFunc_Create_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool Temp_bool_IsClosed_Variable, class UWB_InGame_C* CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-FaceSittingConcubine_C", "ExecuteUbergraph_SEQ_MasterHScene-FaceSittingConcubine");

	Params::ASEQ_MasterHSceneMinusFaceSittingConcubine_C_ExecuteUbergraph_SEQ_MasterHSceneMinusFaceSittingConcubine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



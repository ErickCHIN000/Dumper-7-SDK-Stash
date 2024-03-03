#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C
// (Actor)

class UClass* ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_MasterHScene-LOP-TablePlayerFuck_C");

	return Clss;
}


// SEQ_MasterHScene-LOP-TablePlayerFuck_C SEQ_MasterHScene-LOP-TablePlayerFuck.Default__SEQ_MasterHScene-LOP-TablePlayerFuck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C* ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::GetDefaultObj()
{
	static class ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C*>(ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C.ProgressSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::ProgressSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-LOP-TablePlayerFuck_C", "ProgressSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-LOP-TablePlayerFuck_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C.KillSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::KillSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-LOP-TablePlayerFuck_C", "KillSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-LOP-TablePlayerFuck_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene-LOP-TablePlayerFuck.SEQ_MasterHScene-LOP-TablePlayerFuck_C.ExecuteUbergraph_SEQ_MasterHScene-LOP-TablePlayerFuck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HSceneMinusLOPMinusTablePlayerFuck_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C::ExecuteUbergraph_SEQ_MasterHSceneMinusLOPMinusTablePlayerFuck(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool Temp_bool_IsClosed_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_HSceneMinusLOPMinusTablePlayerFuck_C* CallFunc_Create_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class UWB_InGame_C* CallFunc_Array_Get_Item, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene-LOP-TablePlayerFuck_C", "ExecuteUbergraph_SEQ_MasterHScene-LOP-TablePlayerFuck");

	Params::ASEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_C_ExecuteUbergraph_SEQ_MasterHSceneMinusLOPMinusTablePlayerFuck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



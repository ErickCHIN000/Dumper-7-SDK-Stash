#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_MasterHScene1.SEQ_MasterHScene1_C
// (Actor)

class UClass* ASEQ_MasterHScene1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_MasterHScene1_C");

	return Clss;
}


// SEQ_MasterHScene1_C SEQ_MasterHScene1.Default__SEQ_MasterHScene1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_MasterHScene1_C* ASEQ_MasterHScene1_C::GetDefaultObj()
{
	static class ASEQ_MasterHScene1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_MasterHScene1_C*>(ASEQ_MasterHScene1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_MasterHScene1.SEQ_MasterHScene1_C.ProgressSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHScene1_C::ProgressSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene1_C", "ProgressSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene1.SEQ_MasterHScene1_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHScene1_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene1_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene1.SEQ_MasterHScene1_C.SEQSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHScene1_C::SEQSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene1_C", "SEQSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene1.SEQ_MasterHScene1_C.ToggleCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_MasterHScene1_C::ToggleCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene1_C", "ToggleCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_MasterHScene1.SEQ_MasterHScene1_C.ExecuteUbergraph_SEQ_MasterHScene1
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
// class UW_HScene_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASEQ_MasterHScene1_C::ExecuteUbergraph_SEQ_MasterHScene1(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool Temp_bool_IsClosed_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_HScene_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class UWB_InGame_C* CallFunc_Array_Get_Item, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_MasterHScene1_C", "ExecuteUbergraph_SEQ_MasterHScene1");

	Params::ASEQ_MasterHScene1_C_ExecuteUbergraph_SEQ_MasterHScene1_Params Parms{};

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
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}



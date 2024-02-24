#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C
// (Actor)

class UClass* ABP_GateOfMadness_EndingScenes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GateOfMadness_EndingScenes_C");

	return Clss;
}


// BP_GateOfMadness_EndingScenes_C BP_GateOfMadness_EndingScenes.Default__BP_GateOfMadness_EndingScenes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GateOfMadness_EndingScenes_C* ABP_GateOfMadness_EndingScenes_C::GetDefaultObj()
{
	static class ABP_GateOfMadness_EndingScenes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GateOfMadness_EndingScenes_C*>(ABP_GateOfMadness_EndingScenes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.GoM_Ending
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::GoM_Ending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "GoM_Ending");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.CustomEvent_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GateOfMadness_EndingScenes_C::CustomEvent_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "CustomEvent_8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.StartGateOfMadnessEndingScenes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoFade                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GateOfMadness_EndingScenes_C::StartGateOfMadnessEndingScenes(bool DoFade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "StartGateOfMadnessEndingScenes");

	Params::ABP_GateOfMadness_EndingScenes_C_StartGateOfMadnessEndingScenes_Params Parms{};

	Parms.DoFade = DoFade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C.ExecuteUbergraph_BP_GateOfMadness_EndingScenes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UWid_MainMenu_Credits_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_EndGameComposition_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMusicManager*             CallFunc_GetMusicManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetQuest_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_DoFade                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                CallFunc_GetCGPawnBase_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GateOfMadness_EndingScenes_C::ExecuteUbergraph_BP_GateOfMadness_EndingScenes(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWid_MainMenu_Credits_C* CallFunc_Create_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostEvent_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostEvent_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable_2, int32 CallFunc_PostEvent_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UWid_EndGameComposition_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_IsClosed_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACGMusicManager* CallFunc_GetMusicManager_ReturnValue, bool CallFunc_SetQuest_ReturnValue, bool K2Node_CustomEvent_DoFade, float CallFunc_SelectFloat_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GateOfMadness_EndingScenes_C", "ExecuteUbergraph_BP_GateOfMadness_EndingScenes");

	Params::ABP_GateOfMadness_EndingScenes_C_ExecuteUbergraph_BP_GateOfMadness_EndingScenes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetMusicManager_ReturnValue = CallFunc_GetMusicManager_ReturnValue;
	Parms.CallFunc_SetQuest_ReturnValue = CallFunc_SetQuest_ReturnValue;
	Parms.K2Node_CustomEvent_DoFade = K2Node_CustomEvent_DoFade;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCGPawnBase_ReturnValue = CallFunc_GetCGPawnBase_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



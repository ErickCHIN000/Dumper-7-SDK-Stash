#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_SleepingBed.bp_SleepingBed_C
// (Actor)

class UClass* Abp_SleepingBed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_SleepingBed_C");

	return Clss;
}


// bp_SleepingBed_C bp_SleepingBed.Default__bp_SleepingBed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_SleepingBed_C* Abp_SleepingBed_C::GetDefaultObj()
{
	static class Abp_SleepingBed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_SleepingBed_C*>(Abp_SleepingBed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_83A9D72844A2E46730AD2C80F878C601
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::Completed_83A9D72844A2E46730AD2C80F878C601()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_83A9D72844A2E46730AD2C80F878C601");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_EBDAC3CE477FECE3DCD5D5AD7DDB3A8E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_SleepingBed_C::Completed_EBDAC3CE477FECE3DCD5D5AD7DDB3A8E(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_EBDAC3CE477FECE3DCD5D5AD7DDB3A8E");

	Params::Abp_SleepingBed_C_Completed_EBDAC3CE477FECE3DCD5D5AD7DDB3A8E_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_C97BA4ED45953AADED369AB3A0FDEE94
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_SleepingBed_C::Completed_C97BA4ED45953AADED369AB3A0FDEE94(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_C97BA4ED45953AADED369AB3A0FDEE94");

	Params::Abp_SleepingBed_C_Completed_C97BA4ED45953AADED369AB3A0FDEE94_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_40E19BC54EB4B7D5D18CE384B08539CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_SleepingBed_C::Completed_40E19BC54EB4B7D5D18CE384B08539CC(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_40E19BC54EB4B7D5D18CE384B08539CC");

	Params::Abp_SleepingBed_C_Completed_40E19BC54EB4B7D5D18CE384B08539CC_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_10E6DD3C440313B5A53534BAF4158885
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveScreenshotData         ScreenshotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Abp_SleepingBed_C::Completed_10E6DD3C440313B5A53534BAF4158885(const struct FSaveScreenshotData& ScreenshotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_10E6DD3C440313B5A53534BAF4158885");

	Params::Abp_SleepingBed_C_Completed_10E6DD3C440313B5A53534BAF4158885_Params Parms{};

	Parms.ScreenshotData = ScreenshotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_D74D6033408DDED6BA1159B424E85D66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_SleepingBed_C::Completed_D74D6033408DDED6BA1159B424E85D66(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_D74D6033408DDED6BA1159B424E85D66");

	Params::Abp_SleepingBed_C_Completed_D74D6033408DDED6BA1159B424E85D66_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Completed_716313BF4FCB653B1ED82F8C9A3845BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::Completed_716313BF4FCB653B1ED82F8C9A3845BD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Completed_716313BF4FCB653B1ED82F8C9A3845BD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.AttemptToSleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_ia_BaseInteractableObject_01_C*Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_SleepingBed_C::AttemptToSleep(class Aba_ia_BaseInteractableObject_01_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "AttemptToSleep");

	Params::Abp_SleepingBed_C_AttemptToSleep_Params Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.UpdateBed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::UpdateBed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "UpdateBed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.ExecuteUbergraph_bp_SleepingBed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_Flares_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FSaveScreenshotData         K2Node_CustomEvent_ScreenshotData                                (None)
// struct FSaveScreenshotData         Temp_struct_Variable                                             (None)
// class UChernobylGameAsyncScreenshot*CallFunc_AsyncMakeScreenshotData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncScreenshotSave*CallFunc_ChernobylGameAsyncScreenshot_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToFile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGame_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FPermanentLevelInfo         CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_ia_BaseInteractableObject_01_C*K2Node_CustomEvent_Sender                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncSave*     CallFunc_ChernobylGameAsyncSave_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetGlobalStatValue_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// struct FCompanionEntry             CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_23                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_24                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DialogueSystemGetBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_25                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyFractalWorldAvailable_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_26                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_27                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDemoVersion_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_28                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HACkGetCurrentDayAdjustedForEvening_Day                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIE_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_SleepingBed_C::ExecuteUbergraph_bp_SleepingBed(int32 EntryPoint, class UWid_LoadingScreen_Flares_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FSaveScreenshotData& K2Node_CustomEvent_ScreenshotData, const struct FSaveScreenshotData& Temp_struct_Variable, class UChernobylGameAsyncScreenshot* CallFunc_AsyncMakeScreenshotData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UChernobylGameAsyncScreenshotSave* CallFunc_ChernobylGameAsyncScreenshot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_Success, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool K2Node_CustomEvent_Success_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SaveGameToFile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SaveGame_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_Success_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, bool CallFunc_SaveGame_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue, bool Temp_bool_Variable_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_1, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_14, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1, bool K2Node_CustomEvent_Success_2, bool Temp_bool_IsClosed_Variable, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, enum class EEventMap CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FPermanentLevelInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_15, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class Aba_ia_BaseInteractableObject_01_C* K2Node_CustomEvent_Sender, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_16, enum class EDayPart CallFunc_GetDayPart_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_17, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class UChernobylGameAsyncSave* CallFunc_ChernobylGameAsyncSave_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, bool CallFunc_IsValid_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_19, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, int32 CallFunc_BuildSystemGetGlobalStatValue_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_20, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_21, bool CallFunc_PermanentDataGetValue_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_22, bool CallFunc_HaveBuffCompanion_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_23, bool CallFunc_HaveBuffCompanion_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_24, bool CallFunc_DialogueSystemGetBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_25, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, bool CallFunc_IsAnyFractalWorldAvailable_Result, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_26, int32 CallFunc_PostEvent_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_27, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsDemoVersion_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_28, int32 CallFunc_HACkGetCurrentDayAdjustedForEvening_Day, bool CallFunc_Greater_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, bool CallFunc_IsInPIE_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "ExecuteUbergraph_bp_SleepingBed");

	Params::Abp_SleepingBed_C_ExecuteUbergraph_bp_SleepingBed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_ScreenshotData = K2Node_CustomEvent_ScreenshotData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AsyncMakeScreenshotData_ReturnValue = CallFunc_AsyncMakeScreenshotData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncScreenshot_ReturnValue = CallFunc_ChernobylGameAsyncScreenshot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue = CallFunc_WaitForAsyncSaveGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SaveGameToFile_ReturnValue = CallFunc_SaveGameToFile_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SaveGame_ReturnValue = CallFunc_SaveGame_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_SaveGame_ReturnValue_1 = CallFunc_SaveGame_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue = CallFunc_GetIsGateOfMadnessMode_ReturnValue;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_11 = CallFunc_GetCGGameInstance_AsCGGame_Instance_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_12 = CallFunc_GetCGGameInstance_AsCGGame_Instance_12;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_1 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_1;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_13 = CallFunc_GetCGGameInstance_AsCGGame_Instance_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_14 = CallFunc_GetCGGameInstance_AsCGGame_Instance_14;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_1 = CallFunc_WaitForAsyncSaveGame_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_15 = CallFunc_GetCGGameInstance_AsCGGame_Instance_15;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_16 = CallFunc_GetCGGameInstance_AsCGGame_Instance_16;
	Parms.CallFunc_GetDayPart_ReturnValue_1 = CallFunc_GetDayPart_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_17 = CallFunc_GetCGGameInstance_AsCGGame_Instance_17;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_18 = CallFunc_GetCGGameInstance_AsCGGame_Instance_18;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncSave_ReturnValue = CallFunc_ChernobylGameAsyncSave_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_19 = CallFunc_GetCGGameInstance_AsCGGame_Instance_19;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_BuildSystemGetGlobalStatValue_ReturnValue = CallFunc_BuildSystemGetGlobalStatValue_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_20 = CallFunc_GetCGGameInstance_AsCGGame_Instance_20;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_21 = CallFunc_GetCGGameInstance_AsCGGame_Instance_21;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_22 = CallFunc_GetCGGameInstance_AsCGGame_Instance_22;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_23 = CallFunc_GetCGGameInstance_AsCGGame_Instance_23;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_1 = CallFunc_HaveBuffCompanion_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_24 = CallFunc_GetCGGameInstance_AsCGGame_Instance_24;
	Parms.CallFunc_DialogueSystemGetBool_ReturnValue = CallFunc_DialogueSystemGetBool_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_25 = CallFunc_GetCGGameInstance_AsCGGame_Instance_25;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_IsAnyFractalWorldAvailable_Result = CallFunc_IsAnyFractalWorldAvailable_Result;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_26 = CallFunc_GetCGGameInstance_AsCGGame_Instance_26;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_27 = CallFunc_GetCGGameInstance_AsCGGame_Instance_27;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_IsDemoVersion_ReturnValue = CallFunc_IsDemoVersion_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_28 = CallFunc_GetCGGameInstance_AsCGGame_Instance_28;
	Parms.CallFunc_HACkGetCurrentDayAdjustedForEvening_Day = CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue_2 = CallFunc_SetNewMovementState_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_IsInPIE_ReturnValue = CallFunc_IsInPIE_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_SleepingBed.bp_SleepingBed_C.EndingLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::EndingLevel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "EndingLevel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_SleepingBed.bp_SleepingBed_C.ShowSplash__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_SleepingBed_C::ShowSplash__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_SleepingBed_C", "ShowSplash__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



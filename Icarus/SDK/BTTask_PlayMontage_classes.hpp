#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x119 - 0xA8)
// BlueprintGeneratedClass BTTask_PlayMontage.BTTask_PlayMontage_C
class UBTTask_PlayMontage_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          Montage;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MontageStartTime;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPawn*                           IcarusPawnRef;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  StartingSection;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         ControllerRef;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusCharacter*                      IcarusCharacterRef;                                // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         RandomSection;                                     // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         FinishOnBlendOut;                                  // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         FinishImmediately;                                 // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_349B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageToPlay;                                     // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecondaryMontageSection;                           // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SecondaryDelay;                                    // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DelayDeviation;                                    // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                          SecondaryTimer;                                    // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentSection;                                    // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimNotify*                           CurrentNotify;                                     // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowInvalidMontage;                               // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_PlayMontage_C* GetDefaultObj();

	void CanSuccessfullyFinishExecute(bool* CanFinish);
	float GetSecondaryDelay(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void GetMontage(class UAnimMontage** Montage);
	void OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify);
	void OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify);
	void OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify);
	void OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify);
	void OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnMontageComplete();
	void OnMontageInterrupted();
	void OnMontageBlendOut();
	void OnMontageNotifyBegin(class FName NotifyName, class UAnimNotify* Notify);
	void OnMontageNotifyEnd(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void PlaySecondaryMontageSection();
	void ManualCompletion();
	void ExecuteUbergraph_BTTask_PlayMontage(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class FName>& CallFunc_GetMontageSections_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Variable, class FName CallFunc_Array_Get_Item, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPawn* K2Node_DynamicCast_AsIcarus_Pawn, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, class USkeletalMeshComponent* Temp_wildcard_Variable, class FName K2Node_CustomEvent_NotifyName_6, class UAnimNotify* K2Node_CustomEvent_Notify_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsTaskExecuting_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAnimMontage* CallFunc_GetMontage_Montage, class UAnimMontage* CallFunc_GetMontage_Montage_1, class UAnimMontage* CallFunc_GetMontage_Montage_2, class FName K2Node_CustomEvent_NotifyName_5, class UAnimNotify* K2Node_CustomEvent_Notify_5, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSecondaryDelay_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USkeletalMeshComponent* CallFunc_GetAnimatedMeshComponent_ReturnValue, bool CallFunc_CanSuccessfullyFinishExecute_CanFinish, bool CallFunc_CanSuccessfullyFinishExecute_CanFinish_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}



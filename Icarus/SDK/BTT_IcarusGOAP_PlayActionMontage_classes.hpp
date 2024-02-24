#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x62 (0x10A - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C
class UBTT_IcarusGOAP_PlayActionMontage_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                MeshRef;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGOAPActionsRowHandle                 GOAPAction;                                        // 0xB8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          MontageToPlay;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OverrideInitialMontageSection;                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  SecondaryMontageSection;                           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SecondaryDelay;                                    // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DelayDeviation;                                    // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  Section;                                           // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SecondaryTimer;                                    // 0xF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusNPCGOAPCharacter_C*          GOAPCharRef;                                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishImmediately;                                 // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         FinishOnBlendOut;                                  // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_PlayActionMontage_C* GetDefaultObj();

	float GetSecondaryDelay(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void OnLoaded_3D149E2642EDF2E7858CF39F8F3947B4(class UObject* Loaded);
	void OnNotifyEnd_DDFC1BB84168821694EAB4959526218A(class FName NotifyName, class UAnimNotify* Notify);
	void OnNotifyBegin_DDFC1BB84168821694EAB4959526218A(class FName NotifyName, class UAnimNotify* Notify);
	void OnInterrupted_DDFC1BB84168821694EAB4959526218A(class FName NotifyName, class UAnimNotify* Notify);
	void OnBlendOut_DDFC1BB84168821694EAB4959526218A(class FName NotifyName, class UAnimNotify* Notify);
	void OnCompleted_DDFC1BB84168821694EAB4959526218A(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void PlaySecondarySection();
	void ExecuteUbergraph_BTT_IcarusGOAP_PlayActionMontage(int32 EntryPoint, bool CallFunc_IsTaskExecuting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, class UObject* Temp_object_Variable_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_NotEqual_NameName_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSecondaryDelay_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGOAPAction& CallFunc_GetGOAPActionsStruct_GOAPActions, enum class EValid CallFunc_GetGOAPActionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_2, class FName K2Node_Select_Default);
};

}



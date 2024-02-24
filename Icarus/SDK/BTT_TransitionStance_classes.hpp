#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// BlueprintGeneratedClass BTT_TransitionStance.BTT_TransitionStance_C
class UBTT_TransitionStance_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EGOAPCharacterStance              TargetStance;                                      // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsScared;                                          // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EGOAPCharacterStance              CurrentStance;                                     // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E66[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TransitionMontageToPlay;                           // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusNPCGOAPCharacter_C*          OwningCharRef;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_TransitionStance_C* GetDefaultObj();

	void OnNotifyEnd_2F39B60B415EED7B9297DF9280CFD41D(class FName NotifyName, class UAnimNotify* Notify);
	void OnNotifyBegin_2F39B60B415EED7B9297DF9280CFD41D(class FName NotifyName, class UAnimNotify* Notify);
	void OnInterrupted_2F39B60B415EED7B9297DF9280CFD41D(class FName NotifyName, class UAnimNotify* Notify);
	void OnBlendOut_2F39B60B415EED7B9297DF9280CFD41D(class FName NotifyName, class UAnimNotify* Notify);
	void OnCompleted_2F39B60B415EED7B9297DF9280CFD41D(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_TransitionStance(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UAnimMontage> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_Get_Stance_Transition_Montage_OutMontage, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x251 - 0x220)
// BlueprintGeneratedClass BP_HammerSuperShell.BP_HammerSuperShell_C
class ABP_HammerSuperShell_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Shell;                                          // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_DarkForm;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FadeOutShell_Alpha_4325054846850A519D90FEBE06C668FF; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_FadeOutShell__Direction_4325054846850A519D90FEBE06C668FF; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_FadeOutShell;                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       CurrentArmor;                                      // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HammerSuperShell_C* GetDefaultObj();

	void Timeline_FadeOutShell__FinishedFunc();
	void Timeline_FadeOutShell__UpdateFunc();
	void OnNotifyEnd_8A9C11A04CAFFF72B33B27B4E9BD51ED(class FName NotifyName);
	void OnNotifyBegin_8A9C11A04CAFFF72B33B27B4E9BD51ED(class FName NotifyName);
	void OnInterrupted_8A9C11A04CAFFF72B33B27B4E9BD51ED(class FName NotifyName);
	void OnBlendOut_8A9C11A04CAFFF72B33B27B4E9BD51ED(class FName NotifyName);
	void OnCompleted_8A9C11A04CAFFF72B33B27B4E9BD51ED(class FName NotifyName);
	void OnNotifyEnd_9307DFC948C4E4EE945C8BBCCD2B3C8F(class FName NotifyName);
	void OnNotifyBegin_9307DFC948C4E4EE945C8BBCCD2B3C8F(class FName NotifyName);
	void OnInterrupted_9307DFC948C4E4EE945C8BBCCD2B3C8F(class FName NotifyName);
	void OnBlendOut_9307DFC948C4E4EE945C8BBCCD2B3C8F(class FName NotifyName);
	void OnCompleted_9307DFC948C4E4EE945C8BBCCD2B3C8F(class FName NotifyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HammerSuperShell(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

}



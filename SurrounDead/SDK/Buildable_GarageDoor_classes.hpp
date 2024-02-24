#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x3EA - 0x3D1)
// BlueprintGeneratedClass Buildable_GarageDoor.Buildable_GarageDoor_C
class ABuildable_GarageDoor_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_28AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Opened_;                                           // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorOpening_;                                      // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_GarageDoor_C* GetDefaultObj();

	void OnNotifyEnd_3D2E1B16475F14FE5B531DA34A955BAC(class FName NotifyName);
	void OnNotifyBegin_3D2E1B16475F14FE5B531DA34A955BAC(class FName NotifyName);
	void OnInterrupted_3D2E1B16475F14FE5B531DA34A955BAC(class FName NotifyName);
	void OnBlendOut_3D2E1B16475F14FE5B531DA34A955BAC(class FName NotifyName);
	void OnCompleted_3D2E1B16475F14FE5B531DA34A955BAC(class FName NotifyName);
	void OnNotifyEnd_567E4FB74634D1C193BBA6A29C554021(class FName NotifyName);
	void OnNotifyBegin_567E4FB74634D1C193BBA6A29C554021(class FName NotifyName);
	void OnInterrupted_567E4FB74634D1C193BBA6A29C554021(class FName NotifyName);
	void OnBlendOut_567E4FB74634D1C193BBA6A29C554021(class FName NotifyName);
	void OnCompleted_567E4FB74634D1C193BBA6A29C554021(class FName NotifyName);
	void ReceiveBeginPlay();
	void OnInteractBuildable(class AActor* Actor);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_GarageDoor(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, class FName K2Node_CustomEvent_NotifyName_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_Actor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9);
};

}



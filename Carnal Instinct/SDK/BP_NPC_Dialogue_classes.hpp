#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass BP_NPC_Dialogue.BP_NPC_Dialogue_C
class ABP_NPC_Dialogue_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAudioComponent*                       Audio;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      Trigger;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        TriggerRadius;                                     // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_NPC_Dialogue_C*                   WidgetRef;                                         // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_Manager_C*                     NPCManager;                                        // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_NPC_DebugDialogue_C*              WidgetDebugDialog;                                 // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPC_Dialogue_C* GetDefaultObj();

	void FnDisplayLine(class FText NPC_Name, const struct FStruct_DT_NPC_Dialogue& New_Line, bool Debug_Line, enum class Enum_NPC_Dialogue_State Line_State, enum class Enum_NPC_Dialogue_State State, bool Debug, const struct FStruct_DT_NPC_Dialogue& Line, class FText Name, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_NPC_DebugDialogue_C* CallFunc_Create_ReturnValue);
	void FnStopSound();
	void FnPlaySound(class USoundBase* Audio_Clip, class USoundBase* Sound);
	void FnShowHideWidget(bool Show, bool S, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FnCreateWidget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_NPC_Dialogue_C* CallFunc_Create_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void EventCreateWidget();
	void EventShowHideWidget(bool Show);
	void ExecuteUbergraph_BP_NPC_Dialogue(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, bool K2Node_CustomEvent_Show);
};

}



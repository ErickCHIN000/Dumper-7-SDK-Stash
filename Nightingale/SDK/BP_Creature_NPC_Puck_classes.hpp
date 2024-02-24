#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x1849 - 0x1788)
// BlueprintGeneratedClass BP_Creature_NPC_Puck.BP_Creature_NPC_Puck_C
class ABP_Creature_NPC_Puck_C : public ABP_Creature_NPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UConversationParticipantComponent*     ConversationParticipant;                           // 0x1790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UReleventToSingleConnectionComponent*  ReleventToSingleConnection;                        // 0x1798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_R;                                         // 0x17A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x17A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_L;                                         // 0x17B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_R;                                         // 0x17B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_L;                                         // 0x17C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x17C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapPinComponent*                      MapPin;                                            // 0x17D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NiagaraTemplate;                                   // 0x17D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        System_Template;                                   // 0x17E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PuckHasBeenDismissed;                              // 0x17E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            UnspawnPuck_DialogEvent;                           // 0x17F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        TEMP_DT_PES_True;                                  // 0x1800(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     SpawnedForController;                              // 0x1808(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Creature_NPC_Puck_C*               BP_Creature_NPC_Puck;                              // 0x1810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggeringPlayerIsPresent;                         // 0x1818(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimedOverlapCheck_Interval;                        // 0x181C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimedOverlapCheck_StartDelay;                      // 0x1820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PucksSafeZoneRadius;                               // 0x1828(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ImmediatlyTalkToSpawnedForController;              // 0x1830(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasTalkedToSpawnedForController;                   // 0x1831(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmbientAudioActive;                                // 0x1832(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E4A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  ExitMontages;                                      // 0x1838(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bInteractionState;                                 // 0x1848(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_NPC_Puck_C* GetDefaultObj();

	void GetMaterialInstancesFromMesh(TArray<class UMaterialInstanceDynamic*>* MaterialInstances, const TArray<class UMaterialInstanceDynamic*>& LMaterialInstances, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void DismissSelf(class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_ServerPlayMontage_bSuccess);
	void HandleMontageNotifications_Server(class FName NotifyName, bool K2Node_SwitchName_CmpSuccess);
	void HandleMontageNotifications_Client(class FName NotifyName, bool K2Node_SwitchName_CmpSuccess);
	void Stop_Ambient_SFX(class UScopedAkComponent* ScopedAk, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void StartAmbientSFX(class UScopedAkComponent* ScopedAk, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component, bool CallFunc_PostAkEventScoped_ReturnValue_1);
	void StopAmbientVFX(bool CallFunc_IsValid_ReturnValue);
	void StartAmbientVFX(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_CanInteractWithActor_InteractAvailable, bool CallFunc_Not_PreBool_ReturnValue);
	void TimedOverlapCheck_PlayerNearby(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SpawnExplosion(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NVFX_SpawnExplosion_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnExplosion_SpawnedSystem);
	void OnNotifyEnd_C32232CC4A68B05E3A7810AF2DDC15E1(class FName NotifyName);
	void OnNotifyBegin_C32232CC4A68B05E3A7810AF2DDC15E1(class FName NotifyName);
	void OnInterrupted_C32232CC4A68B05E3A7810AF2DDC15E1(class FName NotifyName);
	void OnBlendOut_C32232CC4A68B05E3A7810AF2DDC15E1(class FName NotifyName);
	void OnCompleted_C32232CC4A68B05E3A7810AF2DDC15E1(class FName NotifyName);
	void UnspawnPuck_FromDialogEvent();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DismissPuck();
	void SetPuckInteractionState(bool State);
	void SetPuckMomentParams(const struct FPuckMomentParams& Params);
	void SetPuckDialogue(class UDialogue* Dialogue);
	void ExecuteUbergraph_BP_Creature_NPC_Puck(int32 EntryPoint, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMaterialInstancesFromMesh_MaterialInstances, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_HasAuthority_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool K2Node_Event_State, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FPuckMomentParams& K2Node_Event_Params, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UDialogue* K2Node_Event_Dialogue, bool CallFunc_SetDialogue_Success, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMaterialInstancesFromMesh_MaterialInstances_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast, double K2Node_VariableSet_PucksSafeZoneRadius_ImplicitCast);
	void UnspawnPuck_DialogEvent__DelegateSignature();
};

}



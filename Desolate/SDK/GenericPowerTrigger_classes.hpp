#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x152 (0x372 - 0x220)
// BlueprintGeneratedClass GenericPowerTrigger.GenericPowerTrigger_C
class AGenericPowerTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Pivot;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurnedOn;                                        // 0x238(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_CA0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALight*>                        LightActors;                                       // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AActor*>                        Consumers;                                         // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AActor*>                        MechanismController;                               // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        GlowControlledActors;                              // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<struct FDynamicMaterialGlowLink>      TurnOnOffMaterialLinks;                            // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDynamicMaterialGlowLink>      UnderVoltageMaterialLinks;                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bIsPendingSwitchOn;                                // 0x2A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bIsUnderVoltage;                                   // 0x2A1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_CAA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             SwitchOnSound;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             SwitchOffSound;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAutonomous;                                       // 0x2B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsMechanismController;                             // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Namespace;                                         // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataTableButtonCaption;                            // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsRadioTriggers;                                   // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Num;                                               // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReady;                                           // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeState;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                        StateListeners;                                    // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AGenericPowerEffect_C*>         PowerEffects;                                      // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	bool                                         IsBrokeExecuted;                                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALight*>                        BrokenLightActors;                                 // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AGenericPowerEffect_C*>         BrokenPowerEffects;                                // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	float                                        BrokenEffectDuration;                              // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLampPuzzle;                                      // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PuzzleTriggers;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNeedUpdateState;                                  // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUseTrigger;                                      // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsTurnedOnSaveCache;                               // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         IsStateLoaded;                                     // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericPowerTrigger_C* GetDefaultObj();

	bool ShouldNotBeSaved();
	class FName GetActorState(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_2, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2);
	void GetLoadValue(float* Load, float Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class ALight* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetLoadValue_Load, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetLoadValue_Load_1, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	void StopBrokenEffect(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AGenericPowerEffect_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IIPowerConsumer_C> CallFunc_Power_self_CastInput, class ALight* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue);
	void SetIsUnderVoltage(bool bIsUnderVoltage);
	void IsUnderVoltage(bool* Result, bool CallFunc_BooleanOR_ReturnValue);
	void SetupDynamicMaterialsForActor(class AActor* Actor, TArray<struct FDynamicMaterialGlowLink>& MatilalArray, const TArray<class USceneComponent*>& SavedArray, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_isUnderVoltage();
	void CanSwitch(bool* Result);
	void UpdateState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, TScriptInterface<class IMechanismPower_C> K2Node_DynamicCast_AsMechanism_Power, bool K2Node_DynamicCast_bSuccess, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGenericPowerEffect_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IIPowerConsumer_C> CallFunc_Power_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, class ALight* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_DoesImplementInterface_ReturnValue, class AGenericPowerEffect_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class ALight* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_DoesImplementInterface_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsUnderVoltage_Result, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_Array_Get_Item_4, TScriptInterface<class IIPowerConsumer_C> K2Node_DynamicCast_AsIPower_Consumer_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, TScriptInterface<class IIPowerConsumer_C> CallFunc_Power_self_CastInput_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4);
	void OnRep_IsTurnedOn(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIPowerController_C> K2Node_DynamicCast_AsIPower_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IIPowerConsumer_C> CallFunc_OnConsumerStateChanged_Consumer_CastInput, int32 CallFunc_Add_IntInt_ReturnValue);
	void Switch(bool On, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_isPendingSwitch();
	void PendingSwitch(bool CallFunc_Not_PreBool_ReturnValue);
	void SetupDynamicMaterials(bool bFound, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1);
	void SetGlow(bool CallFunc_IsUnderVoltage_Result, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(bool bFound);
	void Outline(bool IsHighlighted);
	void QuestOutline(bool IsHighlighted);
	void SetActorState(class FName StateName);
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void UnlockActor(class FText Password);
	void ReceiveBeginPlay();
	void OnUseActor(class ASHPlayerCharacter* Character);
	void AskSwitch();
	void Power(bool On);
	void AddChangeStateListeners(class AActor* Listener);
	void ReceiveTick(float DeltaSeconds);
	void OnStateRestored();
	void ExecuteUbergraph_GenericPowerTrigger(int32 EntryPoint, bool K2Node_Event_isHighlighted_1, bool K2Node_Event_isHighlighted, class FName K2Node_Event_StateName, class ASHPlayerCharacter* K2Node_Event_Character_1, class FText K2Node_Event_Password, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_CanSwitch_Result, bool K2Node_Event_On, class AActor* K2Node_Event_Listener, bool CallFunc_IsUnderVoltage_Result, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsUnderVoltage_Result_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class IMechanismPower_C> K2Node_DynamicCast_AsMechanism_Power, bool K2Node_DynamicCast_bSuccess);
	void OnUseTrigger__DelegateSignature(class AGenericPowerTrigger_C* Trigger, class ASHPlayerCharacter* Instigator);
	void OnChangeState__DelegateSignature();
};

}



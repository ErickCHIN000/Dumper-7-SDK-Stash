#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x188 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C
class UBP_UIProjectionComponent_AIAlert_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        AlertValue;                                        // 0x118(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         PerceptionEnabled;                                 // 0x11C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_255F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealthValue;                                       // 0x120(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        AlertTickRate;                                     // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSeeHealthBar;                                   // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_256D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x12C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FAICreatureTypeRowHandle              CreatureType;                                      // 0x130(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FEpicCreaturesRowHandle               EpicCreature;                                      // 0x148(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        NamePlateRenderRange;                              // 0x160(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        AlertRenderRange;                                  // 0x164(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRecentlyPerceiving_Any_Player;                   // 0x168(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EpicCreatureName;                                  // 0x170(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_AIAlert_C* GetDefaultObj();

	void OnRep_EpicCreatureName();
	void OnRep_NamePlateRenderRange();
	void OnRep_IsRecentlyPerceiving_Any_Player();
	void OnRep_EpicCreature();
	void UpdateLevel(int32 Level);
	void OnRep_PerceptionEnabled();
	void OnRep_Level();
	void OnRep_CreatureType();
	void OnRep_HealthValue();
	void OnRep_AlertValue();
	void UpdateHealthState(class UActorState* ActorState, float NewHealth, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UpdatePerceptionState(class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStat_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1);
	void GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetWidgetLocation_Location, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetAlertWidgetLocation_Location);
	void ReceiveBeginPlay();
	void OnStatContainerUpdated();
	void ReceiveTick(float DeltaSeconds);
	void AlertTick();
	void AnyPlayerRecentlyWasPerceived();
	void ForceProjectionUpdate();
	void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaSeconds, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess_2, class FText CallFunc_GetEpicCreatureName_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FGOAPMotivationsRowHandle& CallFunc_MakeLiteralGOAPMotivations_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter_2, bool K2Node_DynamicCast_bSuccess_3, const struct FGOAPMotivationsRowHandle& CallFunc_MakeLiteralGOAPMotivations_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetOwner_ReturnValue_4, float CallFunc_GetMotivationValue_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_GetMotivationValue_ReturnValue_1, float CallFunc_FMax_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGOAPMotivationsRowHandle& CallFunc_MakeLiteralGOAPMotivations_ReturnValue_2, float CallFunc_GetMotivationValue_ReturnValue_2, float CallFunc_FMax_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class ABP_IcarusNPCGOAPController_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess_6, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetPerceivedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}



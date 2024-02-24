#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x1209 - 0x11A9)
// BlueprintGeneratedClass Dog_Character.Dog_Character_C
class ADog_Character_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_5E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mod;                                               // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x11C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Fur;                                               // 0x11D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule1;                                          // 0x11D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EDog_PatrolPoiType                PatrolPoiType;                                     // 0x11E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDog_SyncService_C*                    LocalSyncService;                                  // 0x11E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpecialStateHealth;                                // 0x11F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpecialMinRadius;                                  // 0x11F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpecialMaxRadius;                                  // 0x11F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHLostControlEffect*                  ApplyingLostControlEffect;                         // 0x1200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDog_PatrolType                   PatrolType;                                        // 0x1208(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADog_Character_C* GetDefaultObj();

	void SetPatrolTypes(enum class EDog_PatrolType NewType, bool CallFunc_IsValid_ReturnValue);
	bool OnAttackStateStop(bool CallFunc_OnAttackStateStop_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CanChangeTarget(bool* Result, bool CallFunc_Not_PreBool_ReturnValue);
	bool UpdateSpecialState(float DeltaTime, bool CallFunc_UpdateSpecialState_ReturnValue, bool CallFunc_UpdateNoiseAggro_Updated);
	bool UpdateInspectState(float DeltaTime, bool CallFunc_UpdateInspectState_ReturnValue);
	bool UpdateAlertState(float DeltaTime, bool CallFunc_UpdateAlertState_ReturnValue);
	void ResetSpecialState(float CallFunc_GetValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	bool OnPatrolStateStop(bool CallFunc_OnPatrolStateStop_ReturnValue);
	bool OnSpecialState(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_OnSpecialState_ReturnValue, const struct FVector& CallFunc_CalculateNextPatrolPoint_PatrolPoint);
	bool UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetGroupSize_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void ResetPOI();
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class UDog_SyncService_C* K2Node_DynamicCast_AsDog_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result);
	void SetPatrolPoi(enum class EDog_PatrolPoiType Type);
	void CalculatePOI(bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue_1, bool CallFunc_ShouldHappen_ReturnValue_2, bool CallFunc_ShouldHappen_ReturnValue_3, bool CallFunc_ShouldHappen_ReturnValue_4);
	void UserConstructionScript();
	void CustomEvent(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BB_SyncPatrolPoi();
	void OnApplyCustomization();
	void ExecuteUbergraph_Dog_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_1);
};

}



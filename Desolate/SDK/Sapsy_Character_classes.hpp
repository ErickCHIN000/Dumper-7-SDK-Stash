#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x11FA - 0x11A9)
// BlueprintGeneratedClass Sapsy_Character.Sapsy_Character_C
class ASapsy_Character_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_1A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Crest;                                             // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mod;                                               // 0x11C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x11D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ESapsy_PatrolPoiType              PatrolPoiType;                                     // 0x11D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USapsy_SyncService_C*                  LocalSyncService;                                  // 0x11E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReadyToSpecial;                                   // 0x11E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecialStateHealth;                                // 0x11EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRegenerationEnabled;                              // 0x11F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealPerSecond;                                     // 0x11F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpecialDamageTaken;                               // 0x11F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESapsy_PatrolTypes                PatrolTypes;                                       // 0x11F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASapsy_Character_C* GetDefaultObj();

	void SetPatrolTypes(enum class ESapsy_PatrolTypes NewType, bool CallFunc_IsValid_ReturnValue);
	bool OnSpecialStateStop(bool CallFunc_OnSpecialStateStop_ReturnValue);
	bool SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage, bool CallFunc_SensingTakeDamage_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool UpdateSpecialState(float DeltaTime, bool CallFunc_UpdateSpecialState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void UpdateSpecialStateRegeneration(bool RegenerationEnabled);
	bool OnSpecialState(bool CallFunc_OnSpecialState_ReturnValue);
	bool UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	bool OnPatrolState(bool CallFunc_OnPatrolState_ReturnValue);
	void CalculatePatrolPoi(bool* Result, bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue_1, bool CallFunc_ShouldHappen_ReturnValue_2);
	void ResetPatrolPOI(bool* Result);
	void SetPatrolPoi(enum class ESapsy_PatrolPoiType Type);
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class USapsy_SyncService_C* K2Node_DynamicCast_AsSapsy_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent(float DeltaSeconds);
	void BB_SyncPatrolPoi();
	void ReceiveTick(float DeltaSeconds);
	void OnApplyCustomization();
	void ExecuteUbergraph_Sapsy_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds_1, float CallFunc_GetMaxValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_1);
};

}



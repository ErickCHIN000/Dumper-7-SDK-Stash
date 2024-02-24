#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2571 - 0x252D)
// BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C
class ABPChar_Enemy_C : public ABPChar_AI_C
{
public:
	uint8                                        Pad_1326[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2530(0x8)(Transient, DuplicateTransient)
	class UOakMinimapIconComponent*              OakMinimapIcon;                                    // 0x2538(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodyWeaponHoldManagerComponent*       BodyWeaponHoldManager;                             // 0x2540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakAIWeaponUserComponent*             AIWeaponUser_0;                                    // 0x2548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIDodgeComponent*                     AIDodge;                                           // 0x2550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakHitRegionComponent*                HitRegion;                                         // 0x2558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIBalanceStateComponent*              AIBalanceState;                                    // 0x2560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasShield;                                         // 0x2568(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_132F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeathDissolveDelay;                                // 0x256C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndlessDungeonSpawn;                             // 0x2570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABPChar_Enemy_C* GetDefaultObj();

	void AIEndlessDungeon_Get(bool* IsEndlessDungeon);
	void Enemy_OnPolymorphStart(bool* Res);
	void Enemy_OnPolymorphStop(bool* Res);
	void CanEnemyBeTeamSwapped(bool* Res, bool CallFunc_K2_EvaluateConditionType_ReturnValue);
	void GetCompanionTargetingSocket(class FName* Socket);
	void UserConstructionScript();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void Enemy_OnPhaseLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnThoughtLockStop();
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(enum class EOakElementalType Type);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Enemy(class AActor* DamageReceiver, class AActor* DamageCauser);
	void AIEndlessDungeon_Set();
	void ExecuteUbergraph_BPChar_Enemy(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, bool Temp_bool_IsClosed_Variable, class AOakCharacter* K2Node_Event_Character, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, enum class EOakElementalType K2Node_ComponentBoundEvent_Type, bool Temp_bool_Has_Been_Initd_Variable, class UClass* K2Node_Select_Default, bool CallFunc_IsValidClass_ReturnValue, class AActor* K2Node_ComponentBoundEvent_DamageReceiver, class AActor* K2Node_ComponentBoundEvent_DamageCauser, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xA6C - 0x9E4)
// BlueprintGeneratedClass BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C
class ABPWeap_Tediore_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_1F4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(Transient, DuplicateTransient)
	class UGbxActionComponent*                   GbxAction;                                         // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ModMIRV;                                           // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModHoming;                                         // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModBouncy;                                         // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModHydra;                                          // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModShooting;                                       // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModZeus;                                           // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModStabilizer;                                     // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModProximity;                                      // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NumMIRVProjectiles;                                // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Projectile_ThrownWeapon;                           // 0xA20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideLegs;                                          // 0xA28(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1F60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CachedMaterial;                                    // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TED_DamageRadius;                                  // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedLoadedAmmo;                                  // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LegBone;                                           // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TEMP_SludgeHitActor;                               // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TEMP_SludgeHitLocation;                            // 0xA50(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TedioreThrowType;                                  // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TED_DamageScale;                                   // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TED_CanTalk;                                       // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TED_IsMagicShotgun;                                // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_Tediore_BaseWeapon_C* GetDefaultObj();

	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType, float CallFunc_GetValueOfAttribute_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void OnRep_HideLegs();
	void TedioreShowWeapon(class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void TedioreHideWeapon(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void TedioreThrowWeapon(class AActor** ThrownProjectile);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Notify_ReloadStarted(bool bAutoReload);
	void WeaponAttached();
	void ThrowTypeOverhand();
	void ThrowTypeSideRL();
	void ThrowTypeUnderhand();
	void ThrowTypeSideLR();
	void ExecuteUbergraph_BPWeap_Tediore_BaseWeapon(int32 EntryPoint, bool K2Node_Event_bAutoReload, float CallFunc_GetValueOfAttribute_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UTedioreWeaponBalanceStateComponent* K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetTedioreProjectileClass_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x9FC - 0x9E4)
// BlueprintGeneratedClass BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C
class ABPWeap_SM_Hyperion_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_3E31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(Transient, DuplicateTransient)
	class UClass*                                Projectile_ThrownWeapon;                           // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedLoadedAmmo;                                  // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_SM_Hyperion_C* GetDefaultObj();

	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType);
	void HideWeapon(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void ShowWeapon(class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void ThrowWeapon();
	void UserConstructionScript();
	void WeaponAttached();
	void Notify_ReloadStarted(bool bAutoReload);
	void ExecuteUbergraph_BPWeap_SM_Hyperion(int32 EntryPoint, float CallFunc_GetValueOfAttribute_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UTedioreWeaponBalanceStateComponent* K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetTedioreProjectileClass_ReturnValue, bool K2Node_Event_bAutoReload);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x9F8 - 0x9E4)
// BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C
class ABPWeap_COV_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_1838[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(Transient, DuplicateTransient)
	class FName                                  Bone_WaterCool;                                    // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_COV_BaseWeapon_C* GetDefaultObj();

	void DisableWaterBottle();
	void EnableWaterBottle();
	void GetRepairStyle(int32* Param, class UWeaponCOVRepairComponent* CallFunc_GetUseModeComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WeaponOnFire();
	void WeaponPutOut();
	void WeaponSmokeStop();
	void FirstPersonCreated();
	void EngineStart();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void StarterSparks();
	void WeaponStartWatering();
	void ExecuteUbergraph_BPWeap_COV_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData1, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue1, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}



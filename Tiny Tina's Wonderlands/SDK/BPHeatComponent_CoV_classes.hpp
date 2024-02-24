#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// BlueprintGeneratedClass BPHeatComponent_CoV.BPHeatComponent_CoV_C
class UBPHeatComponent_CoV_C : public UWeaponCOVHeatComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class ABPWeap_COV_BaseWeapon_C*              COVBaseWeapon;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPHeatComponent_CoV_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnStartOverheat();
	void ExecuteUbergraph_BPHeatComponent_CoV(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_COV_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
};

}



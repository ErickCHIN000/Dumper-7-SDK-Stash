#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass BP_WeaponMaterialWear_00_Master.BP_WeaponMaterialWear_00_Master_C
class UBP_WeaponMaterialWear_00_Master_C : public UWeaponMaterialWearAspectData
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_WeaponMaterialWear_00_Master_C* GetDefaultObj();

	void OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void ExecuteUbergraph_BP_WeaponMaterialWear_00_Master(int32 EntryPoint, class AActor* K2Node_CustomEvent_InventoryActor, class UInventoryBalanceStateComponent* K2Node_CustomEvent_InventoryBalanceState, class AActor* K2Node_CustomEvent_InventoryActor2, class UInventoryBalanceStateComponent* K2Node_CustomEvent_InventoryBalanceState2, class AActor* K2Node_CustomEvent_InventoryActor1, class UInventoryBalanceStateComponent* K2Node_CustomEvent_InventoryBalanceState1);
};

}



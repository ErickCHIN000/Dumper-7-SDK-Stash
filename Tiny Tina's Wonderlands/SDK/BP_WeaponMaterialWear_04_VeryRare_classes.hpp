#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x78 - 0x70)
// BlueprintGeneratedClass BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C
class UBP_WeaponMaterialWear_04_VeryRare_C : public UBP_WeaponMaterialWear_00_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_WeaponMaterialWear_04_VeryRare_C* GetDefaultObj();

	void OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare(int32 EntryPoint, class AActor* K2Node_Event_InventoryActor, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState, class AActor* K2Node_Event_InventoryActor2, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState2, class AActor* K2Node_Event_InventoryActor1, class UInventoryBalanceStateComponent* K2Node_Event_InventoryBalanceState1);
};

}



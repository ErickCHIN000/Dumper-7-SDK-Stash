#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x279 - 0x260)
// WidgetBlueprintGeneratedClass wid_hud_WeaponDurability.wid_hud_WeaponDurability_C
class UWid_hud_WeaponDurability_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                        Container;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WeaponDurability;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseCustomItemId;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_hud_WeaponDurability_C* GetDefaultObj();

	void SetProgress(float Min, float Max, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void Update(const struct FInventoryEntry& ItemEntry);
	void Construct();
	void Destruct();
	void UpdateWeapon();
	void ExecuteUbergraph_wid_hud_WeaponDurability(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetInternalItemId_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, float CallFunc_GetWeaponDurability_ReturnValue, float CallFunc_FClamp_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, bool CallFunc_IsWeaponDurabilityEnabled_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}



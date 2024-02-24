#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x350 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C
class UWBP_sw_AbilityBar_Offhand_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_sw_AbilityBar_C*                  WBP_sw_AbilityBar;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_AbilityBar_Offhand_C* GetDefaultObj();

	void SetupCosmeticsForOffhandAbilityBar();
	void OnItemDataInitialized(class ABP_EquippableItemBase_C* Equippable);
	void SetupLoadoutEvent(class AEquippableItem* Temp_object_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void OnLoadoutSlotChanged(enum class ELoadoutSlotType SlotType, class AEquippableItem* Item, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void ExecuteUbergraph_WBP_sw_AbilityBar_Offhand(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInitialized_bInitialized);
};

}



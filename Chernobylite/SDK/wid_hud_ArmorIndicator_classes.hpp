#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x292 - 0x260)
// WidgetBlueprintGeneratedClass wid_hud_ArmorIndicator.wid_hud_ArmorIndicator_C
class UWid_hud_ArmorIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      NoInsertsAnim;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        Container;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Counter;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shield;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        NewItemCount;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousItemCount;                                 // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimPlaying;                                       // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanPlayAnimation;                                  // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_hud_ArmorIndicator_C* GetDefaultObj();

	void SetCount(float Amount, int32 CallFunc_FFloor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SetProgress(float Min, float Max, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void NoInsertsAnimationFInished();
	void ArmorChanged();
	void InventoryUpdated();
	void ExecuteUbergraph_wid_hud_ArmorIndicator(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue, bool CallFunc_IsArmorEquipped_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_IsVisible_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Count_ReturnValue_1, bool CallFunc_IsArmorEquipped_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}



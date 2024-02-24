#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass wid_ResourceTransfer.wid_ResourceTransfer_C
class UWid_ResourceTransfer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USlider*                               Slider;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Buttons_Entry_C*        Wid_Inventory_Buttons_Entry;                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EResourceType                     Resource;                                          // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentVal;                                        // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_PlayerMiniStorageResources_C*     Parent;                                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentAmount;                                     // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         USeInventory;                                      // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_C*                 InventoryParent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_v2_Grid_C*                StorageParent;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_ResourceTransfer_C* GetDefaultObj();

	void BndEvt__Slider_23_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void More();
	void Less();
	void ExecuteUbergraph_wid_ResourceTransfer(int32 EntryPoint, bool Temp_bool_Variable, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, bool Temp_bool_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_Count_ReturnValue, float CallFunc_Count_ReturnValue_1, float CallFunc_Count_ReturnValue_2, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_Count_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float K2Node_Select_Default_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_Count_ReturnValue_4, float CallFunc_GridSnap_Float_ReturnValue_1, float CallFunc_Count_ReturnValue_5, float K2Node_ComponentBoundEvent_Value, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_GridSnap_Float_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x2F0 - 0x230)
// WidgetBlueprintGeneratedClass SaveEditor_ItemExplorer.SaveEditor_ItemExplorer_C
class USaveEditor_ItemExplorer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHRadioGroup*                         CategoryGroup;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              CategoryWrapBox;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         ItemGroup;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SlotScrollBox;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              SlotWrapBox;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FArrayOfSHItemClass> ItemClasses;                                       // 0x280(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        FilterCategory;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotUsed;                                        // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class USaveEditor_ItemExplorer_C* GetDefaultObj();

	void AddToRegistry(const class FString& Path, const TArray<class UClass*>& ItemsArray, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, TArray<class UClass*>& CallFunc_GetAllClassesFromParentClass_Result, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FArrayOfSHItemClass& K2Node_MakeStruct_ArrayOfSHItemClass, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_Array_Get_Item, class UClass* K2Node_ClassDynamicCast_AsSHItem, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, const struct FArrayOfSHItemClass& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Construct();
	void OnWidgetSelectedEvent_Event_0(int32 GroupIndex);
	void OnExternalAction_Event_0(class UInventorySlot_v2_C* Slot);
	void ExecuteUbergraph_SaveEditor_ItemExplorer(int32 EntryPoint, TScriptInterface<class IAssetRegistry> CallFunc_GetAssetRegistry_ReturnValue, class UInventorySlot_v2_C* CallFunc_Create_ReturnValue, TArray<class FString>& CallFunc_GetSubPaths_OutPathList, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UCustomButton_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const class FString& CallFunc_Array_Get_Item, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IAssetRegistry> CallFunc_GetAssetRegistry_ReturnValue_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, TArray<class FString>& CallFunc_GetSubPaths_OutPathList_1, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_Map_Keys_Keys, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 K2Node_CustomEvent_GroupIndex, uint8 CallFunc_MakeLiteralByte_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const struct FArrayOfSHItemClass& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UInventorySlot_v2_C* K2Node_CustomEvent_slot, TArray<enum class EUISlotAction>& K2Node_MakeArray_Array, TArray<enum class EUISlotAction>& K2Node_MakeArray_Array_1);
	void OnSlotUsed__DelegateSignature(class UInventorySlot_v2_C* Slot);
};

}



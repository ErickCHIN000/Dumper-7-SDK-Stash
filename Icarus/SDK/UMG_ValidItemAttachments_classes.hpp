#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x28A - 0x260)
// WidgetBlueprintGeneratedClass UMG_ValidItemAttachments.UMG_ValidItemAttachments_C
class UUMG_ValidItemAttachments_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        AttachmentIcons;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               AttachmentInfo;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            AttachmentText;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider_2;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSetBonus;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsSetBonusActive;                                  // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ValidItemAttachments_C* GetDefaultObj();

	void UpdateValidAttachments(struct FItemData& Item, const TArray<TSoftObjectPtr<class UTexture2D>>& Valid_Icons, const struct FIcarusAttachment& CallFunc_GetItemAttachmentData_Attachment, enum class EDataValid CallFunc_GetItemAttachmentData_Paths, int32 Temp_int_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FAttachmentIconsEnum& CallFunc_IntToStruct_ReturnValue, const struct FAttachmentIconsRowHandle& CallFunc_StructToRowHandle_ReturnValue, int32 Temp_int_Variable_1, const struct FAttachmentIcon& CallFunc_GetAttachmentIconsStruct_AttachmentIcons, enum class EValid CallFunc_GetAttachmentIconsStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_AttachmentIcon_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_UMG_ValidItemAttachments(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded);
};

}



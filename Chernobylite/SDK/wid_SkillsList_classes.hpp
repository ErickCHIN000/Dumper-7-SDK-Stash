#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass wid_SkillsList.wid_SkillsList_C
class UWid_SkillsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          List;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillsList_Entry_C*               Wid_SkillsList_Entry;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillsList_Entry_C*               Wid_SkillsList_Entry_23;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillsList_Entry_C*               Wid_SkillsList_Entry_58;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillsList_Entry_C*               Wid_SkillsList_Entry_115;                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillsList_Entry_C*               Wid_SkillsList_Entry_198;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedListIdx;                                   // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedEntryIdx;                                  // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_pda_NotesList_C*                  Owner;                                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_SkillsList_C* GetDefaultObj();

	void UdateSelected(int32 SelectedListIdx, int32 SelectedEntryIdx, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UWid_SkillsList_Entry_C* K2Node_Select_Default, class UImage* K2Node_Select_Default_1);
	void GetCurrent(class UWid_SkillsList_Entry_C** List, class UImage** Entry, struct FDataTableRowHandle* Skill, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UWid_SkillsList_Entry_C* K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1, class UImage* K2Node_Select_Default_2);
	void MoveRight(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UWid_SkillsList_Entry_C* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UImage* K2Node_Select_Default_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void MoveLeft(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UWid_SkillsList_Entry_C* K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, class UImage* K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void MoveDown(int32 Idx, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UWid_SkillsList_Entry_C* K2Node_Select_Default, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UImage* K2Node_Select_Default_1, int32 CallFunc_PostEvent_ReturnValue);
	void MoveUp(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UWid_SkillsList_Entry_C* K2Node_Select_Default, int32 CallFunc_GetChildrenCount_ReturnValue, class UImage* K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_SkillsList(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



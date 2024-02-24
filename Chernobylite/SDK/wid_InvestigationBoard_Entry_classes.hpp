#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C
class UWid_InvestigationBoard_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_2;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_17;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Box;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_31;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ID;                                                // 0x288(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	TArray<struct FDataTableRowHandle>           RequiredNotes;                                     // 0x298(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWid_InvestigationBoard_C*             Board;                                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* Note;                                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceConstant*             MI;                                                // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_InvestigationBoard_Entry_C* GetDefaultObj();

	void SetEnabled(bool NewEnabled);
	void SetSelected(bool NewSelected, float SelectionGlowIntensity, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_InvestigationBoard_Entry(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1);
};

}



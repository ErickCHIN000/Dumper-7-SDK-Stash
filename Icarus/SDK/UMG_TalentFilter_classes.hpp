#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_TalentFilter.UMG_TalentFilter_C
class UUMG_TalentFilter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_SearchBox_C*                      SearchBar;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     UMG_ButtonIcon;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTalentViewInterface*                  TalentView;                                        // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_TalentFilter_C* GetDefaultObj();

	void UpdateTextFilter(class FText TextIn);
	void HighlightTalents(const class FString& FilterQuery, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_GetTalentTreeWidgets_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup(class UTalentViewInterface* View, bool ShowClear);
	void Construct();
	void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_TalentFilter(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod);
};

}



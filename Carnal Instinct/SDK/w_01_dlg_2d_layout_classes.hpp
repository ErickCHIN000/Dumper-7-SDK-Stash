#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass w_01_dlg_2d_layout.w_01_dlg_2d_layout_C
class UW_01_dlg_2d_layout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UW_02_dlg_2d_subtitles_C*              W_dlg_2d_subtitles;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_01_dlg_3d_layout_C*                 W_dlg_3d_layout;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_01_dlg_3d_layout_C*>         Child_widget_list;                                 // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_01_dlg_2d_layout_C* GetDefaultObj();

	void Set_child_layout(TArray<class UW_01_dlg_3d_layout_C*>& Child_widgets);
	void Get_child_layout(int32 Widget_index, bool* Is_valid, class UW_01_dlg_3d_layout_C** Widget_reference, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_dlg_3d_layout_C* CallFunc_Array_Get_Item);
	void Init_widget();
	void ExecuteUbergraph_w_01_dlg_2d_layout(int32 EntryPoint, TArray<class UW_01_dlg_3d_layout_C*>& K2Node_MakeArray_Array);
};

}



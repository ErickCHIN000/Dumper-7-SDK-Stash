#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C
class UUMG_ResourcePromptDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UpandFade;                                         // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          ResourceList;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFResourcePromptInfo>          Queue;                                             // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFResourcePromptInfo>          TempQueue;                                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class UUMG_ResourcePrompt_C*> WidgetMap;                                         // 0x2A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_ResourcePromptDisplay_C* GetDefaultObj();

	void AddResource(const struct FItemData& Item, int32 Count, class UUMG_ResourcePrompt_C* Widget, const struct FItemData& Temp, int32 QueueIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_ResourcePrompt_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFResourcePromptInfo& K2Node_MakeStruct_FResourcePromptInfo, bool CallFunc_IsValid_ReturnValue, const struct FFResourcePromptInfo& K2Node_MakeStruct_FResourcePromptInfo_1, int32 CallFunc_GetItemPropertyValue_IntValue_1, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFResourcePromptInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue_2, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_2, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ResourceRemoved(class FName Item);
	void ExecuteUbergraph_UMG_ResourcePromptDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFResourcePromptInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UUMG_ResourcePrompt_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FName K2Node_CustomEvent_Item, bool CallFunc_Map_Remove_ReturnValue);
};

}



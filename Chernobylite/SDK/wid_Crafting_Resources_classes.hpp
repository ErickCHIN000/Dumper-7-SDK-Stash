#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2A4 - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Resources.wid_Crafting_Resources_C
class UWid_Crafting_Resources_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Shake;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_C*                      Needed;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_3;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_5;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BottomOffset;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Resources_C* GetDefaultObj();

	void UpdateVisibility(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void EnumToString(enum class EResourceType Selection, class FName* Name, class FName CallFunc_GetNameByResource_ReturnValue);
	void Update(TMap<class FName, float>& Ingreadients, TMap<class FName, float> IngreadientsNoPerks);
	void AnimateNeeded();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Crafting_Resources(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Loop_Counter_Variable, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, TArray<enum class EResourceType>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item, class FName CallFunc_EnumToString_Name, int32 CallFunc_Array_Length_ReturnValue, TMap<class FName, float> K2Node_CustomEvent_Ingreadients, TMap<class FName, float> K2Node_CustomEvent_IngreadientsNoPerks, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_Count_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_3, bool K2Node_Event_IsDesignTime, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Update_RequirementsMet);
};

}



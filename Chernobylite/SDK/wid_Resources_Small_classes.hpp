#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass wid_Resources_Small.wid_Resources_Small_C
class UWid_Resources_Small_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_1;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                Chemicals;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                ElectronicalParts;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                Flammable;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                FoodRation;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                Herbs;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                MechanicalParts;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Entry_C*                Mushrooms;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_70;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Resources_Small_C* GetDefaultObj();

	void CheckIfAllResourceRequirementsAreMet(class UPanelWidget* Self2, bool* RequirementsMet, bool Requiriments_met, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_Resources_Entry_C* K2Node_DynamicCast_AsWid_Resources_Entry, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateBorderColor(bool* RequirementsMet, bool CallFunc_CheckIfAllResourceRequirementsAreMet_RequirementsMet);
	void GetResourceWidget(enum class EResourceType Enum, class UWid_Resources_Entry_C** Widget, bool K2Node_SwitchEnum_CmpSuccess);
	void Update(enum class EResourceType Enum, float ComparedAmount, float Amount, bool Red, bool ShowOnlyNon0Values, class FName RowName, float AmountNoPerks, bool* RequirementsMet, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<enum class EResourceType>& K2Node_MakeArray_Array, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UpdateBorderColor_RequirementsMet);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Resources_Small(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



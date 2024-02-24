#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x299 - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatsWindow.UMG_StatsWindow_C
class UUMG_StatsWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Backglow;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Container;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  UMG_BasicButton_2;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay;                                           // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_StatList_C*                       CurrentStatList;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxVerticalElements;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentElements;                                   // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bound;                                             // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_StatsWindow_C* GetDefaultObj();

	void CreateList(bool CreatedTitle, TMap<enum class EStatSources, int64> NewLocalVar_0, const class FString& StatString, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FStatsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FStatCategoriesEnum& CallFunc_RowHandleToStruct_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMG_StatTitleCategory_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FStatCategoriesEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, class UUMG_StatTitle_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UpdateStats(TMap<enum class EStatSources, int64> NewLocalVar_0, const class FString& StatString, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUMG_StatList_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_StatList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void AddWidget(class UUserWidget* Widget);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update();
	void ExecuteUbergraph_UMG_StatsWindow(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class UUserWidget* K2Node_CustomEvent_Widget, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UUMG_StatList_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}



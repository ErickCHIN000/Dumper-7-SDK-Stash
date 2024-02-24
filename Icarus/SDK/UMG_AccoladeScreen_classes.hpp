#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_AccoladeScreen.UMG_AccoladeScreen_C
class UUMG_AccoladeScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateIn;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        AchievementButton;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Buttons;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CategorySwitcher;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ConstructionButton;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        GeneralButton;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        HuntingButton;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        MedalsButton;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        SurvivalButton;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_AccoladeList_C*>           AccoladeLists;                                     // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         RequiresUpdate;                                    // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_AccoladeScreen_C* GetDefaultObj();

	void InitAccoladeLists(const TArray<struct FAccoladesRowHandle>& Array, TMap<struct FPlayerAccoladeCategoriesEnum, struct FFAccoladeArrayStruct> AccoladeMap, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FAccoladesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAccoladesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_AccoladeList_C* CallFunc_Create_ReturnValue, const struct FFAccoladeArrayStruct& K2Node_MakeStruct_FAccoladeArrayStruct, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FPlayerAccoladeCategoriesEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPlayerAccoladeCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FPlayerAccoladeCategoriesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FFAccoladeArrayStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFAccoladeArrayStruct& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void PlayerTrackerInitialized();
	void CustomEvent_0(const struct FAccoladesRowHandle& Accolade);
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void ExecuteUbergraph_UMG_AccoladeScreen(int32 EntryPoint, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FPlayerAccoladeCategoriesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPlayerAccoladeCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUMG_AccoladeList_C* CallFunc_Create_ReturnValue, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_5, class UUMG_AccoladeList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_4, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_3, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, const struct FAccoladesRowHandle& K2Node_CustomEvent_Accolade, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1);
};

}



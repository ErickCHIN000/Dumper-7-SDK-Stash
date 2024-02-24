#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_DebugBenchmark.wid_DebugBenchmark_C
class UWid_DebugBenchmark_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_40;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_19;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_17;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<enum class EEventMap>                 Maps;                                              // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWid_Loading_C*                        LoadingWidget;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DebugBenchmark_C* GetDefaultObj();

	void CraeteEntries(class UWid_DebugBasicTextButtonEntry_C* CallFunc_Create_ReturnValue, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, TArray<enum class EEventMap>& Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class EEventMap CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnMapSelected(class UWid_DebugBasicTextButtonEntry_C* Instigator);
	void Bench();
	void BndEvt__Button_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_DebugBenchmark(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_Loading_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UWid_DebugBasicTextButtonEntry_C* K2Node_CustomEvent_Instigator, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}



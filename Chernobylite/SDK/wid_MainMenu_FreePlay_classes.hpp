#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x331 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C
class UWid_MainMenu_FreePlay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_Buttons_C*               Buttons;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Events;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Level;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Mission;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Perks;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Weapons;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Weather;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContinueDelegate;                                  // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewDeletage;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitDelegate;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       MenuTheme;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<enum class EEventMap>                 AvailableLevels;                                   // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class FName>                          AvailableMoods;                                    // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          AvailableQuests;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                MapInfo2;                                          // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEventSystemBackend*                   Backend;                                           // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InputEnabled;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_FreePlay_C* GetDefaultObj();

	void OnAsyncLoadFinished(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance);
	void StartGamePressed(TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2);
	void Prepare_and_Setup_Values_For_Free_Play(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class FName CallFunc_Get_Selected_Mission_Output, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get_1, class FName CallFunc_Get_Selected_Weather_Output, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_SetMood_ReturnValue, bool CallFunc_ActivateQuestDebug_ReturnValue, bool CallFunc_Prepeare_ReturnValue);
	void Close_Free_Play();
	void Get_Selected_Mission(class FName* Output, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item);
	void Setup_Misson_Values(const TArray<class FText>& MissonValues, class UDataTable* QuestsDataTable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Update_Available_Moods(enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames);
	void Get_Selected_Weather(class FName* Output, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item);
	void Get_Selected_Level(enum class EEventMap* Output_Get, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, enum class EEventMap CallFunc_Array_Get_Item);
	void Setup_Weather_Values(const TArray<class FText>& WeatherValues, class UDataTable* MoodsDataTable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Array_Get_Item, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FMoodData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup_Level_Values(const TArray<class FText>& LevelValues, int32 Temp_int_Array_Index_Variable, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EEventMap CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void On_Level_Value_Changed();
	void Update_Available_Quests(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Update_Quests(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class AEventSystemBackend* CallFunc_Array_Get_Item, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void PlayUIMoveSound();
	void Left();
	void Right();
	void Accept();
	void Down();
	void Up();
	void Construct();
	void BackBtn();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Test();
	void ExecuteUbergraph_wid_MainMenu_FreePlay(int32 EntryPoint, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EEventMap CallFunc_Get_Selected_Level_Output_Get, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue);
	void ExitDelegate__DelegateSignature();
	void NewDeletage__DelegateSignature();
	void ContinueDelegate__DelegateSignature();
};

}



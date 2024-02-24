#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C
class UWid_PDA_Map_QuestInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          MainContainer;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestDescription;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestName;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_PDA_Map_QuestInfo_C* GetDefaultObj();

	void UpdateText(const struct FDescriptionInfo& QuestInfo, class FText CallFunc_FormatText_Output);
	void Update(const TArray<enum class EEventMap>& DisableOnMaps, enum class EEventMap CurrentMap, const struct FActiveQuestInfo& ActiveQuest, TArray<enum class EEventMap>& K2Node_MakeArray_Array, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_1, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Construct();
	void ExecuteUbergraph_wid_PDA_Map_QuestInfo(int32 EntryPoint);
};

}



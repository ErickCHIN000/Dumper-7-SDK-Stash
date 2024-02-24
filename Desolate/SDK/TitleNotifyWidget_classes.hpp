#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x330 - 0x248)
// WidgetBlueprintGeneratedClass TitleNotifyWidget.TitleNotifyWidget_C
class UTitleNotifyWidget_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimLevelUp_C*                        AnimLevelUp;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimLocationReached_C*                AnimLocationReached;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimQuestAdded_C*                     AnimQuestAdded;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimQuestCompleted_C*                 AnimQuestCompleted;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimRankUp_C*                         AnimRankUp;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimIsPlay;                                        // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C86[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUITitleNotifyQueue>           Queue;                                             // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsPlayedQueue;                                     // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUITitleNotifyQueue                   TempLevel;                                         // 0x2A0(0x44)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_C8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUITitleNotifyQueue                   TempNeutral;                                       // 0x2E8(0x44)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_C8E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTitleNotifyWidget_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnLevelAdded();
	void OnLocationReached(class FText LocationName);
	void OnQuestAdded_Event(struct FQuestView& QuestView);
	void OnQuestComplete(struct FQuestView& QuestView);
	void OnReputationRankUp(class UClass* NPC, int32 ReputationLevel);
	void OnNeutralReputationRankUp(int32 NeutralsLevel);
	void StartQueue();
	void UpdateQueue();
	void ExecuteUbergraph_TitleNotifyWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQuestCategory Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EQuestCategory Temp_byte_Variable_1, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_CustomEvent_LocationName, bool CallFunc_TextIsEmpty_ReturnValue, const struct FQuestView& K2Node_CustomEvent_QuestView_1, bool CallFunc_IsValid_ReturnValue_1, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_1, bool K2Node_Select_Default, const struct FQuestView& K2Node_CustomEvent_QuestView, class UClass* K2Node_CustomEvent_NPC, int32 K2Node_CustomEvent_ReputationLevel, int32 CallFunc_GetUINpcColor_ID, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_2, float CallFunc_GetExperienceFromDatatable_ReturnValue, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_3, bool K2Node_Select_Default_1, int32 K2Node_CustomEvent_NeutralsLevel, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, float CallFunc_GetExperienceFromDatatable_ReturnValue_1, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_5, int32 CallFunc_Array_Add_ReturnValue_3, const struct FUITitleNotifyQueue& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FCeil_ReturnValue);
};

}



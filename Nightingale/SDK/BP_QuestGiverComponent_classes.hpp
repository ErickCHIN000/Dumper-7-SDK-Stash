#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x120 - 0xC8)
// BlueprintGeneratedClass BP_QuestGiverComponent.BP_QuestGiverComponent_C
class UBP_QuestGiverComponent_C : public UQuestGiverComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              IndicatorMaterial;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       IndicatorUpdateInterval;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Quest_HiddenIndicatorTint;                         // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Quest_ShownIndicatorTint;                          // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisplayIndicatorSign;                              // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Contract_StateType              EncounterGiverStatus;                              // 0x101(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Encounter_ShownIndicatorTint;                      // 0x104(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Encounters_DisplayIndicatorSign;                   // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3206[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialBillboardComponent*           IndicatorSign;                                     // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_QuestGiverComponent_C* GetDefaultObj();

	void Client_updateIndicator();
	void OnRep_EncounterGiverStatus();
	void Set_Indicator_Material(class UTexture* Icon, const struct FLinearColor& Tint, bool CallFunc_IsValid_ReturnValue);
	void Indicator_Material_Update(enum class E_Contract_StateType Indicator_State, enum class E_Contract_StateType Temp_byte_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, enum class E_Contract_StateType Temp_byte_Variable_1, enum class E_Contract_StateType Temp_byte_Variable_2, enum class E_Contract_StateType Temp_byte_Variable_3, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* Temp_object_Variable_7, class UTexture* K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class UTexture* K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3);
	void Update_Indicator(TScriptInterface<class IQuestTrackerInterface> QuestTracker_LOCAL, bool HasTasksToCompleteLOCAL, bool HasObjectivesToAcceptLOCAL, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FQuestGiverKey& K2Node_MakeStruct_QuestGiverKey, bool CallFunc_GetQuestGiverStatus_bAvailableQuests, bool CallFunc_GetQuestGiverStatus_bTasksToComplete, bool CallFunc_GetQuestGiverStatus_bFoundQuestGiver, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Create_Indicator_Sign(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialBillboardComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ReceiveBeginPlay();
	void RefreshIndicatorSetup();
	void Update_Indicator_From_Interaction(enum class E_Contract_StateType EncounterGiverStatus, bool Encounters_DisplayIndicatorSign);
	void ExecuteUbergraph_BP_QuestGiverComponent(int32 EntryPoint, enum class E_Contract_StateType K2Node_CustomEvent_EncounterGiverStatus, bool K2Node_CustomEvent_Encounters_DisplayIndicatorSign, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& CallFunc_GetQuestGiverRowHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}



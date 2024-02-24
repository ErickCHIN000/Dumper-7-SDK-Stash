#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ExperienceNotifier.UMG_ExperienceNotifier_C
class UUMG_ExperienceNotifier_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Events;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ExperienceNotifier_C* GetDefaultObj();

	void OnExperienceEvent(const struct FExperienceEventsRowHandle& ExperienceEvent, int32 ExperienceGained);
	void OnBestiaryProgress(const struct FBestiaryDataRowHandle& Group, int32 NowPoints, int32 MaxPoints);
	void OnInitialized();
	void OnChallengeProgressed(struct FItemData& ItemData, int32 ProgressAmount);
	void AddNotify(class UWidget* Content);
	void ExecuteUbergraph_UMG_ExperienceNotifier(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UUMG_BestiaryExperience_C* CallFunc_Create_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ChallengeExperienceNotification_C* CallFunc_Create_ReturnValue_1, const struct FExperienceEventsRowHandle& K2Node_CustomEvent_ExperienceEvent, int32 K2Node_CustomEvent_ExperienceGained, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_Group, int32 K2Node_CustomEvent_NowPoints, int32 K2Node_CustomEvent_MaxPoints, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FItemData& K2Node_CustomEvent_ItemData, int32 K2Node_CustomEvent_ProgressAmount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FLivingItemSlotState& CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot, bool CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue, class UWidget* K2Node_CustomEvent_Content, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_ExperienceGained_C* CallFunc_Create_ReturnValue_2);
};

}



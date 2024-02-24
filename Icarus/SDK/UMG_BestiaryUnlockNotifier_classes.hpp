#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C
class UUMG_BestiaryUnlockNotifier_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Events;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_BestiaryUnlockNotifier_C* GetDefaultObj();

	void OnBestiaryUnlock(const struct FBestiaryDataRowHandle& Group, enum class EBestiaryUnlockPopup PopType);
	void OnFishUnlock(const struct FFishTypeTracking& Tracking, int32 PopType);
	void Construct();
	void ExecuteUbergraph_UMG_BestiaryUnlockNotifier(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_FishUnlock_C* CallFunc_Create_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_Group, enum class EBestiaryUnlockPopup K2Node_CustomEvent_PopType_1, const struct FFishTypeTracking& K2Node_CustomEvent_Tracking, int32 K2Node_CustomEvent_PopType, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_BestiaryUnlock_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
};

}



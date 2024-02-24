#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4D8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_HUD_InteractionLayer.WBP_HUD_InteractionLayer_C
class UWBP_HUD_InteractionLayer_C : public UNWXCommonWindowWidget
{
public:
	class UWBP_HUD_InteractHint_txt_C*           InteractionText;                                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BuildModeFeedback_C*              WBP_BuildModeFeedback;                             // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GoalTracker_Panel_C*              WBP_GoalTracker_Panel;                             // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InteractionScreen_C*              WBP_InteractionScreen;                             // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_InteractionLayer_C* GetDefaultObj();

	void UpdateState(const struct FInteractionUIContext& UI_Context);
};

}



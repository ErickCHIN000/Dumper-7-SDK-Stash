#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// WidgetBlueprintGeneratedClass UMG_ProcessorBase.UMG_ProcessorBase_C
class UUMG_ProcessorBase_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DummyObject_C*                     DummyObject;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         DropCollider;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HolographicObject_C*               CachedPreview;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ProcessorBase_C* GetDefaultObj();

	void UpdateHolographicHover(const struct FItemData& Item, enum class EProcessorPreview State);
	struct FEventReply ThreeDSpace_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_ProcessorBase_C* K2Node_DynamicCast_AsBP_Processor_Base, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMG_CursorWidget_C* CallFunc_GetCursorWidget_CursorWidget, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	struct FEventReply ThreeDSpace_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_CursorWidget_C* CallFunc_GetCursorWidget_CursorWidget, bool CallFunc_IsValid_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FEventReply& CallFunc_Handled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void CloseUI(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_UMG_ProcessorBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C
class UUMG_IcarusLinkedActorPanel_C : public UIcarusLinkedActorPanelBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                LinkedActor;                                       // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AutoCloseAtDistance;                               // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3324[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoCloseDistance;                                 // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DistanceCheckTimer;                                // 0x278(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_IcarusLinkedActorPanel_C* GetDefaultObj();

	void GetLinkedActorContainerInventory(class UInventory** ContainerInventory);
	void GetLinkedActorInventoryComponent(class UInventoryComponent** InventoryComponent, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ClosePanel(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue);
	void OnOpened();
	void Construct();
	void CheckDistanceToLinkedActor();
	void OnPanelDisplayHidden();
	void ExecuteUbergraph_UMG_IcarusLinkedActorPanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



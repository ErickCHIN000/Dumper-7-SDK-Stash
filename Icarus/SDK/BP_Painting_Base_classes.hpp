#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x7A8 - 0x774)
// BlueprintGeneratedClass BP_Painting_Base.BP_Painting_Base_C
class ABP_Painting_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3918[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget_PaintingDisplay;                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPaintingsRowHandle                   PaintingRow;                                       // 0x790(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Painting_Base_C* GetDefaultObj();

	struct FPaintingsRowHandle GetPaintingImageRow();
	void OnRep_PaintingRow(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Painting_Display_C* K2Node_DynamicCast_AsUMG_Painting_Display, bool K2Node_DynamicCast_bSuccess);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateImage(const struct FPaintingsRowHandle& PaintingRow);
	void ReceiveBeginPlay();
	void SetPaintingImage(struct FPaintingsRowHandle& PaintingRow);
	void ExecuteUbergraph_BP_Painting_Base(int32 EntryPoint, const struct FPaintingsRowHandle& K2Node_CustomEvent_PaintingRow, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const struct FPaintingsRowHandle& K2Node_Event_PaintingRow, class UUMG_Painting_Display_C* K2Node_DynamicCast_AsUMG_Painting_Display, bool K2Node_DynamicCast_bSuccess);
};

}



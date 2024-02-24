#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x7D4 - 0x774)
// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
class ABP_Sign_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_2918[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget_SignDisplay;                                // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x790(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	int32                                        MaxCharacters;                                     // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FontColor;                                         // 0x7AC(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    IconRow;                                           // 0x7BC(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Sign_Base_C* GetDefaultObj();

	struct FItemableRowHandle GetSignIconRow();
	struct FLinearColor GetSignColor();
	class FText GetSignText();
	void OnRep_IconRow(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess);
	void OnRep_FontColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_Text(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess);
	void SetSignText(class FText& Text, struct FLinearColor& Color);
	void UpdateTextRender(class FText& Text, const struct FLinearColor& Color);
	void SetSignIcon(struct FItemableRowHandle& IconRow);
	void UpdateIcon(const struct FItemableRowHandle& IconRow);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Sign_Base(int32 EntryPoint, class FText K2Node_Event_Text, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_CustomEvent_Text, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FItemableRowHandle& K2Node_Event_IconRow, const struct FItemableRowHandle& K2Node_CustomEvent_IconRow, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}



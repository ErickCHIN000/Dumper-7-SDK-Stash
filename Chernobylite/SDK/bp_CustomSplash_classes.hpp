#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass bp_CustomSplash.bp_CustomSplash_C
class Abp_CustomSplash_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidget*                               CurrentSplash;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FPressed;                                          // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Abp_CustomSplash_C* GetDefaultObj();

	void InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void Show(class UClass* WidgetClass);
	void Hide();
	void ExecuteUbergraph_bp_CustomSplash(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UClass* K2Node_CustomEvent_WidgetClass, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputActionEvent_Key);
	void FPressed__DelegateSignature();
};

}



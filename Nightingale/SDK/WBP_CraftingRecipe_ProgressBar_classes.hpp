#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x5A9 - 0x439)
// WidgetBlueprintGeneratedClass WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C
class UWBP_CraftingRecipe_ProgressBar_C : public UWBP_NWX_ProgressBar_C
{
public:
	uint8                                        Pad_2896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeReference              Recipe;                                            // 0x450(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_Crafting_CraftInProgress           CraftInProgress;                                   // 0x4C0(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_28A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_Step_RefinementTimer      RefinementTimer;                                   // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCraftPaused;                                     // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingRecipe_ProgressBar_C* GetDefaultObj();

	void IsCraftInProgressEqualToCurrentRecipe(bool* IsEqual, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FCraftingRecipeReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TimerUpdate(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue);
	void UpdateProgressBar(double BaseTime, double LTotalTimeRequired, const struct FS_Crafting_CraftInProgress& LCraftInProgress, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void OnDataUpdated(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue);
	void UpdateRecipe(const struct FCraftingRecipeReference& Recipe, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_WBP_CraftingRecipe_ProgressBar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual, bool CallFunc_Not_PreBool_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}



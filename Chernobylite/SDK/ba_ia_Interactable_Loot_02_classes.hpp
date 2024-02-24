#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C
class Aba_ia_Interactable_Loot_02_C : public Aba_ia_Interactable_Random_Loot_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class Aba_ia_Interactable_Loot_02_C* GetDefaultObj();

	void InternalShowNearInteractIcon();
	void InternalShowInteractIcon();
	void InternalHideInteractIcon();
	void ReceiveTick(float DeltaSeconds);
	void BindMenuToggled();
	void UnbindMenuToggled();
	void MenuToggled(bool IsPaused);
	void ExecuteUbergraph_ba_ia_Interactable_Loot_02(int32 EntryPoint, class UWid_Loot_Main_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool K2Node_CustomEvent_IsPaused, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3);
};

}



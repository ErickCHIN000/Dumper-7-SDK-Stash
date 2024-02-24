#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_SetCriticalHit.CF_SetCriticalHit_C
class UCF_SetCriticalHit_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetCriticalHit_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCriticalHitSetupEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCriticalHitSetupRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FCriticalHitSetup& CallFunc_GetCriticalHitSetupStruct_CriticalHitSetup, enum class EValid CallFunc_GetCriticalHitSetupStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class ULoadoutRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SetCriticalHit(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class ULoadoutRow_C* K2Node_DynamicCast_AsLoadout_Row, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x330 - 0x2C0)
// WidgetBlueprintGeneratedClass BP_LootContainerWidget.BP_LootContainerWidget_C
class UBP_LootContainerWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_62;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InspectedText;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InteractTxt;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuickSearch;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquareProgressBar_C*                  SquareProgressBar;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt;                                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          DefColor;                                          // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentTime;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTime;                                           // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Multiplier;                                        // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanCauseNoise_;                                    // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ContainerREF;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LootContainerWidget_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void BeginInteract(class FText Action, class FText Container);
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_LootContainerWidget(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class FText K2Node_CustomEvent_Action, class FText K2Node_CustomEvent_Container, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_LootContainers_C> K2Node_DynamicCast_AsBPI_Loot_Containers, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHeld__Held_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, bool CallFunc_IsInputKeyDown_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_LootContainers_C> K2Node_DynamicCast_AsBPI_Loot_Containers_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetSettings_ChanceToProduceNoise, double CallFunc_GetSettings_Default_ChanceToProduceNoise, double CallFunc_GetSettings_DurationToHold, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_SetPercent_Value_ImplicitCast);
};

}



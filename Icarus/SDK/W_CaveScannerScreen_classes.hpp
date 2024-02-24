#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x318 - 0x260)
// WidgetBlueprintGeneratedClass W_CaveScannerScreen.W_CaveScannerScreen_C
class UW_CaveScannerScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Scanning;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Grid;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OreType;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OreTypeBorder;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PointerImage;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ScanningLine;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Signal;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SignalText;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Scanner_C*     Scanner;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Closest_Angle;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetOffset;                                      // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentOffset;                                     // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSignal;                                         // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_432C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SignalIntensity;                                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           WarningRed;                                        // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Green;                                             // 0x2F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_CaveScannerScreen_C* GetDefaultObj();

	void SetHasSignal(bool Signal, class AIcarusItem* NewLocalVar_0, class UFMODEvent* Temp_object_Variable, class UFMODEvent* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UFMODEvent* K2Node_Select_Default, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class FText GetSignalText();
	class FText GetOreTypeText(class UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner_Deep_Ore_Advanced, bool K2Node_DynamicCast_bSuccess, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3);
	class FText GetSignalPercentageText(float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Init(class UBP_ActionableBehaviour_Scanner_C* Scanner);
	void ExecuteUbergraph_W_CaveScannerScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, class UBP_ActionableBehaviour_Scanner_C* K2Node_CustomEvent_Scanner, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Cos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Sin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_12, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_REase_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner_Deep_Ore_Advanced, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}



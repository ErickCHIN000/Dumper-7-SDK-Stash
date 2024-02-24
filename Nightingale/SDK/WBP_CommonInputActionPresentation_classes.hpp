#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x390 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CommonInputActionPresentation.WBP_CommonInputActionPresentation_C
class UWBP_CommonInputActionPresentation_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_IconPresentation;                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Height;                                            // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_54BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UInputAction>           In_Input_Action;                                   // 0x360(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_InputKey_OR_C*                    PreviousORWidget;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonInputActionPresentation_C* GetDefaultObj();

	void Update(bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_CommonInputActionIconSet_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_Count, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWBP_InputKey_OR_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Conv_DoubleToVector2D_InDouble_ImplicitCast);
	void SetInputAction(TSoftObjectPtr<class UInputAction> In_Input_Action);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_CommonInputActionPresentation(int32 EntryPoint, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_Event_CurrentInputType);
};

}



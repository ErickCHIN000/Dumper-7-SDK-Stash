#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_ToggleFLODDebugOverlay.CF_ToggleFLODDebugOverlay_C
class UCF_ToggleFLODDebugOverlay_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_176A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_ToggleFLODDebugOverlay_C* GetDefaultObj();

	bool GetCheckboxState(TArray<class UUMG_FLODDebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_ToggleFLODDebugOverlay(int32 EntryPoint, TArray<class UUMG_FLODDebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_NewState, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_FLODDebugOverlay_C* CallFunc_Create_ReturnValue);
};

}



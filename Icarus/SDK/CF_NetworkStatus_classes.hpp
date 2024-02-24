#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_NetworkStatus.CF_NetworkStatus_C
class UCF_NetworkStatus_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_26C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_NetworkStatus_C* GetDefaultObj();

	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_NetworkStatus(int32 EntryPoint, TArray<class UUMG_NetworkDebugInfo_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_NetworkDebugInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMG_NetworkDebugInfo_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_Event_NewState);
};

}



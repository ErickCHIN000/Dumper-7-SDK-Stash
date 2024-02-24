#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2D9 - 0x2A8)
// WidgetBlueprintGeneratedClass CF_Base.CF_Base_C
class UCF_Base_C : public UCheatFunctionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UUMG_CheatFunctionBorder_C> ParentBorder;                                      // 0x2B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	bool                                         IsTopFunction;                                     // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCF_Base_C* GetDefaultObj();

	void GetIcarusPlayerController(class AIcarusPlayerController** Controller, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class FString GetName(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetName_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCheatFunctionRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Set_Top_Function(bool IsTop);
	void ExecuteUbergraph_CF_Base(int32 EntryPoint, bool K2Node_CustomEvent_IsTop, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UUMG_CheatFunctionBorder_C* K2Node_DynamicCast_AsUMG_Cheat_Function_Border, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}



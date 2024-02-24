#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_HardDeleteAllFLOD.CF_HardDeleteAllFLOD_C
class UCF_HardDeleteAllFLOD_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_HardDeleteAllFLOD_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_HardDeleteAllFLOD(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AInstancedFoliageActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}



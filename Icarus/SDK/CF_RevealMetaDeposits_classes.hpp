#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_RevealMetaDeposits.CF_RevealMetaDeposits_C
class UCF_RevealMetaDeposits_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_RevealMetaDeposits_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_RevealMetaDeposits(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, TArray<class ABP_MetaDeposit_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_OreDeposit_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_AddStats_BP_ReturnValue);
};

}



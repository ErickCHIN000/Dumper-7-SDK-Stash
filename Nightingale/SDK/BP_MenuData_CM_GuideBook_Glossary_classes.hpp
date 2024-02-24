#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Glossary.BP_MenuData_CM_GuideBook_Glossary_C
class UBP_MenuData_CM_GuideBook_Glossary_C : public UNWXMenuDataCategoryManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Glossary_C* GetDefaultObj();

	void PostInitialize();
	void ExecuteUbergraph_BP_MenuData_CM_GuideBook_Glossary(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UNWXResourceGlossarySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FResourceGlossaryData>& CallFunc_GetResourceInformation_ReturnValue, const struct FResourceGlossaryData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Glossary_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}



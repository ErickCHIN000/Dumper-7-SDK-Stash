#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2F9 - 0x2F0)
// BlueprintGeneratedClass BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C
class ABP_IcarusFLOD_Default_C : public AFLOD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         OverrideDescriptions;                              // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_IcarusFLOD_Default_C* GetDefaultObj();

	void UserConstructionScript(int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FFLODDescriptionsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFLODDescriptionsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FFLODDescription& CallFunc_GetFLODDescriptionsStruct_FLODDescriptions, enum class EValid CallFunc_GetFLODDescriptionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void FLODDebugStats();
	void ExecuteUbergraph_BP_IcarusFLOD_Default(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue);
};

}



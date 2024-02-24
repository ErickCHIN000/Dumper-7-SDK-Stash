#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x120 - 0xC8)
// BlueprintGeneratedClass BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C
class UBP_FLODInfluence_TreeToppler_C : public UFLODInfluenceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FFLODInstanceID, struct FTreeToppleInfo> PendingToppleInfo;                                 // 0xD0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_FLODInfluence_TreeToppler_C* GetDefaultObj();

	void ToppleTree(class ATreeBase* Tree, const struct FTreeToppleInfo& ToppleInfo, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess);
	void UpdatePendingTopple(const TArray<struct FFLODInstanceID>& RemovePendingTopple, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FFLODInstanceID>& CallFunc_Map_Keys_Keys, bool CallFunc_Less_IntInt_ReturnValue, const struct FTreeToppleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_FindActorFromInstanceID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void AddPendingTreeTopple(const struct FFLODInstanceID& Instance, const struct FTreeToppleInfo& ToppleInfo);
	void UpdateActiveInfluences();
	void ExecuteUbergraph_BP_FLODInfluence_TreeToppler(int32 EntryPoint);
};

}



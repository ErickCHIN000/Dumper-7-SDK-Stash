#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC0 - 0xA0)
// BlueprintGeneratedClass BP_HitResponse.BP_HitResponse_C
class UBP_HitResponse_C : public UHitResponseComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                            ResponseTable;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AppliedHitResponse;                                // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_HitResponse_C* GetDefaultObj();

	void MatchTagAgainstTable(const struct FGameplayTag& Tag, struct FS_ResponseRow* Response, bool* Success, const TArray<struct FS_ResponseRow>& PartiallyMatchingRows, const struct FS_ResponseRow& TableRow, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ResponseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void HitResponse(const struct FS_HitData& HitData, const TArray<struct FGameplayTag>& MatchingTags, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FS_ResponseRow& CallFunc_MatchTagAgainstTable_Response, bool CallFunc_MatchTagAgainstTable_Success, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void MultiCastApplyResponse(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData);
	void ServerApplyResponse(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData);
	void ExecuteUbergraph_BP_HitResponse(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FS_ResponseRow& K2Node_CustomEvent_Response_1, const struct FS_HitData& K2Node_CustomEvent_HitData_1, const struct FS_ResponseRow& K2Node_CustomEvent_Response, const struct FS_HitData& K2Node_CustomEvent_HitData, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void AppliedHitResponse__DelegateSignature(const struct FS_ResponseRow& Response, const struct FS_HitData& HitData);
};

}



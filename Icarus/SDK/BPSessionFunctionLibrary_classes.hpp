#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPSessionFunctionLibrary.BPSessionFunctionLibrary_C
class UBPSessionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPSessionFunctionLibrary_C* GetDefaultObj();

	void CalculateProspectState(struct FProspectInfo& ProspectInfo, class AIcarusPlayerController* Target, class UObject* __WorldContext, enum class E_ProspectState* ProspectState, const struct FGameplayConfigRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayConfig& CallFunc_GetGameplayConfigStruct_GameplayConfig, enum class EValid CallFunc_GetGameplayConfigStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const class FString& CallFunc_GetUserID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HaveJoinedProspect_AssignedToProspect, enum class EProspectLocation CallFunc_HaveJoinedProspect_Status, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void HaveJoinedProspect(const class FString& UserID, TArray<struct FAssociatedMemberInfo>& Members, int32 ChrSlot, class UObject* __WorldContext, bool* AssignedToProspect, enum class EProspectLocation* Status, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAssociatedMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HasSettled(class AIcarusPlayerController* Target, struct FFProspectServerInfo& FProspectServerInfo, class UObject* __WorldContext, bool* Settled, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetUserID_ReturnValue, const struct FAssociatedMemberInfo& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void ProspectInfoIsValid(const struct FFProspectServerInfo& Server_Prospect_Info, bool RequiresSession, class UObject* __WorldContext, bool* Valid, const struct FIcarusSession& K2Node_MakeStruct_IcarusSession, bool CallFunc_ProspectInfoIsValid_ReturnValue);
};

}



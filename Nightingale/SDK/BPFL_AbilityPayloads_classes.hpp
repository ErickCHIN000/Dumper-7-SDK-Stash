#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_AbilityPayloads.BPFL_AbilityPayloads_C
class UBPFL_AbilityPayloads_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_AbilityPayloads_C* GetDefaultObj();

	void GetGameplayTagConatinerFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, struct FGameplayTagContainer* GameplayTagContainer, const struct FGameplayTagContainer& LGameplayTagContainer, int32 LInteger, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue);
	void GetIntFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, int32* Integer, int32 LInteger, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, int32 CallFunc_GetIntegerFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasInteger_ReturnValue);
	void GetDataTableRowHandleFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, struct FDataTableRowHandle* RowHandle, const struct FDataTableRowHandle& LDataTableRowHandle, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, const struct FDataTableRowHandle& CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue);
};

}



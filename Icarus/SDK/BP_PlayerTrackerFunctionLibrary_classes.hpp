#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PlayerTrackerFunctionLibrary.BP_PlayerTrackerFunctionLibrary_C
class UBP_PlayerTrackerFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_PlayerTrackerFunctionLibrary_C* GetDefaultObj();

	class FString GetPlayerTrackerSaveFormat(const class FString& PlayerID, int32 Slot, class UObject* __WorldContext, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	class FString GetPlayerTrackerSaveName(const struct FPlayerCharacterID& PlayerCharacterID, class UObject* __WorldContext, const class FString& CallFunc_GetPlayerTrackerSaveFormat_ReturnValue);
};

}



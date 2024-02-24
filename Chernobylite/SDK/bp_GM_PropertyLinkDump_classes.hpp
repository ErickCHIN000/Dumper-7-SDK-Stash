#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x630 - 0x5F9)
// BlueprintGeneratedClass bp_GM_PropertyLinkDump.bp_GM_PropertyLinkDump_C
class Abp_GM_PropertyLinkDump_C : public Abp_gm_CGGamemode_C
{
public:
	uint8                                        Pad_25D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class FName>                          Levels;                                            // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Current;                                           // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PersistentLevels;                                  // 0x620(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Abp_GM_PropertyLinkDump_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ExecuteUbergraph_bp_GM_PropertyLinkDump(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetSublevelsForCurrentPersistant_ReturnValue, int32 Temp_int_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_IsLevelLoaded_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue);
};

}



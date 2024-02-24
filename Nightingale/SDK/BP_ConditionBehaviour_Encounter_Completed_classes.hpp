#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Encounter_Completed.BP_ConditionBehaviour_Encounter_Completed_C
class UBP_ConditionBehaviour_Encounter_Completed_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Count;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterType                    EncounterType;                                     // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EPlugPalette                      EncounterPalette;                                  // 0x8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3175[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count_Threshold;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3179[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EncounterManager;                                  // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Encounter_Completed_C* GetDefaultObj();

	void Shutdown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess);
	void OnEncounterFinishedHandler(class UEncounterDataAsset* EncounterData, bool bSuccess, bool CallFunc_DoesMatchEncounter_bDoesMatch, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void DoesMatchEncounter(class UEncounterDataAsset* EncounterDataAsset, bool* bDoesMatch, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
	void GetDebugText(class FText* Description, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupCondition();
	void OnConditionRemoved();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void SSMReady(class AManagerBase* Manager, bool bIsReady);
	void ExecuteUbergraph_BP_ConditionBehaviour_Encounter_Completed(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, TSubclassOf<class AManagerBase> Temp_class_Variable_1, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_FindFirstImplementor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
};

}



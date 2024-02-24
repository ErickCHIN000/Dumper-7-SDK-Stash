#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x190 - 0xA0)
// BlueprintGeneratedClass BP_AsyncAssetLoader.BP_AsyncAssetLoader_C
class UBP_AsyncAssetLoader_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSet<TSoftObjectPtr<class UObject>>          AssetsToLoad;                                      // 0xA8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<TSoftClassPtr<class UObject>>           ClassesToLoad;                                     // 0xF8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            AsyncLoadComplete;                                 // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       TimeoutPerAsset;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutHandle;                                     // 0x160(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        RemainingDataToLoad;                               // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       LoadedAssets;                                      // 0x170(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        LoadedClasses;                                     // 0x180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AsyncAssetLoader_C* GetDefaultObj();

	void PrintFailureError(class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void WarnAboutTimeOut(const class FString& ErrorString, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<TSoftClassPtr<class UObject>>& CallFunc_Set_ToArray_Result, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftClassPtr<class UObject> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<TSoftObjectPtr<class UObject>>& CallFunc_Set_ToArray_Result_1, int32 CallFunc_Array_Length_ReturnValue_1, TSoftObjectPtr<class UObject> CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void IsWaitingForLoad(bool* bIsWaitingForLoad, bool CallFunc_Greater_IntInt_ReturnValue);
	void FinishLoadingSingle(int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void FinishLoading(const class FString& ErrorString);
	void OnLoaded_E158F3DC4D4320C94F4030967576A087(class UObject* Loaded);
	void OnLoaded_9C405CA84F6C46275D8DBC9A9B17ACE3(TSubclassOf<class UObject> Loaded);
	void LoadAssets(TArray<TSoftObjectPtr<class UObject>>& AssetsToLoad);
	void TimedOut();
	void LoadClasses(TArray<TSoftClassPtr<class UObject>>& ClassesToLoad);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_AsyncAssetLoader(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded_1, int32 Temp_int_Loop_Counter_Variable, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<TSoftObjectPtr<class UObject>>& K2Node_CustomEvent_AssetsToLoad, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class UObject> CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftObjectReference_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UClass* Temp_class_Variable, TArray<TSoftClassPtr<class UObject>>& K2Node_CustomEvent_ClassesToLoad, int32 CallFunc_Array_Add_ReturnValue, TSoftClassPtr<class UObject> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 CallFunc_Array_Add_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
	void AsyncLoadComplete__DelegateSignature();
};

}



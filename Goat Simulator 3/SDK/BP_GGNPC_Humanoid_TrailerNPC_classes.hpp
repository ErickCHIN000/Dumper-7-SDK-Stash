#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x1351 - 0x12D1)
// BlueprintGeneratedClass BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C
class ABP_GGNPC_Humanoid_TrailerNPC_C : public ABP_GGNPC_Humanoid_C
{
public:
	uint8                                        Pad_E88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       RagdollForceDir;                                   // 0x12E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         DefaultAnimation;                                  // 0x12E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x12F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGender                           NewGender;                                         // 0x12F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Manually_Set_Appearance;                           // 0x12F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E94[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AppearanceArea;                                    // 0x12F8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        AreaPredeterminedElements;                         // 0x1300(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        FullBodyAppearance;                                // 0x1310(0x10)(Edit, BlueprintVisible)
	class FString                                AppearanceSet;                                     // 0x1320(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         UpdateEditorSetAppearance;                         // 0x1330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMoods                            StartingMood;                                      // 0x1331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E9C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NPC_Name_Override;                                 // 0x1338(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTag                          Voice_Identity_Override;                           // 0x1348(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Toggle_Ragdoll;                                // 0x1350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_GGNPC_Humanoid_TrailerNPC_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void Finished_B84EBAB549077A7EE6E420A318AB1451(TArray<struct FLoadedAppearancePart>& AppearanceParts, class UMaterialInterface* SkinMaterial);
	void ReceiveBeginPlay();
	void LoadEditorAppearance();
	void ExecuteUbergraph_BP_GGNPC_Humanoid_TrailerNPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class FString>& CallFunc_GenerateAndSetNewAppearance_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetGoatSimName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FLoadedAppearancePart>& Temp_struct_Variable, class UMaterialInterface* Temp_object_Variable, const struct FLoadedAppearancePart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAppearanceSetRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, TArray<class FString>& K2Node_MakeArray_Array, class UGGLoadNPCAppearance* CallFunc_LoadNPCAppearance_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FLoadedAppearancePart>& K2Node_CustomEvent_AppearanceParts, class UMaterialInterface* K2Node_CustomEvent_SkinMaterial);
};

}



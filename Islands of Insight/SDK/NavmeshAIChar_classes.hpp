#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x510 - 0x4B8)
// BlueprintGeneratedClass NavmeshAIChar.NavmeshAIChar_C
class ANavmeshAIChar_C : public ACharacter
{
public:
	uint8                                        Pad_1107[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  HairMesh;                                          // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh3;                                     // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh2;                                     // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USophiaGameInstance*                   GI;                                                // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCustomizationDataAsset*      CustomzationAsset;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale_Value;                                       // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               World_Direction;                                   // 0x504(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANavmeshAIChar_C* GetDefaultObj();

	void GetCustomizationAsset(class UCharacterCustomizationDataAsset** Output1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UCharacterCustomizationDataAsset*>& K2Node_MakeArray_Array, class UCharacterCustomizationDataAsset* CallFunc_Array_Get_Item);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ReceiveBeginPlay();
	void Customize();
	void ReceiveTick(float DeltaSeconds);
	void CloseGate();
	void OpenGate();
	void OpenEvent();
	void ExecuteUbergraph_NavmeshAIChar(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationAsset_Output1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UTexture2D* CallFunc_Array_Get_Item_1, class USkeletalMesh* CallFunc_Array_Get_Item_2, class USkeletalMesh* CallFunc_Array_Get_Item_3, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_Normal_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FCustomization& CallFunc_Array_Get_Item_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item_6, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_7, class USkeletalMesh* CallFunc_Array_Get_Item_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Event_DeltaSeconds, bool CallFunc_RandomBool_ReturnValue, float K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, class USkeletalMesh* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_RandomIntegerInRange_ReturnValue_5, class UStaticMesh* CallFunc_Array_Get_Item_10, bool CallFunc_SetStaticMesh_ReturnValue);
};

}



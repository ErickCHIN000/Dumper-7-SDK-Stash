#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x5F8 - 0x5E9)
// BlueprintGeneratedClass BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C
class ABPClass_Sword2H_Fatebreaker_C : public ABPClass_Melee_Sword_2H_C
{
public:
	uint8                                        Pad_4490[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPClass_Sword2H_Fatebreaker_C* GetDefaultObj();

	void UserConstructionScript();
	void Notify_SpawnProj_MageStaff(class AOakCharacter_Player* OwnerPlayer);
	void Notify_SpawnProj_Ragnarok(class AOakCharacter_Player* OwnerPlayer);
	void Notify_SpawnProj_Fatebreaker(class AOakCharacter_Player* OwnerPlayer);
	void ExecuteUbergraph_BPClass_Sword2H_Fatebreaker(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AOakCharacter_Player* K2Node_Event_OwnerPlayer2, class AOakCharacter_Player* K2Node_Event_OwnerPlayer1, class AOakCharacter_Player* K2Node_Event_OwnerPlayer, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FRotator& CallFunc_GetCurrentFacingRotation_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}



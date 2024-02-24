#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// BlueprintGeneratedClass PayloadBehavior_Multi_Fireball.PayloadBehavior_Multi_Fireball_C
class UPayloadBehavior_Multi_Fireball_C : public USpellBehavior_MultiCustom
{
public:
	struct FRandomStream                         RandIntStream;                                     // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPayloadBehavior_Multi_Fireball_C* GetDefaultObj();

	TArray<struct FSpellSpawnInfo> GetCustomSpellSpawnInfo(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, int32 MaxSpawnCount, const struct FTransform& OverrideInitialTransform, class FName CastingSocket, int32 IndexToUse, const TArray<struct FTransform>& ConeTransforms, class AOakCharacter_Player* InPlayer, const TArray<struct FSpellSpawnInfo>& SpellStructToUse, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, const struct FSpellSpawnInfo& K2Node_MakeStruct_SpellSpawnInfo, int32 CallFunc_Array_AddUnique_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue);
};

}



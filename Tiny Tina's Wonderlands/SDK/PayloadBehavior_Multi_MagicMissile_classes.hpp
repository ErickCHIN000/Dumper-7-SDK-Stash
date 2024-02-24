#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x59 - 0x50)
// BlueprintGeneratedClass PayloadBehavior_Multi_MagicMissile.PayloadBehavior_Multi_MagicMissile_C
class UPayloadBehavior_Multi_MagicMissile_C : public USpellBehavior_MultiCustom
{
public:
	struct FRandomStream                         RandIntStream;                                     // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         UsingWand;                                         // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPayloadBehavior_Multi_MagicMissile_C* GetDefaultObj();

	void GetSpellCastingSocket(class AOakCharacter* PlayerChar, class UObject* SpellMod, class FName* Socket, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, bool Temp_bool_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, class FName K2Node_Select_Default, class FName K2Node_Select1_Default);
	TArray<struct FSpellSpawnInfo> GetCustomSpellSpawnInfo(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, int32 MaxSpawnCount, const struct FTransform& OverrideInitialTransform, class FName CastingSocket, int32 IndexToUse, const TArray<struct FTransform>& ConeTransforms, class AOakCharacter_Player* InPlayer, const TArray<struct FSpellSpawnInfo>& SpellStructToUse, class FName CallFunc_GetSpellCastingSocket_Socket, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FSpellSpawnInfo& K2Node_MakeStruct_SpellSpawnInfo, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1);
};

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PayloadBehavior_Multi_Fireball.PayloadBehavior_Multi_Fireball_C
// (None)

class UClass* UPayloadBehavior_Multi_Fireball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PayloadBehavior_Multi_Fireball_C");

	return Clss;
}


// PayloadBehavior_Multi_Fireball_C PayloadBehavior_Multi_Fireball.Default__PayloadBehavior_Multi_Fireball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPayloadBehavior_Multi_Fireball_C* UPayloadBehavior_Multi_Fireball_C::GetDefaultObj()
{
	static class UPayloadBehavior_Multi_Fireball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPayloadBehavior_Multi_Fireball_C*>(UPayloadBehavior_Multi_Fireball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PayloadBehavior_Multi_Fireball.PayloadBehavior_Multi_Fireball_C.GetCustomSpellSpawnInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxSpawnCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  OverrideInitialTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FSpellSpawnInfo>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class FName                        CastingSocket                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToUse                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          ConeTransforms                                                   (Edit, BlueprintVisible, ZeroConstructor)
// class AOakCharacter_Player*        InPlayer                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSpellSpawnInfo>     SpellStructToUse                                                 (Edit, BlueprintVisible, ZeroConstructor)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpellSpawnInfo             K2Node_MakeStruct_SpellSpawnInfo                                 (NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorAimViewPoint_OutLocation                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorAimViewPoint_OutRotation                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_GeneratePointsOnCone_ReturnValue                        (ZeroConstructor, ReferenceParm)

TArray<struct FSpellSpawnInfo> UPayloadBehavior_Multi_Fireball_C::GetCustomSpellSpawnInfo(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, int32 MaxSpawnCount, const struct FTransform& OverrideInitialTransform, class FName CastingSocket, int32 IndexToUse, const TArray<struct FTransform>& ConeTransforms, class AOakCharacter_Player* InPlayer, const TArray<struct FSpellSpawnInfo>& SpellStructToUse, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, const struct FSpellSpawnInfo& K2Node_MakeStruct_SpellSpawnInfo, int32 CallFunc_Array_AddUnique_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PayloadBehavior_Multi_Fireball_C", "GetCustomSpellSpawnInfo");

	Params::UPayloadBehavior_Multi_Fireball_C_GetCustomSpellSpawnInfo_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;
	Parms.MaxSpawnCount = MaxSpawnCount;
	Parms.OverrideInitialTransform = OverrideInitialTransform;
	Parms.CastingSocket = CastingSocket;
	Parms.IndexToUse = IndexToUse;
	Parms.ConeTransforms = ConeTransforms;
	Parms.InPlayer = InPlayer;
	Parms.SpellStructToUse = SpellStructToUse;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue1 = CallFunc_GetEquippedInventoryForSlot_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_SpellSpawnInfo = K2Node_MakeStruct_SpellSpawnInfo;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorAimViewPoint_OutLocation = CallFunc_GetActorAimViewPoint_OutLocation;
	Parms.CallFunc_GetActorAimViewPoint_OutRotation = CallFunc_GetActorAimViewPoint_OutRotation;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GeneratePointsOnCone_ReturnValue = CallFunc_GeneratePointsOnCone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



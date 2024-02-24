#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C
// (None)

class UClass* UBPWeaponFireProjectileComponent_Magic_SMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponFireProjectileComponent_Magic_SMG_C");

	return Clss;
}


// BPWeaponFireProjectileComponent_Magic_SMG_C BPWeaponFireProjectileComponent_Magic_SMG.Default__BPWeaponFireProjectileComponent_Magic_SMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponFireProjectileComponent_Magic_SMG_C* UBPWeaponFireProjectileComponent_Magic_SMG_C::GetDefaultObj()
{
	static class UBPWeaponFireProjectileComponent_Magic_SMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponFireProjectileComponent_Magic_SMG_C*>(UBPWeaponFireProjectileComponent_Magic_SMG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C.Notify_Used_Shock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_Magic_SMG_C::Notify_Used_Shock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_SMG_C", "Notify_Used_Shock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_Magic_SMG_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_SMG_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C.UsedFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_Magic_SMG_C::UsedFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_SMG_C", "UsedFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C.Fire_BonusProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectileComponent_Magic_SMG_C::Fire_BonusProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_SMG_C", "Fire_BonusProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Magic_SMG
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               CallFunc_GetAssociatedPrimaryCharacter_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_BaseWeapon_C*        K2Node_DynamicCast_AsBPWeap_Base_Weapon                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              CallFunc_GetDamageType_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetElementalType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorAimViewPoint_OutLocation                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorAimViewPoint_OutRotation                        (IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)

void UBPWeaponFireProjectileComponent_Magic_SMG_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Magic_SMG(int32 EntryPoint, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Base_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class UClass* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectileComponent_Magic_SMG_C", "ExecuteUbergraph_BPWeaponFireProjectileComponent_Magic_SMG");

	Params::UBPWeaponFireProjectileComponent_Magic_SMG_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Magic_SMG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAssociatedPrimaryCharacter_ReturnValue = CallFunc_GetAssociatedPrimaryCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPWeap_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_GetElementalType_ReturnValue = CallFunc_GetElementalType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetActorAimViewPoint_OutLocation = CallFunc_GetActorAimViewPoint_OutLocation;
	Parms.CallFunc_GetActorAimViewPoint_OutRotation = CallFunc_GetActorAimViewPoint_OutRotation;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}



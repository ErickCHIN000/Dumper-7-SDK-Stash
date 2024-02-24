#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C
// (Actor)

class UClass* AProjectile_SG_TOR_Magic_AltFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_SG_TOR_Magic_AltFire_C");

	return Clss;
}


// Projectile_SG_TOR_Magic_AltFire_C Projectile_SG_TOR_Magic_AltFire.Default__Projectile_SG_TOR_Magic_AltFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_SG_TOR_Magic_AltFire_C* AProjectile_SG_TOR_Magic_AltFire_C::GetDefaultObj()
{
	static class AProjectile_SG_TOR_Magic_AltFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_SG_TOR_Magic_AltFire_C*>(AProjectile_SG_TOR_Magic_AltFire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_SG_TOR_Magic_AltFire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_TOR_Magic_AltFire_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C.InitProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_SG_TOR_Magic_AltFire_C::InitProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_TOR_Magic_AltFire_C", "InitProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C.DoMagicTORStickyAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InHitActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_SG_TOR_Magic_AltFire_C::DoMagicTORStickyAttach(class AActor* InHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_TOR_Magic_AltFire_C", "DoMagicTORStickyAttach");

	Params::AProjectile_SG_TOR_Magic_AltFire_C_DoMagicTORStickyAttach_Params Parms{};

	Parms.InHitActor = InHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C.ExecuteUbergraph_Projectile_SG_TOR_Magic_AltFire
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InHitActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponFireProjectileComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_SG_TOR_Magic_AltFire_C::ExecuteUbergraph_Projectile_SG_TOR_Magic_AltFire(int32 EntryPoint, class AActor* K2Node_Event_InHitActor, class UClass* Temp_class_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, uint8 Temp_byte_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* Temp_class_Variable3, uint8 Temp_byte_Variable1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_SG_TOR_Magic_AltFire_C", "ExecuteUbergraph_Projectile_SG_TOR_Magic_AltFire");

	Params::AProjectile_SG_TOR_Magic_AltFire_C_ExecuteUbergraph_Projectile_SG_TOR_Magic_AltFire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InHitActor = K2Node_Event_InHitActor;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


